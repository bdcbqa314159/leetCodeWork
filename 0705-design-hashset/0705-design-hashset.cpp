class MyHashSet {
public:
    
    int numBuckets = 15000;
    vector<vector<int>> buckets = vector<vector<int>>(numBuckets, vector<int>{});
    
    int hash(int key){
        return key%numBuckets;
    }
    
    vector<int>::iterator helper(int key, int &x){
        x = hash(key);
        return find(buckets[x].begin(), buckets[x].end(), key);
    }
    
    MyHashSet() {
        
    }
    
    void add(int key) {
        int x{};
        auto it = helper(key, x);
        if (it == buckets[x].end())
            buckets[x].push_back(key);
    }
    
    void remove(int key) {
        int x{};
        auto it = helper(key, x);
        if (it != buckets[x].end())
            buckets[x].erase(it);
    }
    
    bool contains(int key) {
        int x{};
        auto it = helper(key, x);
        return it!=buckets[x].end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
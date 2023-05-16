class MyHashSet {
public:
    
    int numBuckets = 15000;
    vector<vector<int>> buckets = vector<vector<int>>(numBuckets, vector<int>{});
    
    int hash(int key){
        return key%numBuckets;
    }
    
    vector<int>::iterator helper(int key){
        int i = hash(key);
        return find(buckets[i].begin(), buckets[i].end(), key);
    }
    
    
    MyHashSet() {
        
    }
    
    void add(int key) {
        int i = hash(key);
        auto it = helper(key);
        
        if (it == buckets[i].end())
            buckets[i].push_back(key);
    }
    
    void remove(int key) {
        int i = hash(key);
        auto it = helper(key);
        
        if (it!=buckets[i].end())
            buckets[i].erase(it);
    }
    
    bool contains(int key) {
        int i = hash(key);
        auto it = helper(key);
        return it!=buckets[i].end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
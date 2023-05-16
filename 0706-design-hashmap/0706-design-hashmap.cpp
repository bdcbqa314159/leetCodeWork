class MyHashMap {
public:
    
    int size = 10;
    vector<list<pair<int,int>>> mp = vector<list<pair<int,int>>>(size);
    
    int hash(int key){
        return key%size;
    }
    
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int i = hash(key);
        for (auto &x: mp[i]){
            if (x.first == key){
                x.second = value;
                return;
            }
        }
        mp[i].push_back({key,value});
    }
    
    int get(int key) {
        int i = hash(key);
        for (auto x: mp[i]){
            if (x.first == key)
                return x.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int i = hash(key);
        for (auto it = mp[i].begin(); it!=mp[i].end(); it++){
            if (it->first == key){
                mp[i].erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
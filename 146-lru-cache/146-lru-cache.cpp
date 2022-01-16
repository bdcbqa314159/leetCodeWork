class LRUCache {
    int size;
    list<pair<int, int>>ls;
    unordered_map<int, list<pair<int, int>>::iterator> hash;
public:
    LRUCache(int cap) {
        size = cap;
    }
    
    int get(int key) {
        if(hash.find(key) == hash.end())
            return -1;
        
        auto it = hash[key];
        ls.push_back({key, it->second});
        ls.erase(it);
        auto lit = ls.end();
        lit--;
        hash[key] = lit;
        
        return lit->second;
    }
    
    void put(int key, int value) {
        if(hash.find(key) != hash.end()) {
            ls.erase(hash[key]);
            ls.push_back({key, value});
            auto it = ls.end();
            it--;
            hash[key]=it;
            return;
        }
        
        if(hash.size() == size) {
            auto it = ls.front().first;
            ls.pop_front();
            hash.erase(it);
        }
        
        ls.push_back({key, value});
        auto it = ls.end();
        it--;
        hash[key]=it;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
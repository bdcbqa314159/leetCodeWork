class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(!ump.count(key)) {
            return -1;
        }
        l.splice(l.begin(), l, ump[key]);
        ump[key] = l.begin();
        return ump[key]->second;
    }
    
    void put(int key, int value) {
        if(get(key) != -1) {
            ump[key]->second = value;
            return;
        }
        if(ump.size() == cap) {
            ump.erase(l.back().first);
            l.pop_back();
        }
        l.emplace_front(make_pair(key, value));
        ump[key] = l.begin();
    }
private:
    int cap;
    unordered_map<int, list<pair<int, int>>::iterator> ump;
    list<pair<int, int>> l; 
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
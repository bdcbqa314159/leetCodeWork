class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        string current = "";
        multiset<string> store;
        vector<string> temp;
        vector<vector<string>> ans;
        
        for (auto c: searchWord){
            current += c;
            store.clear();
            for (auto s:products){
                if (s.substr(0, current.size())==current)
                    store.insert(s);
            }
            temp.clear();
            for (int i = 0; i<3 && !store.empty(); i++){
                temp.push_back(*store.begin());
                store.erase(store.begin());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
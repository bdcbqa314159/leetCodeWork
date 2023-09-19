class Solution {
public:
    void push(stack<int>& st, vector<int> v){
        for (int i = 0;i<v.size(); i++) st.push(v[i]);
        return;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> st;
        int n = rooms.size();
        push(st, rooms[0]);
        map<int,bool> mpp;
        
        while (!st.empty()){
            int temp = st.top();
            st.pop();
            if(!mpp[temp])
                push(st, rooms[temp]);
            mpp[temp] = true;
        }
        
        for (int i = 1; i<n; i++){
            if (!mpp[i]) return false;
        }
        return true;
    }
};
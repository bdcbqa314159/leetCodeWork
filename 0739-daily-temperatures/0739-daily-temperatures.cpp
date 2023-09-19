class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size());
        stack<pair<int,int>> st;
        
        for (int i = temperatures.size()-1; i>=0; i--){
            int curr = temperatures[i];
            int day = -1;
            while (!st.empty()){
                if (curr>= st.top().second)
                    st.pop();
                else{
                    day = st.top().first;
                    st.push({i,curr});
                    break;
                }
            }
            if (st.empty())
                st.push({i,curr});
            result[i] = day == -1?0:day-i;
        }
        return result;
    }
};
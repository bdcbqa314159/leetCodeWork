class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        if (numRows == 1){
            vector<int> a(1,1);
            result.push_back(a);
            return result;
        }
        
        else if(numRows == 2){
            vector<int> a(1,1);
            result.push_back(a);
            a.resize(2,1);
            result.push_back(a);
            return result;
        }
        
        else{
            vector<int> a(1,1);
            result.push_back(a);
            a.resize(2,1);
            result.push_back(a);
            
            for (int i = 3; i<=numRows; i++){
                vector<int> temp{};
                temp.push_back(1);
                for(int j = 1; j<a.size(); j++){
                    temp.push_back(a[j]+a[j-1]);
                }
                
                temp.push_back(1);
                a.resize(temp.size());
                a=temp;
                result.push_back(a);
            }
            
            return result;
        }
    }
};


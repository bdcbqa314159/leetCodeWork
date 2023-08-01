class Solution {
public:
    
    void helper(int start, int num,int size, vector<vector<int>> &result, vector<int> &aux){
        
        if (aux.size() == size ){
            result.push_back(aux);
            return;
        }
        
        for (int i = start; i<num+1;i++){
            aux.push_back(i);
            helper(i+1,num,size,result,aux);
            aux.pop_back();
        }
        
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> result{};
        vector<int> aux{};
        
        helper(1,n,k, result, aux);
        
        return result;
    }
};
class Solution {
public:
    
    unordered_map<char, int> creator(string s){
        unordered_map<char, int> output;
        
        for (int i = 0; i<s.size(); i++){
            if (output.count(s[i]) == 0){
                output[s[i]] = 1;
            }
            else{
                output[s[i]]++;
            }
        }
        
        return output;
    }
    
    
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> output1 = creator(ransomNote);
        unordered_map<char, int> output2 = creator(magazine);
        
        unordered_map<char, int>::iterator it;
        
        for (it = output1.begin(); it != output1.end(); it++){
            if (output2.find(it->first) == output2.end()){
                
                return false;
            }
            else{
                if (it->second > output2[it->first] ){
                    return false;
                }
            }
            
        }
        
        return true;
               
    }
};
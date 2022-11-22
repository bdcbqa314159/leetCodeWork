class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int l1 = a.size()-1;
        int l2 = b.size()-1;
        
        int carry = 0;
        
        while (l1>=0 || l2>=0 || carry > 0){
            
            int val1 = 0;
            int val2 = 0;
            
            val1 = (l1>=0) ? a[l1] - '0':0;
            val2 = (l2>=0) ? b[l2] - '0':0;
            
            int sum = val1+val2+carry;
            
            result.push_back((sum&1)+'0');
            carry = (sum>>1)&1;
            
            l1--;l2--;
            
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};




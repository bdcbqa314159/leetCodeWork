class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int l1 = a.size()-1, l2 = b.size()-1, carry = 0;
        while (l1>=0 || l2>=0 || carry>0){
            int v1 = 0, v2 = 0, sum = 0;
            v1 = (l1>=0)? a[l1]-'0':0;
            v2 = (l2>=0)? b[l2]-'0':0;
            sum = v1 + v2 + carry;
            result.push_back((sum&1)+'0');
            carry = (sum>>1)&1;
            l1--;l2--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
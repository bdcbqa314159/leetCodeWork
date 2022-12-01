class Solution {
public:
    
    bool isVowel(char c){
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' );
    }
    
    int totalOfVowels(string s){
        int count = 0;
        for (auto c : s)
            count += 1*isVowel(c);
        return count;
    }
    
    bool halvesAreAlike(string s) {
        int n = s.size();
        string a = s.substr(0, n/2);
        string b = s.substr(n/2, n-1);
        
        return totalOfVowels(a) == totalOfVowels(b);
    }
};
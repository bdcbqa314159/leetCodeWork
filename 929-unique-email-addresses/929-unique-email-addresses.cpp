class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        set<pair<string,string>> uniqueEmails;
        
        for (auto s : emails){
            int arobas = s.find('@');
            string user = s.substr(0,arobas);
            string domain = s.substr(arobas+1);
            
            int plus = user.find('+');
            user = user.substr(0,plus);
            
            string temp = "";
            int i = user.find('.');
            
            while (i > -1){                
                user = user.replace(i,1,"");
                i = user.find('.');
            }
            
            if (temp!="") user = temp;
            
            
        
            uniqueEmails.insert(make_pair(user, domain));
        
        }
        // for (auto c: uniqueEmails){
        //     cout<<c.first<<" "<<c.second<<endl;
        // }
        
        return uniqueEmails.size();
    }
};


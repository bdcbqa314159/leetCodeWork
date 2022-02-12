class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> mySet;
        bool isPresent = false;
        for (auto  word: wordList){
            if (endWord.compare(word) == 0)
                isPresent = true;
            mySet.insert(word);
            
        }
        
        if (isPresent == false)
            return 0;
        
        queue<string> q;
        q.push(beginWord);
        int depth = 0;
        
        while(!q.empty()){
            depth+=1;
            int lsize = q.size();
            while(lsize--){
                string curr = q.front();
                q.pop();
                    
                for (int i = 0; i<curr.length(); ++i){
                    string temp = curr;
                    for (char c='a'; c<='z'; ++c){
                        temp[i] = c;
                        
                        if (curr.compare(temp) == 0)
                            continue;
                        if (temp.compare(endWord) == 0)
                            return depth+1;
                        if(mySet.find(temp)!=mySet.end()){
                            q.push(temp);
                            mySet.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};
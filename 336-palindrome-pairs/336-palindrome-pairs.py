class Solution:
    def palindromePairs(self, words: List[str]) -> List[List[int]]:
        lookup = {}
        
        for index, word in enumerate(words):
            lookup[word] = index
        
        ans = []
        
        for index, word in enumerate(words):
            for L in range(len(word) + 1):
                now = word[:L][::-1]
                
                if now in lookup and lookup[now ]!=index:
                    rword = word + now
                    if rword == rword[::-1]:
                        ans.append((index, lookup[now]))
                        
                now = word[::-1][:L]
                
                if now in lookup and lookup[now]!=index:
                    rword = now+word
                    if rword == rword[::-1]:
                        ans.append((lookup[now], index))
                        
        return set(ans)
                        
                        
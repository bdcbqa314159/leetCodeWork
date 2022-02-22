class Solution:
    def titleToNumber(self, s: str) -> int:
        multiplier = 1
        column = 0
        for i in range(len(s)-1,-1,-1):
            column += (ord(s[i])-64)*multiplier
            multiplier*=26
        
        return column
        
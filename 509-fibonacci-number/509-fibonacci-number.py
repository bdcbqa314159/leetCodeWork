class Solution:
    def fib(self, n: int) -> int:
        
        if n == 0:
            return 0
        elif n ==1:
            return 1
        
        else:
            f = (n+1)*[0]
        
            f[0] = 0
            f[1] = 1
        
            for i in range(2,n+1):
                f[i] = f[i-1]+f[i-2]
            
            return f[-1]
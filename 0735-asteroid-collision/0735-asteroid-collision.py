class Solution:
    def asteroidCollision(self, asteroids: List[int]) -> List[int]:
        if not asteroids: return []
        
        output = []
        
        output.append(asteroids[0])
        
        for a in asteroids[1:]:
            while output and output[-1]>0 and a<0 and abs(a)>output[-1]:
                output.pop()
                
            if not output:
                output.append(a)
            elif output[-1]>0 and a<0 and output[-1]==abs(a):
                output.pop()
            elif output[-1]<0 or a >0 or abs(output[-1])<abs(a):
                output.append(a)
        return output
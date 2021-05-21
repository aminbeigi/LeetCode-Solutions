class Solution:
    def countBits(self, num: int) -> List[int]:
        res = [0]
        for i in range(1, num+1):
            res.append(res[i >> 1] + i % 2)
        return res
    
    def countBits2(self, num: int) -> List[int]:
        return [bin(i)[2:].count('1') for i in range(num+1)] 
    
    def countBits3(self, num: int) -> List[int]:
        res = []
        for i in range(num+1):
            s = bin(i)[2:]
            res.append(s.count('1'))
        return res    
            

class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        rightmost = {c:i for i, c in enumerate(S)}
        left, right = 0, 0
    
        result = []
        for i, letter in enumerate(S):
    
            right = max(right,rightmost[letter])
        
            if i == right:
                result += [right-left + 1]
                left = i+1
        return result

    def partitionLabels2(self, s: str) -> List[int]:
        d = {}
        for idx, c in enumerate(s):
            if c not in d:
                d[c] = {'start': idx, 'end': s.rfind(c)}
        
        d_first_key = dict(list(d.values())[0])
        curr_start = d_first_key['start']
        curr_end = d_first_key['end']
        output = []
        for k in d.values():
            if k['start'] > curr_end:
                # new partition
                res = curr_end - curr_start + 1
                output.append(res)
                curr_start = k['start']
                curr_end = k['end']
            elif k['start'] < curr_end and k['end'] > curr_end:
                # make current partition longer
                curr_end = k['end']
         
        res = curr_end - curr_start + 1
        output.append(res)
        return output
    

class Solution:
    def defangIPaddr(self, address: str) -> str:
        return address.replace('.', '[.]')

    def defangIPaddr2(self, address: str) -> str:
        output = ''
        for c in address:
            if c == '.':
                output += '[.]'
            else:
                output += c
        return output 

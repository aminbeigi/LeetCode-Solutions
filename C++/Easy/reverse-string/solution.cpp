class Solution {
public:
    void reverseString1(vector<char>& s) {  
        int i = 0;
        while (i < s.size()/2) {
            char temp = s[i]; // ["h","e","l","l","o"]
            s[i] = s[s.size() - 1 - i]; // ["o","e","l","l","o"]
            s[s.size() - 1 - i] = temp; // ["o","e","l","l","h"]
            ++i;
        }
    }
    
    void reverseString2(vector<char>& s) {  
        for (int i = 0; i < s.size()/2; ++i) {
            char temp = s[i]; // ["h","e","l","l","o"]
            s[i] = s[s.size() - 1 - i]; // ["o","e","l","l","o"]
            s[s.size() - 1 - i] = temp; // ["o","e","l","l","h"]        
        }
    }
    
    void reverseString(vector<char>& s) {  
        reverse(s.begin(), s.end());
    }
};
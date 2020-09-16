class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for (auto &c : s) {
            m[c]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
    
    
    int firstUniqChar2(string s) { 
        unordered_map<char, int> m;
        
        for (int i = 0; i < s.size(); ++i) {
            if (!(m.count(s[i]) > 0)) {
                m.insert({s[i], i});     
            } else { 
                m.at(s[i]) = numeric_limits<int>::max();
            }
        }
        
        int output = numeric_limits<int>::max();
        for (auto it : m) {
            if (it.second < output) {
                output = it.second;
            }
        }  
        
        if (output == numeric_limits<int>::max()) {
            return -1;
        }
        
        return output;
    } 
    
};
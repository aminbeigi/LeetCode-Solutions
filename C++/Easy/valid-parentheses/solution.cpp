class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto& c : s) {
            switch(c) {
                case '{': stk.push('}'); break;
                case '[': stk.push(']'); break;
                case '(': stk.push(')'); break;
                default:
                    if (stk.empty() || c != stk.top()) 
                        return false;
                    else stk.pop();
            }
        }
		
        return stk.empty();
    }
    
    bool isValid2(string s) {
        if (!(s.size() % 2 == 0))
            return false;
        
        unordered_map<char, char> m = { {'(', ')'},
                                    {'[', ']'},
                                    {'{', '}'}
        };
        
        stack<char> my_stack;
        
        for (auto& c : s) {
            if (m.count(c)) {
                my_stack.push(c);   
            }           
        }

        while (!(my_stack.empty())) {
            if (m[my_stack.top()] == s[s.rfind(my_stack.top()) + 1]) {
                s.erase(s.begin() + s.rfind(my_stack.top()), s.begin() + s.rfind(my_stack.top()) + 2); 
                my_stack.pop();
                continue;
            }
            break;
        }

        return stk.size() == 0;
    }
};
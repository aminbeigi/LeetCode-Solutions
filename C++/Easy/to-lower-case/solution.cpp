class Solution {
public:
    string toLowerCase(string str) {
        for (auto& c : str) {
            if (isupper(c)) {
                c += 32;
            }
        }
        return str;
    }
};
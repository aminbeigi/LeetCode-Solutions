class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int output = 0;
        unordered_set<int> my_set(J.begin(), J.end());
        for (auto& c : S) {
            if (my_set.count(c)) 
                ++output;
        }
        return output;
    }
    
    int numJewelsInStones2(string J, string S) {
        int output = 0;
        for (auto& i : J) {
            for (auto& j : S) {
                if (j == i) {
                    ++output;
                }
            }
        }
        return output;
    }
};
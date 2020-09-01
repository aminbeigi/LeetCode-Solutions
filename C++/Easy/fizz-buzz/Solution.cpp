class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vec(n);

        for (int i = 0; i < n; ++i) {
            vec[i] = to_string(i + 1);
        }

        for (int i = 2; i < n; i += 3) {
            vec[i] = "Fizz";
        }

        for (int i = 4; i < n; i += 5) {
            vec[i] = "Buzz";
        }

        for (int i = 14; i < n; i += 15) {
            vec[i] = "Fizz" + vec[i];
        }
        
        return vec;
    }
    
    vector<string> fizzBuzz2(int n) {
        vector<string> vec;
        for (int i = 0; i < n; ++i) {
            if ((i + 1) % 15 == 0) {
                vec.push_back("FizzBuzz");
                continue;
            } 
            else if ((i + 1) % 5 == 0) {
                vec.push_back("Buzz");
                continue;
            }   
            else if ((i + 1) % 3 == 0) {
                vec.push_back("Fizz");
                continue;
            }
            vec.push_back(to_string(i + 1));
        }
        return vec;
    }
};
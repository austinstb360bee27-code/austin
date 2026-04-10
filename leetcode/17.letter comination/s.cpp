#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        // Keypad mapping
        unordered_map<char, string> phone_map = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };

        vector<string> result = {""};

        for (char digit : digits) {
            vector<string> temp;
            string letters = phone_map[digit];
            
            // Combine each existing combination with new letters
            for (string combination : result) {
                for (char letter : letters) {
                    temp.push_back(combination + letter);
                }
            }
            result = temp;
        }

        return result;
    }
};

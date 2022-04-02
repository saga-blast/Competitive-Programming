class Solution {
public:
    unordered_map<char, vector<char>> letters = {
        {'2' , {'a', 'b', 'c'}},
        {'3' , {'d', 'e', 'f'}},
        {'4' , {'g', 'h', 'i'}},
        {'5' , {'j', 'k', 'l'}},
        {'6' , {'m', 'n', 'o'}},
        {'7' , {'p', 'q', 'r', 's'}},
        {'8' , {'t', 'u', 'v'}},
        {'9' , {'w', 'x', 'y', 'z'}}
    };
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0)
            return {};
		
        vector<char> chars = letters[digits[0]];
		
        string e = "";
		
        vector<string> ans;
		
        if( digits.length() == 1 ) {
            for( char c : chars )
                ans.push_back(e+c);
            
            return ans;
        }
        vector<string> prev = letterCombinations(digits.substr(1));
		
        for( char c : chars ) {
            for( string s : prev ) {
                ans.push_back(c+s);
            }
        }
        return ans;
    }
};
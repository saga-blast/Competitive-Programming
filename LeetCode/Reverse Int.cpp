class Solution {
public:
    int reverse(int x) {
        string numb = std::to_string(x);
        string reversed(numb.rbegin(), numb.rend());
        int rev_x = 0;
        try{
            int rev_x = std::stoi(reversed);
            return x > 0 ? rev_x : -rev_x;
        }
        catch(const std::out_of_range& oor) {
            return rev_x;
        }
    }
};
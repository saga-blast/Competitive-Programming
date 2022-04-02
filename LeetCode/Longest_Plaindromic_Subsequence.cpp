
class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.length(),l,h,start=0,end=1;
        
        for(int i=1;i<size;++i) {
            // for even        
            l= i-1;
            h = i;
            while (l>=0&&h<size && s[l]==s[h]){
                if(end<(h-l+1)){
                    start= l;
                    end = (h-l+1);
                }
                l--;
                h++;
            }
    
            // for odd
            l= i-1;
            h = i+1;
            while (l>=0&&h<size && s[l]==s[h]){
                if(end<(h-l+1)){
                    start= l;
                    end = (h-l+1);
                }
                l--;
                h++;
            }
        }
        return s.substr(start, end);
    }
};
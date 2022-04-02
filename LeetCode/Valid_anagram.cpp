class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m,l;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            l[t[i]]++;
        }
        if(m==l)
            return true;
        else
            return false;
        
    }
};
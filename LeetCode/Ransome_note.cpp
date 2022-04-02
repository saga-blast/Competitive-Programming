class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m,l;
        for(int i=0;i<ransomNote.size();i++){
            m[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            l[magazine[i]]++;
        }
        for(auto it=m.begin();it!=m.end();++it){
            if(it->second > l[it->first])
                return false;
        }
        return true;
    }
};
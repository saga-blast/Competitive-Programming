class Solution {
public:
    string convert(string s, int numrows) {
            string output="";
            int n = s.length();
            
            if(numrows >= n || numrows == 1)
                return s;
    
            int seq[n];
            bool r = false;
    
            for(int i=0,j=0;i<n;i++) {
                seq[i] = j;
                if(j == numrows - 1)  
                    r = true;
                if(j == 0 )
                    r = false;
                if(r)
                    j--;
                else
                    j++;
            }
               
            for(int j=0,k=0;j<numrows;j++) {
                for(int i=0;i<n;i++){
                    if(seq[i] == j)
                        output += s[i];
                }
            }
           
            return output;
            
        }
};
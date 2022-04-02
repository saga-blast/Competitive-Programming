int Solution::minDistance(string A, string B) {
    int n = A.size();
    int m = B.size();
    if(n==m && n==1){
        if(A[0]!=B[0])
            return 1;
        else    
            return 0;
    }

    if(n==m){
        int t1=0,t2=0;
        for(int i=0,j=n-1;i<n && j>=0;i++,j--){
            if(A[i]!=B[i]){
                A[i] = B[i];
                t1++;
            }
            if(A[j]!=B[j]){
                A[j] = B[j];
                t2++;
            }
        }
        return min(t1,t2);
    }
    else if(n>m){
        minDistance(B,A);
    }
    else{
        int t2=n-1,t3=m-1,check=0;
        while(A[t2]==B[t3]){
            t2--;
            t3--;
        }
        int a_t1=0,b_t1=0;

        while(A[a_t1]== B[b_t1] ){
            a_t1++;
            b_t1++;
        }

        unordered_map<char,int> m;
        while(b_t1 < t3){
            m[B[b_t1]]++;
            b_t1++;
        } 
        while(a_t1 <t2){
            if(m[a_t1] != 0 )
                m[A[a_t1]]--;
            else
                m[A[a_t1]]++;
            a_t1++;
        }  
        for(auto x:m){
            if(x.second != 0 ){
                check++;
            }
        } 

        return check;
        }
}

-------------------------------------------------------------------------------------------

int row = A.size();
    int col = B.size();
    
    vector<vector<int> > temp(row+1, vector<int>(col+1));
    
    for(int i = 0; i < temp.size(); i++){
        for(int j = 0; j < temp[0].size(); j++){
            if(j == 0){
                temp[i][j] = i;
            }
            else if(i == 0){
                temp[i][j] = j;
            }
            else if(A[i-1] == B[j-1]){
                temp[i][j] = temp[i-1][j-1];
            }
            else{
                temp[i][j] = min(temp[i-1][j-1], temp[i-1][j]);
                temp[i][j] = min(temp[i][j-1], temp[i][j]);
                temp[i][j] = temp[i][j]+1;
            }
        }
    }
    
    return temp[row][col];


-------------------------------------------------------------------------------------


int Solution::minDistance(string word1, string word2) {
    int m = word1.size();
    int n = word2.size();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0) dp[i][j]=max(i,j);
            else{
                if(word1[i-1]==word2[j-1]) dp[i][j]=dp[i-1][j-1];
                else dp[i][j]= 1+min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
            }
        }
    }
    return dp[m][n];
}


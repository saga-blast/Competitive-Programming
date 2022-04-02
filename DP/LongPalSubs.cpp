Wrong Answer
3104 KB
141 ms
C++17 (gcc-9.2)
int lcs(int i,int j,string a,string b,vector<vector<int>> &dp){
    if(i>=a.size() || j>=b.size())
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    if(a[i] == b[j])
        return 1+ lcs(i+1,j+1,a,b,dp);
    else{
        int left = lcs(i+1,j,a,b,dp);
        int right = lcs(i,j+1,a,b,dp);
        return dp[i][j] = max(left,right);
    }
}


int Solution::solve(string A) {
    string s = A;

    reverse(s.begin(),s.end());

    vector<vector<int>> dp (A.size(),vector<int> (A.size(),-1));

    return lcs(0,0,A,s,dp);
}


-------------------------------------------------------------------------------------------


int solve(string s) {
    int n=s.length();
    int dp[n][n];
    memset(dp,0,sizeof(dp));

    for(int i=0;i<n;i++){
        dp[i][i]=1;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j])dp[i][j]=dp[i+1][j-1]+2;
            else dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
        }
    }
    return dp[0][n-1];
}
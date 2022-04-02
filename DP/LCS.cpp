
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

int solve(string A, string B) {
    vector<vector<int>> dp(A.size(),vector<int>(B.size(),-1));

    return lcs(0,0,A,B,dp);
}
ll pre[200005][31];

void store_ith_bit(){
    ll N=2e5 +5;
    for(ll i=1;i<N;i++){
        for(ll j=0;j<=30;j++){
            if(i&(1<<j))           //check if j'th bit of i(no) is set as 1 or not
                pre[i][j]=1;
            pre[i][j]+=pre[i-1][j];    //prefix sum is maintained , that is no of elements with same prefix 
        }
    }
}
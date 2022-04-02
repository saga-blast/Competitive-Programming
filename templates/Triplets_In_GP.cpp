ll count_triplets(vector<ll> v,ll r){
    ll n= v.size();
    unordered_map<ll,ll> left,right;

    for(auto x: v){
        right[x]++;
    }

    lll ans= 0;
    for(ll i=0;i<n;i++){
        right[v[i]]--;
        if(a[i]%r == 0){
            ll a= a[i]/r;
            ll c= a[i]*r;

            ans+= left[a]*right[c];
        }
        left[v[i]]++;
    }

    return ans;
}
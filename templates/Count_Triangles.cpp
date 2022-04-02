int count_traingles(vector<pair<ll,ll>>&points){

    unordered_map<ll,ll> freq_x,freq_y;

    for(auto p:points){
        ll x= p.first;
        ll y = p.second;
        freq_x[x]++;
        freq_y[y]++;
    }

    ll count=0;
    for(auto p:points){
        ll x= p.first;
        ll y= p.second;

        count+= (freq_x[x]-1)*(freq_y[y]-1);
    }

    return count;

}
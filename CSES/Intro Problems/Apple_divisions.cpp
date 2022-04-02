#include <bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define nl "\n"
ll mod=1000000007;

// ll apple(vector<int> v,ll sum,ll temp){
//     if(sum>=temp){
//         if(m>= temp-sum){
//             m = temp-sum;
//         }
//        return ;
//     }
//     sum -= v[i];

// }
ll n,t,min_all =INT_MAX,min_local;
vector<ll> a,x;
void test(){
    //cout<<"TEST"<<endl;
    ll px=0;
    min_local = 0;
    for(int i=0;i<n;i++){
        if(px < x.size() && x[px]==i){
            min_local+=a[i];
            px++;
        }
        else{
            min_local-=a[i];
        }
    }
    min_all = min(abs(min_local), min_all);
    //cout<<"min_local : "<<min_local<<endl<<"min_all : "<<min_all<<endl;
}

void solve(ll i){
    if(i==n){
        test();
        return;
    }
    //cout<<"i : "<<i<<endl;
    solve(i+1);
    x.push_back(i);
    // for(auto p:x)
    //     cout<<p<<" ";
    // cout<<endl;

    // cout<<"i' : "<<i<<endl;
    solve(i+1);
    x.pop_back();
    // for(auto p:x)
    //     cout<<p<<" ";
    // cout<<endl;
}

void judge(){
    fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
}

int main(){

    judge();
    //int n;
    cin>>n;

    //vector<ll> v(n);
    //ll sum=0;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
        //sum+=v[i];
    }
    solve(0);
    cout<<min_all<<endl;
    // cout<<endl<<sum<<endl;
    // sort(v.begin(),v.end());
    // for(auto x: v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // ll temp=sum/2;

    // int j=n-1,i=0;
    // vector<ll> g,h;
    // ll m= INT_MAX;
    // while(sum>=temp){
    //     if(v[j]<=(sum-temp)){
    //         sum-=v[j];
    //         g.push_back(v[j]);
    //         j--;
    //     }
    //     else{
    //         if((sum-v[i])<temp){
    //             break;
    //         }
    //         sum-=v[i];
    //         h.push_back(v[i]);
    //         i++;
    //     }
    //     if((sum-temp)<=m){
    //         m=sum-temp;
    //     }

    // }
    // for(auto x : g)
    //     cout<<x<<" ";
    // cout<<endl;
    // for(auto x: h)
    //     cout<<x<<" ";
    // cout<<endl<<m<<endl;
    

    
    return 0;
}
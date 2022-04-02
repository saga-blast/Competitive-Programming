#include <bits/stdc++.h>
#include<vector>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define nl "\n"
ll mod=1000000007;
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
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
    cin>>n>>a>>b;
    if(a+b>n-2)
    cout<<"-1\n";
    else if(abs(a-b)>1)cout<<"-1\n";
    else{
        if(a==0&&b==0)
        {
            for(int i=0;i<n;i++) cout<<i+1<<" ";
            cout<<"\n";
        }
        else if(a==1&&b==0)
        {
            for(int i=1;i<=n-2;i++)cout<<i<<" ";
            cout<<n<<" "<<n-1<<"\n";
        }
        else if(a==0&&b==1)
        {
            cout<<"2 1"<<" ";
            for(int i=3;i<=n;i++)cout<<i<<" ";
            cout<<"\n";
        }
        else
        {
            ll x;
            if(a>b)
            {
                x=a+b+1;
                for(int i=1;i<=n-x;i++)cout<<i<<" ";
                for(int i=n-x+1;i<=n;i+=2)
                {
                    cout<<i+1<<" "<<i<<" ";
                }cout<<"\n";
            }
            else if(b>a)
            {
                x=a+b+1;
                for(int i=1;i<=x;i+=2)
                {
                    cout<<i+1<<" "<<i<<" ";
                }
                for(int i=x+1;i<=n;i++)
                {
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
            else
            {
                x=a+b;
                for(int i=1;i<=x;i+=2)
                {
                    cout<<i+1<<" "<<i<<" ";
                }
                for(int i=x+1;i<=n-2;i++)
                {
                    cout<<i<<" ";
                }
                cout<<n<<" "<<n-1<<" ";
                cout<<"\n";
            }
        }
    }
    }
    return 0;
}

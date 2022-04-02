#include <bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#include<string>
#define ll long long int
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void judge(){
    //fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
     freopen("output.txt", "w", stdout);
    #endif
}
long long power(long long a, long long b,ll m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res*a)%m;
        a =(a*a)%m;
        b >>= 1;
    }
    return res%m;
}

long long int mod=1e9+7;//998244353;

int N=200005;
long long int fact[200005],inv[200005];
void pre()
{
    fact[0]=1;
    inv[0]=1;
    for(int i=1;i<N;i++)
    fact[i]=(i*fact[i-1])%mod;
    for(int i=1;i<N;i++)
    inv[i]=power(fact[i], mod-2, mod);
}
long long int nCr(int n, int r, int p) 
{ 
    if(r>n)
    return 0;
    if(n==r)
    return 1;
    if (r==0) 
    return 1; 
    return (((fact[n]*inv[r]) % p )*inv[n-r])%p;
} 

int main() {
    judge();
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int sum=v[n-1];
    int temp=v[n-1];
    for(int i=n-2;i>=0;i--){
        if(temp>v[i])
            temp=v[i];
        sum+=temp;
    }
    //return sum+temp;

    cout<< sum+temp;
}

def maximumsum(n,b):
    sum=0
    for i in range(0,n,1):
        if(i+1 <n and b[i]<b[i+1]):
            sum = sum+b[i]
        elif(i+1 <n and b[i]>b[i+1]):
            sum = sum+b[i+1]
        else:
            sum = sum++b[i]

        
    return sum+b[0]



#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<queue>
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
  	//fastio;
    int x,y;
    cin>>x>>y;
    int n; 
    cin>>n;
    vector<double> closing_price(n,0);
  	vector<double> vx;
  	vector<double> vy;

    for(int i=0;i<n;i++)
        cin>>closing_price[i]; 
    
 	int p=0,k=0;
  	for(int i=0;i<n;i++){
      	int temp1=x,temp2=y;
      	if(i>x-2){
          double sum=0;
          int j=i;
          while(temp1--){
            sum+=closing_price[j];
            j--;
          }
          vx.push_back(sum/x);
          p++;
        }
        if(i>y-2){
          double sum=0;
          int j=i;
          while(temp2--){
            sum+=closing_price[j];
            j--;
          }
          vy.push_back(sum/y);
          k++;
        }
    }
    cout<<p<<" "<<k<<endl;
  	int ans=0;
    for (auto x:vx){
        cout<<x<<" ";
    }
    cout<<endl;
    for (auto x:vy){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int i=1;i<min(p,k);i++){
        if((vx[i-1]<vy[i-1] && vx[i]>vy[i]) || (vx[i-1]>vy[i-1] && vx[i]<vy[i])){
            ans++;
        }
    } 
    cout<<ans;
    
    return 0;
}

// 11
// 4.55 5.4 5.65 5.4 5.2 4.85 4.95 5.05 4.9 4.95
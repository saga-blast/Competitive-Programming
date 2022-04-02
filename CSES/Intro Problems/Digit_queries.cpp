#include <bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//using namespace std;

// vector<int> v(800001,0);
void judge(){
    //fastio;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
}
using namespace std;
typedef long long ll;

ll pown(ll x,ll y)   
{
    x=1;
    while(y--)
    x=x*10;
    return x;
}


int main() {
    
    judge();
    //fastio;

    // int  q;
	// cin>>q;
    // while(q--){
    //     ll k;
    //     cin>>k;
    //     // if(k<=9){
    //     //     cout<<k<<endl;
    //     //     continue;
    //     // }
    //     ll t=9,cnt_digit=1;
    //     ll count=0;
    //     while(k>count){
    //         count+= t*cnt_digit++;
    //         //cnt_digit++;
    //         t*=10;
    //     }
    //     //cout<<"count: "<<count<<endl;
    //     ll temp=1,p,j;
    //     p=--cnt_digit;
    //     while(p-->1){
    //         temp*=10;
    //         temp--;
    //         p=cnt_digit;count=0;
    //         t=9;
    //         j=1;
    //     }
    //     while(p-->1){
    //         count+=t*j++;
    //         //j++;
    //         t*=10;
    //     }
    //     //cout<<temp<<endl;
    //     count=k-count;
    //     temp+= count/cnt_digit;

    //     if(count%cnt_digit!=0){
    //         count%=cnt_digit;
    //         p=cnt_digit - count-1;
    //         t=10;
    //         temp++;
    //         while(p--)
    //             t*=10;
            
    //         temp/=t;

    //     }
    //     cout<<temp%10<<endl;

    //     // ll k; 
    //     // cin>>k;
    //     // ll c = 1;
    //     // for (ll p = 9;; k -= p, c++, p = 9*pow(10, c-1)*c) {
    //     //     if (k - p <= 0) break;
    //     // }
    //     // k--;
    //     // ll x = k/c,y = k%c;
    //     // ll ans = pow(10, c-1) + x;
    //     // // cerr<<ans<<' '<<x<<' '<<y<<' '<<n<<' '<<c;
    //     // string s = to_string(ans);
    //     // cout<<s[y]<<endl;


    // }
	

	// return 0;
    long long q,k,dig,num,i,cnt,j,p;
    cin>>q;
	while(q--){
		dig=1;cnt=0;i=9;num=1;
		cin>>k;
		//Finding no of digits
		while(k>cnt){
			cnt+=i*dig++;//9+90*2+900*3
			i*=10;
		}
		p=--dig;
		//Finding number just 1 less than than the smallest "dig" digits number 
		while(p-->1)num*=10;num--;p=dig;cnt=0;i=9;j=1;
		//calculating how position we've moved till now(out of k)
		while(p-->1){
			cnt+=i*j++;
			i*=10;
		}
		//remaining position to move
		cnt=k-cnt;
		//digit we'll get if we further move remaining position
		num+=cnt/dig;
		//if cnt%dig==0 exactly last digit of "num" is answer else
		//the new "num" is num+1 and the answer will be the "cnt" index's(from left)  
		//digit of new num 
		if(cnt%dig!=0){
             cnt=cnt%dig;p=dig-cnt-1;i=10;num++;
             while(p--)i*=10;
             num/=i;
		}
		cout<<num%10<<'\n';
	}
	return 0;
}
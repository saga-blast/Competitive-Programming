#include <bits/stdc++.h>
#include<vector>
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
        long long x1, x2;
		int p1, p2;
		cin >> x1 >> p1 >> x2 >> p2;

		int mn = min(p1, p2);
		p1 -= mn;
		p2 -= mn;
        //cout<<p1<<" "<<p2<<endl;
        //for no of characters (int)
		if (p1 >= 7)
			cout << ">" << endl;
		else if (p2 >= 7)
			cout << "<" << endl;
		else{
			for (int i = 0; i < p1; ++i) x1 *= 10;
			for (int i = 0; i < p2; ++i) x2 *= 10;
			if (x1 < x2)
				cout << "<" << endl;
			else if (x1 > x2)
				cout << ">" << endl;
			else
				cout << "=" << endl;
		}
    }
    return 0;
}
  
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
int main(){
    judge();
    
    vector<string> v(8);
    for(int i=0;i<8;i++){
        cin>>v[i];
    }
    int count=0;
    vector<int> coloumns(8);
    iota(coloumns.begin(),coloumns.end(),0);

    do{
        bool valid = true;
        for(int i=0;i<8;i++){
            if(v[i][coloumns[i]]!='.'){
                valid=false;
                break;
            }
        }
        vector<bool> diagonal(15,false);
        for(int i=0;i<8;i++){
            if(diagonal[i+coloumns[i]])
                valid = false;
            diagonal[i+coloumns[i]]=true;
        }
        for(int i=0;i<15;i++)
            diagonal[i]=false;

        for(int i=0;i<8;i++){
            if(diagonal[i+7-coloumns[i]])
                valid = false;
            diagonal[i+7-coloumns[i]]=true;
        }
        count+=valid;
    }
    while(next_permutation(coloumns.begin(),coloumns.end()));

    cout<<count<<endl;
    return 0;
}

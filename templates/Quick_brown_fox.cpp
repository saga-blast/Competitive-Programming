string s = "thequickbroenfox";

string words[]= {"the","quickbrown","fox","quick","brown"}; 

ll min_bar_helper(string s,string words[],ll idx,unordered_set<string> &m){

    if(s[idx]=='\0')
        return 0;

    ll ans = INT_MAX;
    string current = "";

    for(ll j=idx;s[j]!='\0';j++){
            current+= s[j];

            if(m.find(current)!=m.end()){
                ll remaining_ans = min_bar_helper(s,words,j+1,m);
                if(remaining_ans!=-1)
                    ans = min(ans,remaining_ans);
            }

    }

    if(ans==INT_MAX)
        return -1;

    return ans;
}

ll min_bars(){
    unordered_set<string> m;

    for(auto w: words){
        m.insert(w);
    }

    ll output = min_bar_helper(s,words,0,m);

    return output;
}


//try out the dp approach
class point{
    public:
        ll x;
        ll y;

        point(){

        }

        point(ll x,ll y){
            this->x=x;
            this->y=y;
        }
};

class compare{
    public:
        bool operator()(const point p1, const point p2){
            if(p1.x==p2.x){
                return p1.y<p2.y;
            }
            return p1.x<p2.x;
        }
};

ll count_rectangles(vector<point> points){
    set<point,compare> s;

    for(point p:points){
        s.insert(p);
    }

    ll ans=0;
    for(auto it=s.begin();it!=prev(s.end());it++){
        for(auto jt=next(it);it!=s.end();jt++){

            point p1 = *it;
            point p2 = *jt;

            if(p2.x==p1.x && p2.y==p1.y){
                continue;
            }

            point p3(p1.x,p2.y);
            point p4(p2.x,p1.y);

            if(s.find(p3)!=s.end() && s.find(p4)!= s.end()){
                ans++;
            }
        }
    }
    return ans/2;
}
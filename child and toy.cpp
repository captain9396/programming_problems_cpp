#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;
struct data{
    int ind, val;
    bool operator<(const data& p)const{
        return val < p.val;
    }
};

int evp[1050];
int res[1050];
vector<int>E[1050];
vector<data>vf;

/*
bool compare(data a, data b){
    if(a.val == b.val){
        if(evp[a.ind] == evp[b.ind]){
            return evp[a.ind] > evp[b.ind];
        }
    }
    else  return a.val < b.val;
}*/

int main(){
    long long ANS = 0;
    int n, m, c, x, y;cin>>n>>m;
    for(int i = 1; i<=n; i++){
        scanf("%d", &c);
        evp[i] = c;
    }
    for(int i= 1; i<=m; i++){
        scanf("%d%d", &x, &y);
        E[x].push_back(y); E[y].push_back(x);
        res[x]+= evp[y]; res[y]+=evp[x];
    }

    for(int i =1; i<=n; i++){
        data tp;
        tp.ind = i;
        tp.val = res[i];
        vf.push_back(tp);
    }

    sort(vf.begin(), vf.end());

    for(int i=0; i<vf.size(); i++) cout<<vf[i].ind<<" "<<vf[i].val<<endl;

/*
    for(int i =0 ; i<vf.size(); i++){
        for(int j =0; j<E[ vf[i].ind ].size(); j++){
            res[ E[vf[i].ind][j]  ] -= evp[vf[i].ind];
        }
        ANS+=res[ vf[i].ind ];
    }
    printf("%I64d", ANS);*/
    return 0;
}


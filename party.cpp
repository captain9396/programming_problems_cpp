#include<bits/stdc++.h>
#define ff first
#define ss second
#define pii pair<int,int>
using namespace std;

vector<int>boss;
vector<int>e[2050];
int n;

int bfs(int s){
    vector< int > v(n+1, -1);
    v[s] = 0; int mm = 0;
    queue< int >q;
    q.push(s);
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        for(int i =0; i<e[tp].size(); i++){
            if(v[ e[tp][i]] == -1){
                v[ e[tp][i]  ] = v[tp] + 1;
                if(v[ e[tp][i]  ] > mm) mm = v[ e[tp][i]];
                q.push(e[tp][i]);
            }
        }
    }
    return mm + 1;
}

int main(){
    cin>>n;
    int x;
    for(int i =1; i<=n; i++){
        scanf("%d", &x);
        if(x==-1) boss.push_back(i);

        e[x].push_back(i); e[i].push_back(x);
    }

    int mx = 0;
    for(int i = 0; i<boss.size() ; i++){
        int tf = bfs(boss[i]);
        if( tf > mx) mx = tf;
    }
    cout<<mx;
  //  for(int i=0; i<boss.size(); i++)cout<< boss[i]<<" ";
    return 0;
}

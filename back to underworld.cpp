#include<bits/stdc++.h>
using namespace std;

const int maxn = 20007;

class Task{

vector< int > g[maxn];
int col[maxn];
bool vis[maxn];
int nodes;
set< int >  ver;
public:
    Task(int n){
        nodes = n;
        for(int i = 0 ; i <= maxn ; i++){
            col[i] = vis[i] = 0;
        }
    }

    void AddEdge(int u , int v){
        g[u].push_back(v);
        g[v].push_back(u);
        ver.insert(u);
        ver.insert(v);
    }

    int bfs(int s){

        vis[s] = 1;
        col[s] = 1;
        int cnt = 0 , tot = 1;
        queue< int >q;
        q.push(s);
        while(!q.empty()){
            int u = q.front() ;
            q.pop();
            for(int i = 0 ; i < g[u].size() ; i++){
                int v = g[u][i];
                if(!vis[v]){
                    tot ++;
                    vis[v] = 1;
                    if(col[u] == 1){
                        col[v] = 2;
                        cnt++;
                    }
                    else{

                        col[v] = 1;
                    }
                    q.push(v);
                }

            }
        }


        return max( tot - cnt , cnt);
    }

    int calc(){
        int tot = 0;
        for(set< int > :: iterator i = ver.begin(); i != ver.end(); i++){
            if(!vis[*i]){
                tot += bfs(*i);
            }
        }
        return tot;
    }

};

int main(){
    int T;
    cin >> T;

    for(int i = 1; i <= T ; i++){
        int n , u , v;
        scanf("%d" , &n);
        Task newTask(n);
        for(int j = 0 ; j < n ; j++){
            scanf("%d%d" , &u  , &v);
            newTask.AddEdge(u, v);
        }
        printf("Case %d: %d\n" , i , newTask.calc());
    }

    return 0;
}


/**
10
7
3 8
6 3
3 7
4 5
9 10
5 10
12 9
*/















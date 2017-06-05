#include<bits/stdc++.h>

using namespace std;

const int N = 101010;

vector<int>g[N] , tg[N] , components[N];
bool vis1[N] , vis2[N];

stack<int>foo;

void dfs1(int u){
	vis1[u] = true;

	for(int i = 0 ; i < g[u].size() ; i++){
		int v = g[u][i];
		if(!vis1[v]){
			dfs1(v);
		}
	}

	foo.push(u);
}


void dfs2(int u , int mark){
	vis2[u] = true;
	components[mark].push_back(u);
	for(int i = 0 ; i < tg[u].size() ; i++){
		int v = tg[u][i];
		if(!vis2[v]){
			dfs2(v , mark);
		}
	}
}

void RevEdge(int n){
	for(int i = 1 ; i <= n ; i++){
		for(int j = 0 ; j < g[i].size() ; j++){
			int v = g[i][j];
			tg[v].push_back(i);
		}
	}
}


int findSCC(int n){
	int mark = 0;

	for(int i = 1 ; i <= n ; i++){
		if(!vis1[i])dfs1(i);
	}

	RevEdge(n);

	while(!foo.empty()){
		int t = foo.top();
		foo.pop();
		if(!vis2[t]){
			mark++;
			dfs2(t , mark);
		}
	}

	return mark;

}

int main(){
	int node , edge ; cin>>node>>edge;
	int  u , v;
	for(int i = 0 ; i < edge ; i++){
		cin>>u>>v;
		g[u].push_back(v);
	}

	int temp = findSCC(node);

	cout << "no. of components -------> " << temp<<endl;
	for(int i = 1;  i <= temp ; i++){
		for(int  j =0 ; j < components[i].size() ; j++){
			cout << components[i][j]<<" ";
		}
		cout <<endl;
	}

	return 0;
}











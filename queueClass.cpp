#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    int sz;
    struct node{
        int data;
        node* next;
        node* prev;
        node()
        {
            next = NULL;
            prev = NULL;
        }
    };
    node* head;
    node* tail;
    Queue(){
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    void Push(int x){
        if(head == NULL){
            node* T = new node();
            T->data = x;
            head = T;
            tail = T;
        }
        else{
            node* S = new node();
            S->data = x;
            S->prev = tail;
            tail->next = S;
            tail = S;
        }
        sz++;
    }
    void Pop(){
        node* T = head ;
        head = head->next;
        free(T);
        sz--;
    }
    int Front(){ return head->data;}
    int Size(){return sz;}
    bool Empty(){return (sz==0);}
    void Show(){
        node* T = head;
        while(T!=NULL){
            printf("%d ", T->data);
            T = T->next;
        }
        cout<<'\n';
    }
    void Destroy(node* T){
        if(T->next) Destroy(T->next);
        delete(T);
    }
    ~Queue()
    {
        if(head != NULL)Destroy(head);
    }
};


int d[10000];
vector<int>g[1000];
int Bfs(int s, int e){
    memset(d, -1 ,sizeof d);
    d[s] = 0;
    Queue q;
    q.Push(s);
    while(!q.Empty()){
        int tp = q.Front();
        q.Pop();
        for(int i=0; i<g[tp].size(); i++){
            if(d[g[tp][i]]==-1){
                d[ g[tp][i] ] = d[tp]  +1;
                q.Push(g[tp][i]);
            }
        }
    }
    return d[e];
}


int main(){
    int node, edge;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }


    int query;cin>>query;
    while(query--){
        int s, e;cin>>s>>e;
        cout<<Bfs(s,e)<<endl;

    }
    return 0;
}
/*

int main(){
        Queue f;
        int n;
        string c;
        while((cin>>c) && (c!="stop")){
            if(c=="push"){
                cin>>n;
                f.Push(n);
                f.Show();
            }
            else if(c=="pop"){
                f.Pop();
                f.Show();
            }
            else if(c=="front"){
                cout<<f.Front()<<endl;
            }
            else if(c=="size"){
                cout<<f.Size()<<endl;

            }
            else if(c=="empty"){
                cout<<f.Empty()<<endl;
            }
        }
        return 0;
}

*/





















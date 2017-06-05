// A C++ program to find bridges in a given undirected graph
#include <iostream>
#include <list>
using namespace std;

// A class that represents an undirected graph
class Graph
{
    int V;          // No. of vertices
    list<int>* adj; // A dynamic array of adjacency lists
    int bridgeUtil(int v, bool visited[], int arrival[], int parent);
    int minimum(int x, int y);

public:
    Graph(int V);               // Constructor
    void addEdge(int v, int w); // function to add an edge to graph
    void bridge();              // prints all bridges
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v); // Note: the graph is undirected
}

int Graph::minimum(int x, int y)
{
    return (x > y) ? y : x;
}

int Graph::bridgeUtil(int v, bool visited[], int arrival[], int parent)
{
    static int time = 0;
    visited[v] = true;
    arrival[v] = time++;
    int min = arrival[v]; // initialize min to arrival time of vertex v

    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i) {
		if(!visited[*i])
			min = minimum(min, bridgeUtil(*i, visited, arrival, v));
		else if(*i != parent) // ignore tree edges - undirected graph
			// If the vertex is w is already visited so then that means that is either a
			// cross edge or a back edge starting from v. Note that arrival time is already defined
			min = minimum(min, arrival[*i]);
    }
    if(min == arrival[v] && parent != -1) // parent != -1 for root(starting node)
		cout << parent << "," << v << endl;

    return min;
}

void Graph::bridge()
{
    bool* visited = new bool[V];
    for(int i = 0; i < V; i++)
		visited[i] = false;

	int arrival[V];
    for(int i = 0; i < V; i++)
		if(visited[i] == false)
			bridgeUtil(i, visited, arrival, -1);
}

// Driver program to test above function
int main()
{
    // Create graphs given in above diagrams
    cout << "\nBridges in first graph \n";
    Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.bridge();

    cout << "\nBridges in second graph \n";
    Graph g2(4);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.addEdge(2, 3);
    g2.bridge();

    cout << "\nBridges in third graph \n";
    Graph g3(7);
    g3.addEdge(0, 1);
    g3.addEdge(1, 2);
    g3.addEdge(2, 0);
    g3.addEdge(1, 3);
    g3.addEdge(1, 4);
    g3.addEdge(1, 6);
    g3.addEdge(3, 5);
    g3.addEdge(4, 5);
    g3.bridge();

    return 0;
}

//cycle detection in undirected graph-DFS
#include<iostream>
#include <list>
#include <limits.h>
using namespace std;

class Graph
{
	
	// No. of vertices
	int V;

	// Pointer to an array containing adjacency lists
	list<int> *adj;
	
public:

	// Constructor
	Graph(int v){
		V=v;
		adj=new list<int>[v];

	}

	// To add an edge to graph
	void addEdge(int v, int w){
		// Add w to v’s list.
		adj[v].push_back(w);
		// Add v to w’s list.
		adj[w].push_back(v);
	}
// A recursive function that uses visited[] and parent to detect
// cycle in subgraph reachable
// from vertex v.
bool isCyclicUtil(int v,
				bool visited[], int parent)
{
	
	// Mark the current node as visited
	visited[v] = true;

	// Recur for all the vertices
	// adjacent to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i !=
					adj[v].end(); ++i)
	{
		
		// If an adjacent vertex is not visited,
		//then recur for that adjacent
		if (!visited[*i])
		{
		if (isCyclicUtil(*i, visited, v))
			return true;
		}

		// If an adjacent vertex is visited and
		// is not parent of current vertex,
		// then there exists a cycle in the graph.
		else if (*i != parent)
		return true;
	}
	return false;
}
	// Returns true if there is a cycle
	bool isCyclic(){
	// Mark all the vertices as not visited and not part of recursion stack
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	// Call the recursive helper function to detect cycle in different DFS trees
	for (int u = 0; u < V; u++)
	{
	
		// Don't recur for u if it is already visited
		if (!visited[u])
			if (isCyclicUtil(u, visited, -1))
				return true;
	}
	return false;
	}


};

// Driver program to test above functions
int main()
{
	Graph g1(5);
	g1.addEdge(1, 0);
	g1.addEdge(0, 2);
	g1.addEdge(2, 1);
	g1.addEdge(0, 3);
	g1.addEdge(3, 4);
	cout<<"for g1: ";
	g1.isCyclic()?
	cout << "Graph contains cycle\n":
	cout << "Graph doesn't contain cycle\n";

	Graph g2(3);
	g2.addEdge(0, 1);
	g2.addEdge(1, 2);
	cout<<"for g2: ";
	g2.isCyclic()?
	cout << "Graph contains cycle\n":
	cout << "Graph doesn't contain cycle\n";

	return 0;
}

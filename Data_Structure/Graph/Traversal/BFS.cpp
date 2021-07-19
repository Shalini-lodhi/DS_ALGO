#include <iostream>
#include <list>
#include <queue>

using namespace std;

class Graph{
	int V;
	list<int>*adjList;

	public: 
		Graph(int v){
			V=v;
			adjList=new list<int>[v];
		}
	void addElement(int u, int v, bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}
	//void printAdjList(){
	//	for(int i=0; i<V; i++){
	//		cout<<i<<"->";
	//		for(int node: adjList[i]){
	//			cout<<node<<"->";
	//		}
	//		cout<<"NULL"<<endl;
	//	}
	//}
		void bfs(int src){
		queue<int> q;
		bool* visited = new bool[V+1]{0};

		q.push(src);
		visited[src]=true;

		while(!q.empty()){
			int node=q.front();
			cout<<node<<"->";
			q.pop();

			for(int neighbour:adjList[node]){
				if(!visited[neighbour]){
					q.push(neighbour);
					visited[neighbour]=true;
				}
			}
		}
		cout<<"NULL";
	}
};
int main(){
	Graph g(6);
	g.addElement(0,1);
	g.addElement(0,9);
	g.addElement(1,2);
	g.addElement(2,0);
	g.addElement(2,3);
	g.addElement(9,3);

	g.bfs(0);

	cout<<endl;

	return 0;
}
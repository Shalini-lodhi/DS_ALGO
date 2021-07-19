#include <iostream>
#include<list>
#include <map>
using namespace std;

class Graph{

	public:
		map<int, bool>visited;
		map<int, list<int>>adjList;
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
		void dfs(int src){
			visited[src]=true;
			cout<<src<<"->";

			list<int>::iterator i;
			for(i= adjList[src].begin(); i!=adjList[src].end(); i++){
				if(!visited[*i]){
					dfs(*i);
				}
			}
		}
};
int main(){
	Graph g;
	g.addElement(0,1);
	g.addElement(0,9);
	g.addElement(1,2);
	g.addElement(2,0);
	g.addElement(2,3);
	g.addElement(9,3);

	g.dfs(0);
	cout<<"NULL";

	cout<<endl;

	return 0;
}
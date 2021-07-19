#include <iostream>
#include <list>
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
	void printAdjList(){
		for(int i=0; i<V; i++){
			cout<<i<<"->";
			for(int node: adjList[i]){
				cout<<node<<"->";
			}
			cout<<"NULL"<<endl;
		}
	}

};
int main(){
	Graph g(4);
	g.addElement(0,1);
	g.addElement(0,2);
	g.addElement(0,3);
	g.addElement(1,3);
	g.addElement(3,2);

	g.printAdjList();

	cout<<endl;

	return 0;
}
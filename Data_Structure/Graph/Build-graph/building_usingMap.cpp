#include <iostream>
#include <map>
#include<cstring>
#include<list>
using namespace std;

template<typename T>
class Graph{
	map<T, list<T>> adjList;
public:
	Graph(){

	}

void addEdge(T u, T v, bool birDi = true){
	adjList[u].push_back(v);
	if(birDi){
		adjList[v].push_back(u);
	}
}
void printAdjList(){
	for(auto row: adjList){
		T key = row.first;
		cout<<key<<"->";

		for(T element: row.second){
			cout<<element<<"-";
		}
		cout<<"NULL"<<endl;
	}
}
};
int main(){
	Graph<string> g;
	g.addEdge("A","D");
	g.addEdge("A","J");
	g.addEdge("D","S");
	g.addEdge("D","A");
	g.addEdge("A","S");
	g.addEdge("D","B");

	g.printAdjList();

	return 0;
}
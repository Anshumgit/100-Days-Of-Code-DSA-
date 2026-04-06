#include<iostream>
#include<unordered_map>
#include<list>
template <typename T>

using namespace std;

class graph{
	unordered_map <T , list<T> > adj;
	 
	public:
		void addEdge(T u , T v , bool direction){
			//direction = 0 -> undirected graph
			//direction = 1 -> directed graph
			
			//create and edge from u to v
			adj[u].push_back(v);
			if(direction == 0){
				adj[v].push_back(u);
			}
						
		}
		
		void printAdjList(){
			for(auto i : adj){
				cout << i.first << "-> ";
				for(auto j : i.second){
					cout << j << ",";
				}
				cout << endl;
			}
		}
};


int main(){
	graph<int> g;
	int n ;
	cout << "Enter the Number the Nodes : ";
	cin >> n;
	
	int m ;
	cout << "Enter the Number of Edges : ";
	cin >> m;
	
	for(int i = 0 ; i < m ; i++){
		int u , v;
		cin >> u >> v;
		//creating undirected graph
		g.addEdge(u , v , 0);
	}
	cout << "\nAdjacency List:" << endl;
	g.printAdjList();
	
}

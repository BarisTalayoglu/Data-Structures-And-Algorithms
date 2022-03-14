#include <iostream>
#include <map>
#include <list>
using namespace std;

class Graph{
map <int,list<int>> l;

public:

void AddEdge(int x,int y){
  l[x].push_back(y);
  l[y].push_back(x);
}

void dfs_helper(int source,map<int,bool> &visited){
  cout<< source<<" ";
  visited[source] = true;
  
  for(int nbr : l[source]){
    if(visited[nbr] != true){
      dfs_helper(nbr,visited);
    }
  }
 

}

void dfs(int source){
  map <int,bool> visited;
  for(auto p : l){
    int node = p.first;
    visited[node] = false;
  }
  dfs_helper(source,visited);

}



};



int main(){
  Graph g;
  g.AddEdge(1,2);
  g.AddEdge(2,3);
  g.AddEdge(0,3);
  g.AddEdge(3,4);
  g.AddEdge(4,5);
  
  g.dfs(0);

}
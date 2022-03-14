#include <iostream>
#include <queue>
#include <map>
#include <list>
using namespace std;

class Graph{
  map<int, list<int>> l;
public:
  void AddEdge(int x,int y){
    l[x].push_back(y);
    l[y].push_back(x);
  }

  void bfs(int source){
    queue<int> q;
    q.push(source);

    map<int,bool> visited;
    visited[source] = true;

    while(!q.empty()){
      int node = q.front();
      cout<<node<<" ";
      q.pop();
    for(int neigbour: l[node]){
      if(visited[neigbour] != true){
        q.push(neigbour);
        visited[neigbour] = true;
      }

    }
    }
  }

};



int main(){

  Graph g;
  g.AddEdge(0,1);
  g.AddEdge(1,2);
  g.AddEdge(2,3);
  g.AddEdge(0,3);
  g.AddEdge(3,4);
  g.AddEdge(4,5);
  
  g.bfs(0);

}
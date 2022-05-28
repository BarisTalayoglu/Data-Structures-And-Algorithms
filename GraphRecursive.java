package com.test_.main;
import java.util.ArrayList;
import java.util.Scanner;

 class Graph1 {
	ArrayList<ArrayList<Integer>> graph;
		
	Graph1(int nodes){
		graph = new ArrayList<ArrayList<Integer>>();
		
		for(int i=0;i<nodes;i++) {
			graph.add(new ArrayList<Integer>());
		}
		
	}
	
	  void addEdge(int v, int u) {
		graph.get(v).add(u);
		graph.get(u).add(v);
	}
	  
	  void dfs(int start,boolean[] visited){
		  visited[start] = true;
		  System.out.println(start+" ");
		  
		  for(int nbr : graph.get(start)){
			  if(!visited[nbr])
				  dfs(nbr,visited);
			  
		  }
		
		  
	  }
	
	
}
public class GraphRecursive {
public static void main(String[] args) {
	Scanner scan = new Scanner(System.in);
	 System.out.println("Please enter size of Graph");
	 int graphSize = scan.nextInt();
	 
     Graph1 g = new Graph1(graphSize);
	 boolean[] visited = new boolean[graphSize];

	 scan.close();

	 g.addEdge(0, 1);
     g.addEdge(0, 2);
     g.addEdge(1, 2);
     g.addEdge(2, 0);
     g.addEdge(2, 3);
     g.addEdge(3, 3);
	 g.dfs(2,visited);
		
	}
}

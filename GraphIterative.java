package com.test_.main;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;

 class Graph2 {
	ArrayList<ArrayList<Integer>> graph;
		
	Graph2(int nodes){
		graph = new ArrayList<ArrayList<Integer>>();
		
		for(int i=0;i<nodes;i++) {
			graph.add(new ArrayList<Integer>());
		}
		
	}
	
	  void addEdge(int v, int u) {
		graph.get(v).add(u);
		graph.get(u).add(v);
	}
	  Stack<Integer> stack = new Stack<>();
	  void dfs(int start,boolean[] visited){
		  stack.push(start);
		  while(!stack.isEmpty()) {
			  start = stack.peek();
			  stack.pop();
			  if(!visited[start]) {
                  System.out.print(start + " ");
				  visited[start] = true;
				  for(int nbr : graph.get(start)){
					  if(!visited[nbr]) {
						  stack.push(nbr);
						  
					  }
						  
						  
				  }
			  }
				  
			  
		  }
		
		  
	  }
	
	
}
public class GraphIterative {
public static void main(String[] args) {
	Scanner scan = new Scanner(System.in);
	 System.out.println("Please enter size of Graph");
	 int graphSize = scan.nextInt();
	 
     Graph2 g = new Graph2(graphSize);
	 boolean[] visited = new boolean[graphSize];

	 scan.close();

	 g.addEdge(1, 0);
     g.addEdge(0, 2);
     g.addEdge(2, 1);
     g.addEdge(0, 3);
     g.addEdge(1, 4);
	 g.dfs(0,visited);
		
	}
}

package com.test_.main;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

class Graph{
	ArrayList<ArrayList<Integer>> graph;
	int V;
	Graph(int node){
		V = node;
		graph = new ArrayList<>();
		
		for(int i=0;i<node;i++) {
			graph.add(new ArrayList<Integer>());
		}
		
	}
	
	
	void addEdge(int u,int v) {
		graph.get(u).add(v);
		graph.get(v).add(u);
	}
	
	void bfs(int start) {
		boolean[] visited = new boolean[V];
		Queue<Integer> q = new LinkedList<Integer>(); 
		
		q.add(start);
		visited[start] = true;
		while(!q.isEmpty()) {
			start = q.poll();
			System.out.println(start+" ");
			for(int nbr: graph.get(start)) {
				if(!visited[nbr]) {
					visited[nbr] = true;
					q.add(nbr);
				}
			}
			
		}
		
	}
	
	
	
}



public class GraphBFS {

	public static void main(String[] args) {
		Graph g = new Graph(5);
		g.addEdge(0, 1);
	    g.addEdge(3, 2);
	    g.addEdge(2, 4);
	    g.addEdge(1, 4);
	    g.addEdge(3, 1);
	    g.addEdge(2, 0);
	    g.bfs(0);
	}

}

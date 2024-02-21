#include <stdio.h>
#include <limits.h>
void dijikstra(int graph[5][5],int source);
int findMin(int edge[5],int visited[5]);
void display(int edge[5], int source);


void display(int edge[5], int source) {
    printf("Shortest distances from source vertex %d:\n", source);
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < 5; i++) {
        printf("%d \t\t %d\n", i, edge[i]);
    }
}




int findMin(int edge[5],int visited[5]){
	int i , min_index ,min_value=INT_MAX;
	for(i=0;i<5;i++){
		if(visited[i]==0 && edge[i]<min_value){
			
			min_index=i;
		}
	}
	return min_index;
	
}

void dijikstra(int graph[5][5],int source){
	
	int edge[5];
	int visited[5];
	//init
	for(int i=0;i<5;i++){
		edge[i]=INT_MAX;
		
		visited[i]=0;
	}
	edge[source]=0;
	
	int j=0;
	while(j<5){
		
		int u = findMin(edge,visited);
		
		visited[u]=1;
		
		int v;
		for(v=0; v<5; v++){
			                                  //   y=5  +3          //t=10
			if(visited[v]==0 && graph[u][v] && edge[u]+graph[u][v]<edge[v])
			
			edge[v]=edge[u]+graph[u][v];
			
		}
	
		j++;
	}
	
	display(edge,source);
	
	
}



int main(){
	
	int graph[5][5] = {
    //   0  1  2  3  4
        {0, 4, 2, 0, 0},
        {4, 0, 1, 5, 0},
        {2, 1, 0, 8, 10},
        {0, 5, 8, 0, 2},
        {0, 0, 10, 2, 0}
    };

	
	int source = 4;
	
	dijikstra(graph,source);
}
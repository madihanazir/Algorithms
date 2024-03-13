#include<stdio.h>
#define INT_MAX 99999
void printit(int cost[4][4]){
	int i,j;
		printf("=====================================================>\n");
	printf("the following matrix shows the shortest dist btw every pair\n");
		printf("=====================================================>\n");
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(cost[i][j]==INT_MAX){
				printf("inf ");
			}else{
		
			printf("%d ",cost[i][j]);
			}
		}
		printf("\n");
	}
	
}
void floyd(int graph[4][4]){
	int cost[4][4];
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cost[i][j]=graph[i][j];//making a copy of origignal graph into cost matrix
		}
	}
	int k;
	//main code
	for(k=0;k<4;k++){
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
			
			if(cost[i][k]+cost[k][j]<cost[i][j]){
				cost[i][j]=cost[i][k]+cost[k][j];
				}
				
			}
	}
		
	}
	printit(cost);
}


int main(){
	
	int graph[4][4]={{0,3,INT_MAX,7},
					{8,0,2,INT_MAX},
					{5,INT_MAX,0,1},
					{2,INT_MAX,INT_MAX,0}};
	int i,j;
	printf("given matrix \n");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(graph[i][j]==INT_MAX){
				printf("inf ");
			}else{
		
			printf("%d ",graph[i][j]);
			}
		}
		printf("\n");
	}

	floyd(graph);
}
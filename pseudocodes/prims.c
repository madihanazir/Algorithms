/*
1. algorithmPrims(graph,source)
2.{
3. //input:
4. //output:
5. //desc:
6. variable integer := parent[], key[], i,j,k,l, visited[], mst[][];
7. visited[]:=0;
8. parent[]:= nil;
9. mst[][]= 0;
10. key[] := int_max
13. key[source] := 0;
14. for each vertex v in graph //do
15. u := find_min(graph[][], key[]);
16. visited[u] :=1;
17. for i=0 to v do //step= step+1;
17. if (visited[u]==0 && graph[u][v] && graph[u][v]< key[v]){
18. key[v] = graph[u][v];
19. parent[v] := u; 
21. mst[u][v] := graph[u][v]
21. end if;
22. end for

*/
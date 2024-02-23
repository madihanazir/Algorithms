/*
1.Algorithm Dijkstra(graph[][], source)
2.{
3. inp
4.
5. desc
6. {
7. variable integer: parent[], key[], visited[], u,v,i;
8. key[]:= int_max;
9. parent[] :=nil;
10. visited[] := 0;
11. key[source]:=0;
12. for each vertex v in graph[][] //do
13. u= mindist(graph[][], key[])
14. visited[u] := 1; 
15. if(visited[v]=0 && graph[u][v]+ key[u]< key[v])
16.  {
17. key[v] := key[u] + graph[u][v];
18. parent[v] := u;
19. }
20. end for


*/
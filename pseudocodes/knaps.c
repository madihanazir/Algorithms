/*
1. Algorithm GreedyKnapsack(p,w)
2. //input: p[1..n], w[1..n],u,i,j, n is capacity of bag, x[1...n] is solution
3. //output: max profit/weight ratio
4. //desc: 
5. {
6. variable integer := i,j,k, max_profit=0;
7. variable float := x[];
8. for i=1 to items //do 
9. x[i]= p[i]/w[i];

10. end for
10.1 
11. for i=1 to items //do 
max:= maxp_f(x[])
12. if (weight[max]< n)
13. {
14. max_profit :=+ profit[max];
15. n= n- weight[max];
16. }
17. then 
18. max_profit := x[i]*n;

*/
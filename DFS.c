#include<stdio.h>
#include<conio.h>

int a[20][20], s[20], n;

void dfs(int v)
{
int i;
s[v]=1;
for(i=1; i<=n; i++)
if(a[v][i] && !s[i])
{
printf("\n %d->%d",v,i);
dfs(i);
}
}
int main()
{
int i, j, count=0;
printf("\n Enter number of vertices:");
scanf("%d", &n);
for(i=1; i<=n; i++)
{
s[i]=0;
for(j=1; j<=n; j++)
a[i][j]=0;
}
printf("Enter the adjacency matrix:\n");
for(i=1; i<=n; i++)
for(j=1; j<=n; j++)
scanf("%d", &a[i][j]);
dfs(1);
printf("\n");
for(i=1; i<=n; i++)
{
if(s[i])
count++;
}
if(count==n)
printf("Graph is connected");
else
printf("Graph is not connected");
return 0;
}

OUTPUT
// Graph starting from 1st index
Enter number of vertices:4
Enter the adjacency matrix:
0 1 1 1
1 0 0 0
1 0 0 0
1 0 0 0

 1->2
 1->3
 1->4
Graph is connected

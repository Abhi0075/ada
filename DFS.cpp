#include<iostream>
using namespace std;

int top=-1;
int g[10][10],n,v[10],stack[10];

 
void DFS(int src)
{
   v[src]=1;
  for(int i=0;i<n;i++)
  {
    if(g[src][i]==1&&v[i]==0)
    {
        stack[++top]=i;
        DFS(i);
    }
  }
}

int main()
{
  cout<<"enter the number of nodes \n";
  cin>>n;
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
    {
      cout<<"Enter the 1 if edge from "<<i<<j<<" is present >>";
      cin>>g[i][j];
    }
  }
  
  cout<<"your adjacency matrix\n";
 
 for(int i=0;i<n;i++)
  {
   for(int j=0;j<n;j++)
    {
      cout<<g[i][j]<<" ";
    }
    cout<<"\n";
  }

 for(int i=0;i<n;i++)
 {
    v[i]=0;
 }
  stack[++top]=0;
  DFS(0);

if(top==n-1)
{
    cout<<"graph is connected";
}
else{
    cout<<"graph is not connected";
}
}

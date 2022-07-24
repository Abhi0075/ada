#include<iostream>
using namespace std;

int v[100][100];

void warshall(int n)
{
    for(int k=0;k<n;k++)
    {
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
       v[i][j]=v[i][j]||(v[i][k]&&v[k][j]);

     }
   } 
}
for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
       cout<<v[i][j]<<" ";
    }
    cout<<"\n";
   }


}

int main()
{
    int n;
  cout<<"enter the number od nodes\n";
  cin>>n;  
  cout<<"enter the weight of each node\n";
  for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
       cout<<"enter weight of node "<<i<<j<<">>";
       cin>>v[i][j];
    }
   }

   warshall(n);


}

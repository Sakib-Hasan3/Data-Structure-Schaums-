//warshall algorithm 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mat[n][n];

    // taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==0)// if the value is 0,
            mat[i][j]=0;
        }
        
    }

    // warshall's algorithm
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat[i][j]=(mat[i][j]||(mat[i][k] && mat[k][j]));
            }
        }
    }

    // printing matrix
    cout << endl;
    for (int i = 0; i < n; i++) 
    {
      for (int j = 0; j < n; j++) 
      {
        cout << mat[i][j] << " ";
      }
         cout << endl;
    }
    return 0;
    
}
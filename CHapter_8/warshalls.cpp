
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
            // comment these two following two lines for path matrix
            // (because we need 0 for logical operations -> binary AND, OR)
            if(mat[i][j]==0)// if the value is 0,
            mat[i][j]=(int)1e7;// we set it to a higher value
        }
        
    }

    // warshall's algorithm
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
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

/*4
0 3 0 7
8 0 2 0
5 0 0 1
2 0 0 0
*/
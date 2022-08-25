#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  m,n;
    cout<<"Please enter number of elements and number of eadges"<<endl;
    cin >> n >> m ;
    int adjMat[n + 1][n + 1]={0},A1[n][n],B1[n][n];
    cout<<"please enter all eadges"<<endl;
    memset(adjMat,0,sizeof(adjMat));
    memset(B1,0,sizeof(B1));
    for(int i = 0; i < m; i++){
        int u , v ;
        cin >> u >> v ;
        adjMat[u][v] = 1 ;
        B1[u][v]=1;
       // B1[v][u]=1;
          //adjMat[v][u] = 1 ;
    }

    memset(A1,0,sizeof(A1));

    int q;
    cout<<"Please enter length to print length matrix of adjancency matrix"<<endl;
    cin>>q;
    q--;

while(q--)
{
    memset(A1,0,sizeof(A1));
   
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            for(int k = 0; k < n; ++k)
            {
                A1[i][j] += adjMat[i][k] * B1[k][j];
            }

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    B1[i][j]=A1[i][j];
                }
            }

}


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A1[i][j]<<" ";
        }
        cout<<endl;
    }
     
     
    return 0;
}
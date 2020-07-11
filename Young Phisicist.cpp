#include<bits/stdc++.h>
using namespace std;
int main( )
{
           long long int mat[105][100], i , a, b,j, sum, m, n, flag=0;
           cin >> m  >> n;

           for ( i = 1 ; i <= m ; i++ )
                {
                   for (j = 1 ; j <= n ; j++ )
                        cin>>mat[i][j] ;
                }
           cin >> a >> b;
            for ( i = b-1 ; i <= b+1 ; i++ )
                {
                   for (j = 1 ; j <= n ; j++ ){
                        mat[a][j]=0;

                }
                }
            for ( i = a-1 ; i <= a+1 ; i++ )
                {
                   for (j = 1 ; j <= m ; j++ ){
                        mat[j][b]=0;

                }
                }

                for ( i = 1 ; i <= m ; i++ )
                {
                   for (j = 1 ; j <= n ; j++ )
                        cout << mat[i][j]    << " ";
                        cout << endl;
                }

                }










#include<bits/stdc++.h>
using namespace std;
int main( )
{
           long long int mat[105][100], i ,j, sum, m, n, flag=0;
           cin >> m ;

           for ( i = 0 ; i < m ; i++ )
                {
                   for (j = 0 ; j < 3 ; j++ )
                        cin>>mat[i][j] ;
                }
            for ( i = 0 ; i < 3 ; i++ )
                {
                  sum=0;
                  for (j = 0 ; j < m ; j++ ){
                        sum=sum+ mat[j][i];
                       // cout << sum << " ";

                }
                if(sum!=0)
                    flag++;
                }
                if(flag==0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;




}


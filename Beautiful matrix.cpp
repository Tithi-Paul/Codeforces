#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row=5, col=5, i, j, a[100][100], sum;
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            cin >> a[i][j];
            if(a[i][j]==1)
            sum= abs(i-3)+ abs(j-3);

        }
    }

        cout << sum << endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n , i, flag = 0, fl=0,  a[100005];
     cin >> n;
     for(i=0; i<n; i++)
     {
         cin >> a[i];
         if(a[i]%2 == 1)
            flag = 1;
        else
            fl = 1;
     }

     if(flag && fl){
        sort(a,a+n);
     }
        for(int i = 0; i < n ; i++){
            cout << a[i] << " ";
        }

     /*else{
        for(int i = 0 ; i < n; i++){
            printf("%d ",a[i]);
        }
     }*/

}

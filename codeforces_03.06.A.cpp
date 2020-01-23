#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n , i, a[100005];
     set<int>S;
     cin >> n;
     n = n*2;
     for(i=0; i<n; i++)
     {
         cin >> a[i];
         S.insert(a[i]);
     }

     if(S.size() > 1){
        sort(a,a+n);
        for(int i = 0; i < n ; i++){
            printf("%d ",a[i]);
        }
     }
     else{
       printf("-1\n");
     }
}

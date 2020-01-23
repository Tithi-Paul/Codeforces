#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100], k, p, query,i, c;
    //cin>> query;
    //while(query--)
    //{
    cin >> n ;
    cin >> k;
    while(n>0){
        if(n%k==0){
            n=n/k;
        }
        else
        {
            n=n-1;
        }

       a[i]=n;
       c++;
       cout << a[i] << endl;
       cout << c << endl;


    }
     //p = sizeof(a)/sizeof(int);
       // cout << p << endl;


    //}

}

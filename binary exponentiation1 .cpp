#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long t,a,b,res = 1;
     cin >> t ;
     for(int i=1; i<=t; i++){
     cin>>a>>b;
        if (b & 1)
            res = res * a;
        a = a * a;
        b /= 2;
    if (b==0)
            res = 1;

    cout<< res%10 <<endl;
     }
    }

#include<bits/stdc++.h>
using namespace std;
long long int a[1000005];
int main()
{
    long long int n, i, j=1, other, last;
    cin >> n;
   /* if(n==1){
        cout << 1 << " " << 1 << endl;
        return 0;
    }*/
    for(i=1; i<=sqrt(n); i++){
        if(n%i==0){
            a[j]=i;
            j++;
        }
    }
                                                        /*for(i=1; i<j; i++){
                                                        cout << " " << a[i];
                                                        }*/
     last= a[j-1];
                                                        //cout << last
      a[0]=1;
     if(last==other && a[j-2]>0){
        last=a[j-2];
        other= n/last;
     }
     else
        other= n/last;
     cout << last << " " << other << endl;
}

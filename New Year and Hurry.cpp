#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, i, sum=0, minite, need;
    cin >> n >> k;
    minite = 240-k;
    for(i=0; i<=n; i++){
        need= 5*i;
        sum=sum+need;
        if(sum>minite){
            break;
     }
    }
  //  cout << sum << endl;
        cout << i-1 << endl;

}

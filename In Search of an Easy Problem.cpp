#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, k=0, m;
    cin >> n;
    while(n--){
      cin >> a;
      if(a==1)
        k++;
   }
   if(k==0)
        cout << "Easy" << endl;
   else
        cout << "Hard" << endl;
}



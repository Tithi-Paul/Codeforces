#include<bits/stdc++.h>
using namespace std;
int main(){
set<int>s;
    long long int n,i,w=0,m,p;
    cin >> n;
    for(i=n+1; i<=9999; i++){
    n=i;
        while(n!=0){

            m=n%10;
            s.insert(m);
            w++;
            n=n/10;
        }

        if(s.size()==4){

         cout << i << endl;
         return 0;
        }
        s.clear();
    }


}


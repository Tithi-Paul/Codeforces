#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, i;
    cin >> n;
    for(i=1; i<=n; i++){
       if(i==n){
            if(i%2==0)
                cout << "I love it" << endl;
            else
                cout << "I hate it" << endl;
       }
       else{
            if(i%2==0)
                cout << "I love that" << " ";
            else
                cout << "I hate that" << " ";

       }
    }
}


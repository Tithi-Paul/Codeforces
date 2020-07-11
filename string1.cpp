#include<bits/stdc++.h>
using namespace std;
int main(){
    string X;
    cin>>X;

    int l = X.length();
    for(int m = 0 ; m < l; m++){
        if(X[m]== 'A' || X[m]== 'U' || X[m]== 'Y' || X[m] == 'O' || X[m]== 'E'|| X[m] == 'I' || X[m]== 'a' || X[m]== 'u' || X[m]== 'y' || X[m] == 'o' || X[m]== 'e'|| X[m] == 'i')
            ;
        else{

            char p=X[m];
    if(p>='A' && p<='Z')
        p=p+32;
    cout << "." << p ;
    }
   }
return 0;
}


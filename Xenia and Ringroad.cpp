#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int length, things,position, Move=0, pass=1, i;
    cin >> length >> things ;
    for(i=0; i<things; i++){
        cin >> position;
        if(position>=pass){
            Move=Move+position-pass;
        }
        else
            Move=length+position+Move-pass;
        pass=position;
    }
    cout << Move << endl;
    return 0;
}


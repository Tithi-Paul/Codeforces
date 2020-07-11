#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, value=1, index;
    cin >> n >> index;
    int position[n+3];
    for (i=1; i<n; i++){
        cin >> position[i];
    }
    for (i=1; i<n;){
        value= value + position[i];
        if(value==index){
            cout << "YES" << endl;
            return 0;
        }
        i= value;
        //cout << value << " ";
    }
    cout << "NO" << endl;

}


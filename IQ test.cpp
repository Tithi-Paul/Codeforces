#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a[105], p, q, even=0, odd=0, i;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    for(i=0; i<n; i++){
        if(a[i]%2==0){
            even++;
            p=i+1;
        }
        else{
            odd++;
            q=i+1;
        }
    }
    if(even==1)
        cout << p <<endl;
    else if(odd==1)
        cout << q <<endl;
}

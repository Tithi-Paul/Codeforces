#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, sum=0, capacity=0;
    cin >> n;
    while(n--){
    cin >> a >> b;
    sum= sum+b-a;
    if(sum>capacity)
        capacity=sum;
    }
    cout << capacity << endl;

    return 0;
}

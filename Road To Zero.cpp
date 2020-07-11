#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
while(t--){
    long long int x, y, a, b, sum=0, maximum, minimum, differ;
    cin>> x >> y >> a >> b;
    maximum = max(x, y);
    minimum = min(x, y);
    differ = maximum- minimum;
    sum = differ*a;
    if(2*a*minimum < b*minimum)
        sum=sum+2*a*minimum;
    else
        sum=sum+b*minimum;
    cout << sum << endl;
    }
}

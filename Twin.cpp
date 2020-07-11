#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int  n, arr[100000], i, a=0, b=0, c=0,d=0, car=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]==1)
            a++;
        else if(arr[i]==2)
            b++;
        else if (arr[i]==3)
            c++;
        else if(arr[i]==4)
            d++;
    }
        car=d+c+(b/2);
        a=a-c;
        if(a<=0)
            a=0;
        if(b%2!=0){
            car=car+1;
            a=a-2;
        }
        if(a<=0)
            a=0;
        car=car+(a/4);
        if(a%4!=0){
            car++;
        }
    printf("%d",car);

        return 0;
}


 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n, a[10000],i, h, sum=0;
    cin >> n >> h;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    for(i=0; i<n; i++){
        if(a[i]<=h){
            a[i]=1;
        }else
            a[i]=2;
        sum=sum+a[i];
    }
    cout << sum << " ";


}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, p;
    string A;
    cin >> n;
    cin>>A;

    stack<int>S;
    for(i = 0 ; i < n; i++){
        if(S.empty()==true)
            S.push(A[i]);
        else if(A[i] == '0' && S.top() == '1')
            S.pop();
        else if(A[i] == '1' && S.top() == '0')
            S.pop();
        else
            S.push(A[i]);
        p=S.size();
    }

    cout<< p << endl;
}

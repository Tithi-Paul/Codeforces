#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, small, p, A, B, m[100], k, j, cnt, n1, a[100], z;
    cin>>n1 ;
    j=1;
    for(i = 1; i <= sqrt(n1) ; i++){
        if(n1 % i == 0){
            a[j]= i;
            j++;
        }
    }
   k=1;
   for(i = 1 ; i < j ; i++){
    //cout<<" "<< a[i] ;
    if(5<=a[1])
    z=a[0];
    if(5>=a[j-1])
      z=a[j-1];
   cout<<" "<< z << endl ;
    p= n1/z;

  // cout << a[i] << " " << p << endl;
    m[k]= abs(a[i]-p);
    k++;

    //cout << m[i] << endl;
   }
   small=m[0];
	for(i=1; i<=j; i++)
	{
		if(small>m[i])
		{
			small=m[i];
			A= a[i];
			B=p;
		}
	}

    cout << A << " " << B << endl;
    return 0;
}

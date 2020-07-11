#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r,money,i;
	cin >> k >> r;
	for(i=1; ; i++)
	{
		money=k*i;
		if (money%10==0 || money%10==r)
            break;
	}
	cout << i << endl;
	return 0;
}

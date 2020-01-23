#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000], n, i, j, k, p,  m, temp;
    int b[6]={ 4, 8, 15, 16, 23, 42};
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    	for(i=0;i<n;++i)
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;++k)
					a[k]=a[k+1];

				--n;
			}
			else
				++j;
		}

	//cout<<"\n";
	//for(i=0;i<n;++i)
		//cout<<a[i]<<" ";
		for(i=0;i<n;i++){

		if (a[i]==b[i])
		cout << " " << endl;
		cout << "0" << endl;

		else if (a[i]!= b[i]){

              p = 0;

          while(a[p])
            {
             cout << a[p] << " ";
                p++;
            }
		}
		}
}







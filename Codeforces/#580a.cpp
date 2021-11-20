#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,a=1,b=0;
	cin >> n;
	long long int A[n], c,d;
	for(int i = 0; i<n;i++)	cin >> A[i];
	c=A[0];
	for(int i = 1; i<n;i++)
	{
		if(A[i]>=c)
			a++;
		else
		{
			if(b<a)
				b = a;
			a=1;
		}
		c=A[i];
		//cout << a << b << c << "\n";
	}
	if(b<a)
		b = a;
	cout << b;
	return 0;
}

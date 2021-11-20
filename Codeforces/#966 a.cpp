#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, c = 0,i=0;
	int A[] = {100, 20,10,5,1};
	cin >> n;
	while(n !=0)
	{
		c += (n/A[i]);
		n = n%A[i];
		i++;
	}
	cout << c;
	return 0;
}

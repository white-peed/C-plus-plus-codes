#include<bits/stdc++.h>

using namespace std;

int sol(int A[], int n)
{
	if(n==2)
		return abs(A[0]-A[1]);
	if(n==1)
		return 0;
	if(abs(A[n-1] - A[n-2]) < abs(A[n-1] - A[n-3]))
		return abs(A[n-1] - A[n-2]) + sol(A,n-1);
	else
		return abs(A[n-1] - A[n-3]) + sol(A,n-2);
}

int main()
{
	int n;
	cin >> n;
	int A[n];
	for(int i=0;i<n;i++)	cin >> A[i];
	cout << sol(A,n);
	return 0;
}

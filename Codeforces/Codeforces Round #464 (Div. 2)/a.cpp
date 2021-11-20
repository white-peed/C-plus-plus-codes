#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int A[n+1];
	for(int i = 1; i <= n; i++)
		cin >> A[i];
	for(int i = 1; i <= n; i++)
		if(A[A[A[i]]] == i)
		{
			cout << "YES"; 
			return 0;
		}
	cout << "NO";
	return 0;
}

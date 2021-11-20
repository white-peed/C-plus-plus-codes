#include <bits/stdc++.h>
using namespace std;

int B[100001];

int main() {
	int n, q, i;
	long long int a;
	cin >> n;
	int A[n];
	for(i = 0; i < n; i++)
	    cin >> A[i];
	sort(A,A + n);
	int j = 0;
	for(i = 0; i <= 100000; i++)
	{
		if(A[j] == i)
			j++;
		B[i] = j;
	}
	cin >> q;
    while(q != 0)
    {
        cin >> a;
        if(a > 100000)
        	cout << n << "\n";
        else
        	cout << B[a] << "\n";
        q--;
    }
	return 0;
}

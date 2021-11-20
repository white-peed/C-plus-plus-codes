#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
#define iter(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
//lli mod = 1000000007;

using namespace std;

int main()
{
	int n;
	lli k;
	
	cin >> n >> k;
	
	lli A[n];
	lli* B[n];
	
	ff(i,0,n-1)
	{
		cin >> A[i];
		B[i] = &A[i];
	}
	
	sort(B, B+n, [](lli* a, lli* b) { return *a < *b; });
	int c = k%n;
	if(c == 0)
	{
		ff(i,0,n-1)
		cout << k/n << "\n";
		return 0;
	}
	lli d = *B[c-1];
	ff(i,0,n-1)
		cout << (A[i] <= d ? (k/n + 1) : k/n) << "\n";
	return 0;
}

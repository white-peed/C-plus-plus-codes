#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

lli nCr(int n, int r)
{
	if(n < (2 * r))
		r = (n - r);
	if(r == 0)
		return 1;
	lli p = 1, k = 1;
	while(r > 0)
	{
		p *= n;
		k *= r;
		n--;
		r--;
	}
	return (p / k);
}

int main()
{
	int l;
	cin >> l;
	l--;
	cout << nCr(l,11);
	return 0;
}

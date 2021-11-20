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

bool isPerfectSquare(long long x)
{
	long long left = 1, right = x;

	while (left <= right)
	{
		long long mid = (left + right) / 2;
		if (mid * mid == x)
			return true;
		
		if (mid * mid < x)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return false;
}

int solve()
{
	long long x;
	cin >> x;
	if (isPerfectSquare(x))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}


int main()
{
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

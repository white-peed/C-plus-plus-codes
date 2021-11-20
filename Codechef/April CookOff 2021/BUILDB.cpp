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
//lli mod = 1000000007;

using namespace std;

int main()
{
	lli t;
	cin >> t;
	while(t--)
	{
		int n, r;
		vlli A, B;
		lli tm = 0, tc = 0, a;
		cin >> n >> r;
		ff(i,1,n)
		{
			cin >> a;
			A.pb(a);
		}
		ff(i,1,n)
		{
			cin >> a;
			B.pb(a);
		}
		tm = B[0];
		tc = B[0];
		ff(i,1,n-1)
		{
			if(tc < r * (A[i] - A[i-1]))
				tc = B[i];
			else
				tc += B[i] - r * (A[i] - A[i-1]);
			tm = max(tm, tc);
		}
		cout << tm << "\n";
	}
	return 0;
}

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
		int n, q, x;
		cin >> n >> q;
		lli A[n], s = 0, v;
		ff(i,1,n)
		{
			cin >> A[i-1];
			s = (s | A[i-1]);
		}
		cout << s << "\n";
		ff(i,1,q)
		{
			cin >> x >> v;
			A[x-1] = v;
			s = 0;
			ff(j,1,n)
				s = (s | A[j-1]);
			cout << s << "\n";
		}
	}
	return 0;
}

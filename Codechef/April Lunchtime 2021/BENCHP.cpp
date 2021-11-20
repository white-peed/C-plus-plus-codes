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
	int t;
	cin >> t;
	while(t--)
	{
		int n, w, a;
		lli wr;
		cin >> n >> w >> wr;
		map<int, int> m;
		map<int, int>::iterator itr;
		ff(j,1,n)
		{
			cin >> a;
			m[a]++;
		}
		for (itr = m.begin(); itr != m.end(); ++itr)
			(*itr).second /= 2;
		for (itr = m.begin(); itr != m.end(); ++itr)
			wr += 2 * (*itr).first * (*itr).second;
		cout << (wr >= w ? "YES\n" : "NO\n" ); 
	}
	return 0;
}

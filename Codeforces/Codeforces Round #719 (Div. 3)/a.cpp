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

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	bool A[26];
	fix(A,false);
	A[(int)(s[0] - 'A')] = true;
	ff(i,1,n-1)
		if(A[(int)(s[i] - 'A')] == true and s[i-1] != s[i])
		{
			cout << "NO\n";
			return;
		}
		else
			A[(int)(s[i] - 'A')] = true;
		cout << "YES\n";
	return;
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}
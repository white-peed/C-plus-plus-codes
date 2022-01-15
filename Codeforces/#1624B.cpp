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
    int a, b, c;
    cin >> a >> b >> c;
    int a_ = 2*b - c, b_ = (a+c)/2, c_ = 2*b - a;
    if((a_ > 0 and a_%a == 0) or ((a+c)%2 == 0 and b_ > 0 and b_%b == 0) or (c_ > 0 and c_%c == 0))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}

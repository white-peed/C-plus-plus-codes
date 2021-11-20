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

int main()
{
	lli n, t, a = 0, b = 0;
	int m;
	bool flag = true;
	cin >> n >> m >> t;
	lli N = n;
	ff(i,1,m)
	{
		cin >> a;
		n -= (a - b);
		cin >> b;
		n+= (b - a);
		if(n > N)
			n = N;
		if(n <= 0)
			flag = false;
	}
	n -= (t - b);
	if(n <= 0)
		flag = false;
	if(flag)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}

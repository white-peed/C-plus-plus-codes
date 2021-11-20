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
	int t;
	cin >> t;
	while(t--)
	{
		lli n, k, x, y;
		cin >> n >> k >> x >> y;
		k %= 4;
		if(x == y)
		{
			cout << n << " " << n << "\n";
			continue;
		}
		else if(x > y)
		{
			if(k == 1)
				cout << n << " " << n + y - x << "\n";
			else if(k == 2)
				cout << n + y - x << " " << n << "\n";
			else if(k == 3)
				cout << 0 << " " << x - y << "\n";
			else
				cout << x - y << " " << 0 << "\n";
			continue;
		}
		else
		{
			if(k == 1)
				cout << n + x - y << " " << n << "\n";
			else if(k == 2)
				cout << n << " " << n + x - y << "\n";
			else if(k == 3)
				cout << y - x << " " << 0 << "\n";
			else
				cout << 0 << " " << y - x << "\n";
			continue;
		}		
	}
	return 0;
}

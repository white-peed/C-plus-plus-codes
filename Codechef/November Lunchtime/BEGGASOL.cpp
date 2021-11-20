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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int F[n + 1];
		ff(i,1,n)	cin >> F[i];
		int ans = 0, fuel = 0;
		ans += F[1];
		fuel += F[1];
		ff(i,2,n)
		{
			ans += F[i];
			fuel += F[i];
			fuel--;
			if(fuel == 0)
				break;
		}
		cout << ans << "\n";			
	}
	return 0;
}

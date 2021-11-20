#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, d;
		cin >> n >> d;
		int a = 0, b = 0, j;
		ff(i, 1, n)
		{
			cin >> j;
			if(j >= 80 || j <=9)
				a++;
			else
				b++;	
		}	
		int ans = 0;
		if(a % d == 0)
			ans += a / d;
		else
			ans += (a / d) + 1;	
		if(b % d == 0)
			ans += b / d;
		else
			ans += (b / d) + 1;
			
		cout << ans << "\n";
	}
	return 0;
}

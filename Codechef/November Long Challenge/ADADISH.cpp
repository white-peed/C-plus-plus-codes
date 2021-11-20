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
		int n;
		cin >> n;
		int a, b, c, d;
		if(n == 1)
		{
			cin >> a;
			cout << a;
		}
		else if(n == 2)
		{
			cin >> a >> b;
			cout << max(a, b);
		}
		else if(n == 3)
		{
			cin >> a >> b >> c;
			cout << max(a + b + c - max(a, max(b, c)), max(a, max(b, c)));
		}	
		else
		{
			cin >> a >> b >> c >> d;
			cout << max(a + b + c + d - max(max(a, d), max(b, c)) - min(min(a, d), min(b, c)), max(max(a, d), max(b, c)) + min(min(a, d), min(b, c)));
		}
		cout << "\n";
	}
	return 0;
}

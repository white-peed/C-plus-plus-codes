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
	int n, h, x, a;
	int f = 0;
	cin >> n >> h >> x;
	ff(i,1,n)
	{
		cin >> a;
		if(a + x >= h)
		{
			cout << "YES";
			f = 1;
		}
	}
	if(f == 0)
		cout << "NO";
	return 0;
}

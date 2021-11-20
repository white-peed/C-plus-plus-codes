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
	int n;
	cin >> n;
	lli a[n+1];
	ff(i,1,n)	cin >> a[i];
	lli count = 0;
	ff(i,1,n - 1)
	{
		if (a[i] == 0)
			cout << count;
		else
		{
			count += a[i];
			a[i + (int)pow(2, (int)log2(n - i))] += a[i];
			a[i] = 0;
			cout << count;
		}
		cout << "\n";
	}
	return 0;
}

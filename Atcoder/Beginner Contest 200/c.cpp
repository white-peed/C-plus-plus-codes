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
	int n;
	lli a;
	cin >> n;
	lli A[200];
	fix(A,0);
	ff(i,1,n)
	{
		cin >> a;
		A[a%200]++;
	}
	lli ans = 0;
	ff(i,0,199)
		ans += (A[i] * (A[i]-1))/2;
	cout << ans;
	return 0;
}

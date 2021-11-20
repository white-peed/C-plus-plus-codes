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
	lli a=0,b=0;
	cin >> n;
	lli A[n];
	ff(i,0,n-1)	cin >> A[i];
	sort(A,A+n,greater<lli>());
	ff(i,1,n)
		if(i%2 == 1 and A[i-1]%2 == 0)
			a += A[i-1];
		else if(i%2==0 and A[i-1]%2 == 1)
			b += A[i-1];
			
	cout << (a>b?"Alice\n":(a==b?"Tie\n":"Bob\n"));
}

int main()
{
	int t;
	cin >> t;
	while(t--)	solve();
	return 0;
}

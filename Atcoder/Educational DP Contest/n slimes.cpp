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
	cin >> n;
	vlli A;
	lli a,c=0;
	ff(i,1,n)
	{
		cin >> a;
		A.pb(a);
	}
	while(A.size() != 1)
	{
		sort(A.begin(),A.end());
		A[1] += A[0];
		c += A[1];
		A.erase(A.begin());
	}
	cout << c;
	return 0;
}
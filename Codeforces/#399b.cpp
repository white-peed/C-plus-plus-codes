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
	int n, m;
	lli an = 0;
	cin >> n >> m;
	int A[m];
	ff(i,0,m-1)	cin >> A[i];
	ff(o,0,m-2)
		if(A[o] <= A[o+1])
			an += (A[o+1] - A[o]);
		else
			an += (n - A[o] + A[o+1]);
	cout << an + A[0] - 1;
	return 0;
}

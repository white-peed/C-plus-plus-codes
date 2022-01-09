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
	lli B[n+1];
	ff(i,2,n)	cin >> B[i];
	lli i = n;
	A.pb(n);
	while(i != 1)
	{
		i = B[i];
		A.pb(i);
	}
	fb(i,A.size()-1, 0)	cout << A[i] << " ";
	return 0;
}

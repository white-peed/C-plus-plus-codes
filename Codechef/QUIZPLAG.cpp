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
	int t;
	cin >> t;
	int A[100001];
	while(t--)
	{
		int n,m,k,a;
		cin >> n >> m >> k;	
		fix(A,0);
		ff(i,1,k)
		{
			cin >> a;
			A[a]++;
		}
		vi B;
		B.clear();
		ff(i,1,n)
			if(A[i] > 1)
				B.pb(i);
		cout << B.size()<< " ";
		ff(i,0,B.size()-1)	cout << B[i] << " ";
		cout << "\n";	
	}
	return 0;
}

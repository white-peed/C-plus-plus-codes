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
	int A[n+1], vis[n+1], ans[n+1];
	vi B;
	fix(vis, 0);
	fix(ans, 0);
	ff(i,1,n)	cin >> A[i];
	ff(i,1,n)
	{
		int j = i;
		while(vis[j] != 1)
		{
			vis[j]++;
			j = A[j];
		}
		fix(vis, 0);
		ans[i] = j;
	}
	ff(i,1,n)	cout << ans[i] << " ";
	return 0;
}

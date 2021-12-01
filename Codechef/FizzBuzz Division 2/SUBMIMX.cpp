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
	while(t--)
	{
        int n, m;
        cin >> n >> m;
        int z = n - m;
        int g1 = z%(m+1);
        int g2 = m+1-g1;
        int c1 = ((z/(m+1))+1);
        int c2 = (z/(m+1));
        cout << g1 * ((c1 * (c1+1))/2) + g2 * ((c2 * (c2+1))/2) << "\n";
	}
	return 0;
}

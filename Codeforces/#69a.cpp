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
	int n,x,y,z,X=0,Y=0,Z=0;
	cin >> n;
	while(n--)
	{
		cin >> x >> y >> z;
		X += x;
		Y += y;
		Z += z;		
	}
	cout << (X == 0 and Y == 0 and Z == 0 ? "YES\n" : "NO\n");
	return 0;
}

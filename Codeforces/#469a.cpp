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
	int n,a;
	cin >> n;
	int A[n];
	fix(A,0);
	int p;
	cin >> p;
	ff(i,1,p)
	{
		cin >> a;
		A[a-1] = 1;
	}
	cin >> p;
	ff(i,1,p)
	{
		cin >> a;
		A[a-1] = 1;
	}
	ff(i,1,n)
		if(!A[i-1])
		{
			cout << "Oh, my keyboard!";
			return 0;
		}
	cout << "I become the guy.";
	return 0;
}

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
//lli mod = 1000000007;

using namespace std;

int main()
{
	int n, a, q, p[51];
	vi A;
	cin >> n >> q;
	fix(p,0);
	ff(i,1,n)
	{
		cin >> a;
		if(p[a] == 0)
			p[a] = i;
	}
	ff(i,1,q)
	{
		cin >> a;
		A.pb(p[a]);
		int b = p[a];
		ff(j,1,50)
			if(p[j] < b)
				p[j]++;
		p[a] = 1;			
	}
	ff(i,0,A.size()-1)	cout << A[i] << " ";
	return 0;
}

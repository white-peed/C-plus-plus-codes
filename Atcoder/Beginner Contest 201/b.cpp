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

bool cmp(pair<string, int>& a,pair<string, int>& b)
{
    return a.second > b.second;
}

int main()
{
	vector<pair<string, int> > A;
	string a;
	int b,n;
	cin >> n;
	ff(i,1,n)
	{
		cin >> a >> b;
		A.pb(make_pair(a,b));
	}
	sort(A.begin(), A.end(), cmp);
	cout << A[1].first;
	return 0;
}

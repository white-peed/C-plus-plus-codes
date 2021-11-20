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
	lli a;
	cin >> n;
	vi A[200];
	ff(i,1,n)
	{
		cin >> a;
		A[a%200].pb(a);
	}
	int j = 0;
	for(;j<200;j++)
		if(A[j].size() > 1)
			break;
	if(j == 200)
		cout << "No";
	else
		cout << "Yes\n1 " << A[j][0] << "\n1 " << A[j][1] << "\n";
	return 0;
}

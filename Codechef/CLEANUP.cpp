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

void display(vi myvector)
{
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << *it << " ";
    return;
}

int main()
{
	int t,n,m,i,j;
	vi B,C,D;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		B.clear(),C.clear(),D.clear();
		int A[m];
		ff(i,0,m-1)	cin >> A[i];
		sort(A,A+m);
		i=1,j=0;
		for(;i<=n and j < m;i++)
		{
			if(A[j]==i)
			{
				j++;
				continue;
			}
			B.pb(i);
		}
		for(;i<=n;i++)
			B.pb(i);
		for(int i = 0;i<B.size();i+=2)
			C.pb(B[i]);
		for(int i = 1;i<B.size();i+=2)
			D.pb(B[i]);
		display(C);
		cout << "\n";
		display(D);
		cout << "\n";
	}
	return 0;
}

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
		int n,q;
		cin >> n;
		int A[n+1],P[n+1],B[n+1];
		ff(i,1,n)
			cin >> A[i];
		ff(i,1,n)
			cin >> P[i];
		ff(i,1,n)
			B[P[i]] = A[i];
		cin >> q;
		while(q--)
		{
			int x,y,z;
			cin >> x;
			if(x==1)
				copy(B,B+n+1,A);	
			else if(x==2)
			{
				cin >> y >> z;
				swap(A[y],A[z]);
			}
			else
			{
				cin >> y;
				cout << A[y];
				cout << "\n";
			}
			/*ff(i,1,n)	
				cout << A[i] << " ";
			cout << "\n";
			ff(i,1,n)	
				cout << B[i] << " ";*/
			
		}	
	}
	return 0;
}

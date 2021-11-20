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
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, s = 0;
		bool solve = true;
		cin >> n >> m;
		int A[n], B[m];
		lli a = 0, b = 0;
		ff(i,0,n-1)
		{
			cin >> A[i];
			a += A[i];
		}		
		ff(j,0,m-1)	
		{
			cin >> B[j];
			b += B[j];
		}	
		sort(A, A + n);
		sort(B, B + m, greater<int>());
		lli d = (b - a);
		//cout << a << " " << b << " " << d << endl;
		int i = 0, j = 0;
		/*ff(i,0,n - 1)	cout << A[i] << " ";
		cout << endl;
		ff(i,0,m - 1)	cout << B[j] << " ";
		cout << endl;*/
		while(d >= 0)
		{
			d += (2 * (A[i++] - B[j++]));
			s++;
			//cout << d << " ";
			if(s > n || s > m)
			{
				solve = false;
				break;
			}
		}
		if(solve)
			cout << s << "\n";
		else
			cout << "-1\n";
	}
	return 0;
}

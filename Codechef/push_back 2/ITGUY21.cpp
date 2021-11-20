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
	int t, A[51];
	A[1] = 0;
	A[2] = 1;
	ff(i,3,50)
		A[i] = A[i - 1] + A[i - 2];
	cin >> t;
	while(t--)
	{
		int k;
		cin >> k;
		ff(i,1,k)
		{
			ff(j,1,i)
				cout << A[j];	
			cout << "\n";
		}
	}
	return 0;
}

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
		int n;
		cin >> n;	
		int A[n];
		ff(i,0,n-1)	cin >> A[i];
		if(A[0] != A[1])
		{
			if(A[0] == A[2])
				cout << "2\n";
			else
				cout << "1\n";
			continue;
		}
		ff(i,2,n-1)
			if(A[i] != A[0])
				cout << i+1 << "\n";		
	}
	return 0;
}

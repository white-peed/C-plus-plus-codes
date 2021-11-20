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
	int n, m;
	cin >> n;
	int A[n];
	ff(i,0,n-1)	cin >> A[i];
	cin >> m;
	int B[m];
	ff(i,0,m-1)	cin >> B[i];
	sort(A, A + n);
	sort(B,B+m);
	int c = 0, i = 0, j = 0;
	while(i < n && j < m)
	{
		if(abs(A[i] - B[j]) <= 1)
			i++, j++, c++;
		else if(A[i] < B[j])
			i++;
		else
			j++;
	}
	cout << c;
	return 0;
}

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
	int n,a=0,s=0;
	cin >> n;
	int A[n];
	ff(i,0,n-1)	
	{
		cin >> A[i];
		s += A[i];
	}
	sort(A, A+n);
	s /=2;
	fb(i,n-1,0)
		if(s>0)
			s -= A[i],a++;
	cout << (s==0?a+1:a);
	return 0;
}

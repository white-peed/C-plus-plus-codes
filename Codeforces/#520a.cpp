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
	int A[26];
	fix(A,0);
	cin >> n;
	string s;
	cin >> s;
	ff(i,0,n-1)
		if(isupper(s[i]))
			A[(int)(s[i] - 'A')]++;
		else
			A[(int)(s[i] - 'a')]++;
	bool f = true;
	ff(i,0,25)
		if(A[i] == 0)
			f  = false;
	cout << (f?"YES":"NO");
	return 0;
}

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

char A[] = {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

bool solve(string s)
{
	int n = s.size();
	if(n==1 and s[0] == 'a')
		return true;
	if(s[0] != A[n] and s[n-1] != A[n])
		return false;
	if(s[n-1] == A[n])
	{
		s.pop_back();
		return solve(s);
	}
	else
	{
		s.erase(s.begin());
		return solve(s);
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << (solve(s)?"YES\n":"NO\n");
	}
	return 0;
}
/*
11
a
ba
ab
bac
ihfcbadeg
z
aa
ca
acb
xyz
ddcba
*/
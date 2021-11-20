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

bool capslock(string s)
{
	ff(i,1,s.size()-1)	if(islower(s[i]))	return false;
	return true;
}

int main()
{
	string s;
	cin >> s;
	if(capslock(s))
	{
		ff(i,0,s.size()-1)	
			if(isupper(s[i]))	s[i]=tolower(s[i]);
			else	s[i]=toupper(s[i]);
	}
	cout << s;
	return 0;
}

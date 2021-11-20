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

map<char, int> A;

void make_map()
{
	ff(i,0,25)
		A[(char)('A' + i)] = i;
	return;
}

int main()
{
	make_map();
	string s;
	bool f = true;
	cin >> s;
	ff(i,2,s.size() - 1)
		if((A[s[i -2]] + A[s[i-1]])%26 != A[s[i]])
		{
			f  = false;
			break;
		}
	if(f)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

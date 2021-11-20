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
	lli c=0;
	string s;
	cin >> n;
	ff(i,1,n)
	{
		cin >> s;
		if(s.compare("Tetrahedron") == 0)
			c += 4;
		else if(s.compare("Cube") == 0)
			c += 6;
		else if(s.compare("Octahedron") == 0)
			c += 8;
		else if(s.compare("Dodecahedron") == 0)
			c += 12;
		else
			c += 20;
		//cout << c << "\n";
	}
	cout << c;
	return 0;
}

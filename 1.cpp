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

void play_game(int m, int x)
{
	set<int> S;
	ff(i,1,x)
		S.insert(i);
	
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int m, x;
	cin >> m >> x;
	ff(i,1,x)
		play_game(m, x);
	return 0;
}

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

map<lli, int>::iterator itr;

void show(map<lli, int> gquiz2)
{
	for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
}

int main()
{
	int n, k;
	cin >> n >> k;
	lli A[n];
	map<lli, int> m;
	ff(i,0,n-1)	cin >> A[i];
	ff(i,0,k-1)	m[A[i]]++;
	int kem = m.size(), ke = m.size();
	//show(m);
	ff(i,1,n-k)
	{
		m[A[i-1]]--;
		m[A[i+k-1]]++;
		//show(m);
		//cout << "\n";
		if(m[A[i-1]] == 0)
			ke--;
		if(m[A[i+k-1]] == 1)
			ke++;
		kem = max(ke, kem);
	}
	cout << kem;
	return 0;
}

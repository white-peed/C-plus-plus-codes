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

bool cmp(pair<string, int>& a,
         pair<string, int>& b)
{
    return a.second < b.second;
}

void sort(map<string, int>& M)
{
    vector<pair<string, int> > A;
    for (auto& it : M)
        A.push_back(it);

    sort(A.begin(), A.end(), cmp);

    for (auto& it : A)
  		cout << it.second << " ";

}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, a;
		cin >> n;
		string s;
		map<string, int> m;
		ff(i,1,3*n)
		{
			cin >> s >> a;
			m[s] += a;
		}
		sort(m);
		cout << "\n";
	}
	return 0;
}

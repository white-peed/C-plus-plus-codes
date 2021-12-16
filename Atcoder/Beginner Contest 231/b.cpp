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

pair<string, int> findEntryWithLargestValue(map<string, int> sampleMap)
{
    pair<string, int> entryWithMaxValue = make_pair("", 0);
    map<string, int>::iterator currentEntry;
    for (currentEntry = sampleMap.begin(); currentEntry != sampleMap.end(); ++currentEntry) {
        if (currentEntry->second > entryWithMaxValue.second)
        {
            entryWithMaxValue = make_pair(currentEntry->first, currentEntry->second);
        }
    }
    return entryWithMaxValue;
}

void solve()
{
	map<string, int> M;
    int n;
    string s;
    cin >> n;
    ff(i,1,n)
    {
        cin >> s;
        M[s]++;
    }
    pair<string, int> entryWithMaxValue = findEntryWithLargestValue(M);
    cout << entryWithMaxValue.first;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
	int t = 1;
	//cin >> t;
	while(t--)
		solve();
	return 0;
}

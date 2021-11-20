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

float fun(string s, string del = "1")
{
	vector<string> t;
	int start = 0;
    int end = s.find(del);
    while (end != -1) {
        t.pb(s.substr(start, end - start));
        start = end + del.size();
        end = s.find(del, start);
    }
    t.pb(s.substr(start, end - start));
    int i = 0;
    while(i < t.size())
    {
    	if(t[i].size() == 0)
    		t.erase(t.begin() + i);
    	else
    		i++;
	}
    float a = 0.0;
    ff(i,0,t.size() - 1)
		a += t[i].size() * pow(2,-1 * i) * 1.0;
    return a;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, a;
		string s;
		cin >> n >> a;
		cin >> s;
		float b = fun(s);
		cout << (b >= (a * 1.0) ? "YES\n" : "NO\n");
	}
	return 0;
}

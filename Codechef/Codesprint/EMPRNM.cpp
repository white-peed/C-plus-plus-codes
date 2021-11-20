#include<bits/stdc++.h>
#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define pb push_back
#define vii vector<vi>
#define pii pair<int,int>
#define endl "\n"
#define mp make_pair
#define fix(a,b) memset(a,b,sizeof(a))
//lli mod = 1000000007;

using namespace std;

int main()
{
	string I, o;
	cin >> I;
	ff(i,0,I.size() - 1) 	I[i] = tolower(I[i]);
	ff(i,0,I.size() - 1)
		if(I[i] != 'a' && I[i] != 'e' && I[i] != 'i' && I[i] != 'o' && I[i] != 'u')
			o.pb(I[i]);
	ff(i,0,o.size() - 1)
	    if(isalpha(o[i]))
	        cout << "." << o[i];
	    else
	        cout << o[i];		//wrong check
	return 0;
}

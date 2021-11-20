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

bool checkperfectsquare(int n)
{

    if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
        return true;
    else 
        return false;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int A[n];
		ff(i,0,n-1)	cin >> A[i];
		bool f;
		ff(i,0,n-1)	
		{
			f = checkperfectsquare(A[i]);
			if(!f)	break;
		}
		if(!f)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}

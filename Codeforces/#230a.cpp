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

struct Interval {
    int start, end;
};
  
// Compares two intervals 
// according to staring times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

int main()
{
	int n,s,x,y;
	cin >> s >> n;
	Interval A[n];
	ff(i,0,n-1)
		cin >> A[i].start >> A[i].end;
	sort(A, A + n, compareInterval);
	ff(i,1,n)
	{
		x = A[i-1].start, y = A[i-1].end;
		if(s<=x)
		{
			cout << "NO";
			return 0;;
		}
		s+=y;
	}
	cout << "YES";
	return 0;
}

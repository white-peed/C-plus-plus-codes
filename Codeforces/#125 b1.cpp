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

vector<string> A;

void tokenize(string s, string del = " ")
{
    int start = 0;
    int end = s.find(del);
    while (end != -1) {
        A.pb(s.substr(start, end - start));
        start = end + del.size();
        end = s.find(del, start);
    }
    A.pb(s.substr(start, end - start));
    return;
}

int main()
{
    int n = 1;
    string a;
    cin >> a;
    tokenize(a, "<");
    ff(i,0,A.size() - 1)	cout << A[i] << " ";
 	ff(i,0,A.size() - 1)
 	{
		if(A[i].size() == 2)
		{
			ff(j,1,n)	cout << "  ";
			cout << "<" << A[i];
			n++;
		}
		else
		{
			n--;	
			ff(j,1,n)	cout << "  ";
			cout << "<" << A[i];
		}
		cout << "\n";
	}
    return 0;
}

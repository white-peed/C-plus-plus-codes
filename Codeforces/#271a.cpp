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

bool is_distinct(int num)
{
	bool visited[10] = {false};
    while (num)
	{
        if (visited[num % 10])
            break;
        visited[num%10] = true;
        num = num/10;
    }
    return (num == 0 ? true : false);
}

int main()
{
	int n;
	cin >> n;
	n++;
	while(1)
	{
		if(is_distinct(n))
		{
			cout << n;
			return 0;
		}
		n++;
	}
	return 0;
}

#include<bits/stdc++.h>

#define ff(i,a,n) for(int(i) = int(a);i <= int(n);i++)
#define fb(i,a,n) for(int(i) = int(a);i >= int(n);i--)
#define lli long long int
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>

using namespace std;

map<char,int> M_s, M_p;

void set_map()
{
    ff(i,0,25)
        M_s.insert(pair<char,int>('a' + i,0)), M_p.insert(pair<char,int>('a' + i,0));
    return;
}

void reset()
{
    ff(i,0,25)
        M_s['a' + i] = 0, M_p['a' + i] = 0;
    return;
}

void set_string_s(string s)
{
    ff(i,0,s.length() - 1)
        M_s[s[i]]++;
    return;
}

void set_string_p(string p)
{
    ff(i,0,p.length() - 1)
        M_p[p[i]]++;
    return;
}

void print_first(string s, string p)
{
    ff(i,0,25)
        if(('a' + i) == p[0])
        {
            while(M_s[('a' + i)] != M_p[('a' + i)])
                cout <<(char)('a' + i), M_s['a' + i]--;
            return;
        }
        else
            while(M_s[('a' + i)] != M_p[('a' + i)])
                cout <<(char)('a' + i), M_s['a' + i]--;
}

void print_last()
{
    ff(i,0,25)
        while((M_s['a' + i] - M_p['a' + i])!= 0)
            cout <<(char)('a' + i), M_s['a' + i]--;
    return;
}

int main()
{
	int t;
	cin >> t;
	set_map();
	while(t--)
	{
        reset();
        string s, p;
        cin >> s;
        cin >> p;
        set_string_s(s);
        set_string_p(p);
        print_first(s,p);
        cout << p;
        print_last();
        cout << "\n";
	}
	return 0;
}


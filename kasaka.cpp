#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
        for (int i = 0; i <s.length(); i ++)
        {
                if (s[i] != s[s.length() - i - 1]) return false;
        }
        return true;
}
int main()
{
    string s;
    cin >> s;
    if (check(s)) cout << "Yes" << endl;
    else
    {
        int l = 0, r = s.length() - 1;
        for (int i = 0; i < s.length(); i ++ )
        {
            if (s[i] != 'a')
            {
                l = i;
                break;
            }
        }
        for (int i = s.length() - 1; i >= 0; i -- )
        {
            if (s[i] != 'a')
            {
                r = i;
                break;
            }
        }
        if (s.length() - r <= l)
        {
            cout << "No" << endl;
            return 0;
        }
        // cout << l << " " << r << endl;
        string x = s.substr(l, r - l + 1);
        for (int i = 0; i < x.length(); i ++)
        {
            if (x[i] != x[x.length() - i - 1])
            {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double k;
    cin>>k;
    string a,b;
    cin>>a>>b;
    double cnt=0.0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==b[i])
        {
            cnt+=1;
        }
    }
    if(cnt/a.length()>=k)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}

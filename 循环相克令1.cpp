#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> res;
    res["Hunter"]=1;
    res["Bear"]=2;
    res["Gun"]=3;
    while(n--)
    {
        string a,b;
        cin>>a>>b;
        if(res[a]>res[b])
        {
            cout<<"Player1"<<endl;
        }
        else if(res[a]==res[b])
        {
            cout<<"Tie"<<endl;
        }
        else
        {
            cout<<"Player2"<<endl;
        }
    }
    return 0;
}

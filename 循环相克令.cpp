#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<"Tie"<<endl;
            continue;
        }
        if(a=="Hunter"&&b=="Gun")
        {
            cout<<"Player1"<<endl;
            continue;
        }
        if(a=="Gun"&&b=="Hunter")
        {
            cout<<"Player2"<<endl;
            continue;
        }
        if(a=="Hunter"&&b=="Bear")
        {
            cout<<"Player2"<<endl;
            continue;
        }
        if(a=="Bear"&&b=="Hunter")
        {
            cout<<"Player1"<<endl;
            continue;
        }
         if(a=="Gun"&&b=="Bear")
        {
            cout<<"Player1"<<endl;
            continue;
        }
        if(a=="Bear"&&b=="Gun")
        {
            cout<<"Player2"<<endl;
            continue;
        }
    }
    return 0;
}

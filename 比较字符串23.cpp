/*m@z_GfERLW
m@z_GfeRlW*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    
    string n,m;
	getline(cin,n);
	getline(cin,m);
    for(int i=0;i<n.length();i++)
    {
        if(n[i]>='A'&&n[i]<='Z')
        {
            n[i]=tolower(n[i]);
        }
        
    }
    for(int i=0;i<m.length();i++)
    {
        if(m[i]>='A'&&m[i]<='Z')
        {
        	m[i]=tolower(m[i]);
		}
    }
    int d;
    char c;
    d=strcmp(n.c_str(),m.c_str());
    if(d==0)
    {
        printf("=");
    }
    else if(d<0)
    {
        printf("<");
    }
    else if(d>0)
    {
        printf(">");
    }
    return 0;
}

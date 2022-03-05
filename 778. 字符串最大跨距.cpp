#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string a="",b="",c="";
    cin>>s;
    int t=0;
    for(int i=0;i<s.length();i++)
    {
        if(t==0&&s[i]!=',')
        {
            a+=s[i];
        }
        else if(s[i]==','&&t==0)
        {
            t=1;
        }
        else if(t==1&&s[i]!=',')
        {
            b+=s[i];
        }
        else if(s[i]==','&&t==1)
        {
            t=2;
        }
        else if(t==2&&s[i]!=',')
        {
            c+=s[i];
        }
        
    }
    string a1="",c1="";
	for(int i=a.length()-1;i>=0;i--) 
	{
		a1+=a[i];
	}
    for(int i=c.length()-1;i>=0;i--) 
	{
		c1+=c[i];
	}
//	cout<<c1;
    int x,y;
//    cout<<c<<" "<<c1<<endl;
    x=a.find(b)+b.length()-1;
//    cout<<a1<<endl;
//    cout<<c1<<endl;
    y=a1.find(c1)+c1.length()+1;
    y=a.length()-y;
//    cout<<x<<endl<<y<<endl;
//    
	if(x==-1||y==-1||x>y)
    {
    	cout<<"-1";
	}
	else
	{
		cout<<y-x;
	}
    

    return 0;
}

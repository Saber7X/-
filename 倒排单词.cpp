#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    int len=a.length();
    int c;
    for(int i=a.length()-1;i>=0;i--)
    {
        
       if(a[i]==' ')
       {
           for(int j=i+1;j<len;j++)
           {
               cout<<a[j];
               
           }
          
           len=i;
           if(i!=0)
           {
               cout<<" ";
           }
           
       }
    }
    for(int i=0;i<=len;i++)
    {
        cout<<a[i];
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num[13][13];
    char c;
    cin>>c;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>num[i][j];
            
        }
    }
    double sum=0.0;
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            sum+=num[i][j];
        }
    }
    int a=2;
    for(int i=6;i<=10;i++)
    {
        for(int j=0;j<=i-a;j++)
        {
            sum+=num[i][j];
        }
        a+=2;
    }
    if(c=='S')
    {
        printf("%.1f",sum);
    }
    else
    {
        printf("%.1f",sum/30.0);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char b;
    cin>>b;
    double num[200][200]={0.0};
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>num[i][j];
        }
    }
    
    if(b=='S')
    {
        int a=12;
        double sum=0.0;
        for(int  i=0;i<12;i++)
        {
            for(int j=a;j<12;j++)
            {
                sum+=num[i][j];
            }
            a--;
            if(a==0)
            {
                break;
            }
        }
        printf("%.1lf",sum);
    }
    if(b=='M')
    {
        int a=11;
        double sum=0.0;
        for(int i=0;i<12;i++)
        {
            for(int j=0;j<a;j++)
            {
                sum+=num[i][j];
            }
            a--;
            if(a==0)
            {
                break;
            }
        }
        printf("%.1f",sum/55);
    }
    return 0;
}

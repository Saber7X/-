#include<bits/stdc++.h>
using namespace std;
struct name{
    int a;//语文
    int b;//数学
    int c;//英语
    int hao;//学号
    int sum;//总分
}num[302];
bool cmp(name a,name b)
{
    if(a.sum==b.sum)
    {
        
        if(a.a==b.a)
        {
            return a.hao<b.hao;
        }
        else
        {
        	return a.a>b.a;
		}
    }
    
    
    	return a.sum >b.sum;
	
    
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&num[i].a,&num[i].b,&num[i].c);
        num[i].hao=i+1;
        num[i].sum=num[i].a+num[i].b+num[i].c;
    }
    sort(num,num+n,cmp);
    for(int i=0;i<5;i++)
    {
        printf("%d %d\n",num[i].hao,num[i].sum);
    }
    return 0;
}

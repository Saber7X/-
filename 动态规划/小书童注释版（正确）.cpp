#include<bits/stdc++.h>
using namespace std;
int num[15];
int t[15];
int w[15];
int dp[55];
int main()
{
    //n�� ʱ�䲻ͬ m��ҵ ��ҵʱ��ͷ�ֵ��ͬ k�ּ��� r����λʱ��
    //k�ּ���ʱ������
    //ϲ����ʱ�����򼴿�
    int n,m,k,r;
    cin>>n>>m>>k>>r;
    for(int i=0;i<n;i++)//ÿ�����ʱ�� 
    {
        scanf("%d",&num[i]);
    }
    sort(num,num+n);
    for(int i=1;i<=m;i++)//ÿ�ſε�ʱ�� 
    {
        scanf("%d",&t[i]);
    }
    for(int i=1;i<=m;i++)//ÿ�ſεķ��� 
    {
        scanf("%d",&w[i]);
    }
    int minn=0;
    int res=0;
    //ö��ǰi����ʱ��Ϊjʱ�ķ������������m����j���ӿ����ü��� 
    for(int i=1;i<=m;i++)
    {
        for(int j=r;j>=t[i];j--)//ʱ�� 
        {

             dp[j]=max(dp[j],dp[j-t[i]]+w[i]);
        }
    }
    for(int i=1;i<=r;i++)//ö��m����n���ӿ��ü��֣���С����һ���������񣬾�����������ȥд��ҵʱ�� 
    {
        if(dp[i] >= k)//���Լ�����
        {
            minn = r - i;//�Ѿ�д��ҵ��ȥ��ʱ�䲻��ˢ����
            break;
        }
    }
    //cout<<minn<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        minn-=num[i];
        if(minn>0)
        {
            sum++;
        }else{
            break;
        }
    }
    cout<<sum;
    return 0;
}


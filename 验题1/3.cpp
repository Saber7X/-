#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10, mod = 998244353;
int n,m;//��Χ��λ�� 
int res[N]={0};
int ans[N]={1};//��Ϊ�Ǵ�1��ʼ�����Զ���ֵΪ1�� 
int a[N];
bool st[N];
int sumn;

//void dfs(int u)
//{
//	
//	if(u>m)
//	{
//		int cnt = 1;
//		for(int i=1;i<=m;i++)
//		{
//			cnt *= a[ans[i]];
//			cnt %= mod; 
////			cout<<ans[i]<<" ";
//		}
////		cout<<endl;
//		sum += cnt;
//		sum %= mod;
//		return;
//	 }
//	
//		
//	//ģ�� 
//	for(int i=ans[u-1];i<=n;i++)//��ΪҪ���ֵ������Դ���һ���ù�������ʼ���� 
//	{
//		if(res[i]==0)
//		{
//			ans[u]=i;
//			res[i]=1;
//			dfs(u+1);
//			res[i]=0;
//		}
//	}
//	
//}
//void dfs(int k,int sum,int state)
//{
//    if(sum+n-k<m) return ;  //ʣ�µ�δѡ��������m��;
//    if(sum==m)
//	{
//		int cnt = 1;
//		int s = 0;
//        for(int i=0;i<n;i++)
//        {
//        	
//        	if(state >> i & 1)
//			{
//				s ++;
//				cnt *= a[i + 1];
//				cnt %= mod;
//			}
//		}
//		if (s == m)
//		{
//			sumn += cnt;
//			sumn %= mod;
//		}
//		
//        return ;
//    }
//    dfs(k+1,sum+1,state | 1 << k);  //ע��ݹ�˳��;
//    
//    dfs(k+1,sum,state);
//}
//void dfs(int u, int s)
//{
//    if (s > m) return;                      //�����ظ�����ʱ�ۼӵ�s���ܻ����m��Ϊ��Ч����
//    if (s == m)                             //ѡ�����ǡ�õ���mʱ�������
//    {
//    	int cnt = 1;
//        for (int i = 0; i < n; i ++ )
//        {
//	        if (st[i])
//            {
//            	cnt *= a[i];
//            	cnt %= mod;
////            	cout << a[i] << ' ';
//			}
//		}
//            
//        
//        sumn += cnt;
//        sumn %= mod;
////       cout << endl;
//        return;
//    }
//
//    if (u == n) return;                     //�Ѿ�������������������
//
//    int k = u;
//    while (k < n && a[k] == a[u]) st[k ++ ] = true, s ++ ;  //�Ȱ���С�����������
//
//    dfs(k, s);
//
//    for (int i = k - 1; i >= u; i -- )      //�������ָ��ֳ�
//    {
//        st[i] = false;
//        s -- ;
//        dfs(k, s);
//    }
//}

void dfs(int k,int sum,int state)
{
    if(sum+n-k<m) return ;  //ʣ�µ�δѡ��������m��;
    if(sum==m){
    	int cnt = 1;
        for(int i=0;i<n;i++)
        {
        	if(state >> i & 1) 
			{
//				cnt *= a[i];
//				cnt %= mod;
				printf("%lld ",a[i+1]);
			}
		}
//        sumn += cnt;
//        sumn %= mod;
        printf("\n");
        return ;
    }
    dfs(k+1,sum+1,state | 1 << k);  //ע��ݹ�˳��;
    
    dfs(k+1,sum,state);
}
signed main()
{
	cin>>n>>m;
	for (int i = 0; i < n; i ++ ) scanf("%lld", &a[i]);
	dfs(0, 0, 0);
//	cout << sumn << endl;
	return 0;
}

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=200+10;
int a[maxn][maxn];
int dp_y[maxn][maxn],dp_n[maxn][maxn];//dp_y��ʾǰj�д���i���ӵ������һ�������j�� (dp_nͬ����Ҫ�����һ��)
int dy[maxn][maxn],dn[maxn][maxn];//d_y��ʾ��j�д��i���ӵ����������һ���ӵ�(d_nͬ����Ҫ�����һ��) 
char c[maxn][maxn];
int main() {
    int k,n,m;
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d %c",&a[i][j],&c[i][j]);
    int cnt;
    for(int i=1;i<=m;i++){ 
        cnt=n;//���� 
        while(cnt>0&&c[cnt][i]=='Y'){
            dy[i][0]+=a[cnt][i];
            cnt--;
        }
        for(int j=1;j<=n&&cnt>0;j++) {
            dn[i][j]=dy[i][j-1]+a[cnt][i];
            dy[i][j]=dn[i][j];//��Y,������ͬ 
            cnt--;
            while(cnt>0&&c[cnt][i]=='Y') {
                dy[i][j]+=a[cnt][i];//��Y����ֱ�Ӽ��룬�����ӵ� 
                cnt--;
            }
        }
    }
    for(int j=1;j<=m;j++)//ö���� 
        for(int i=0;i<=k;i++)//�ӵ��� 
            for(int x=0;x<=n;x++)//������ӵ��� 
                if(x<=i){
                    dp_y[j][i]=max(dp_y[j][i],dp_y[j-1][i-x]+dy[j][x]);//dp_y[j][i]��������ש�������i���ӵ���
                    //��ֱ�Ӵ��µ����÷��⣬�����ٶ�һ���ӵ����ܴ��µ�����Y��ש��ĵ÷֡�
                    if(x<i)dp_n[j][i]=max(dp_n[j][i],dp_n[j-1][i-x]+dy[j][x]);
                    //��ʾ��j-1����һ����һש�������������ϵ��ӵ�ֱ�Ӵ������ģ�
                    //�������ש����Y�����ǿ��Դ��������ý������Ƿ��ӵ�ȥ���j�п��ϵ�Yש�顣
                    //�������ש����N�����ǿ�������һ���ӵ�ȥ���j����Ҫ���Yש�飬��j�����һ�������µ�Yש�����������ӵ�ȥ���Ǹ�Nש�顣
                    if(x>0)dp_n[j][i]=max(dp_n[j][i],dp_y[j-1][i-x]+dn[j][x]);
                }
    printf("%d\n",dp_n[m][k]);
    return 0;
}

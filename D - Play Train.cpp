#include<iostream>
using namespace std;
const int N=1e5+10;
int l[N],r[N],index,value[N];
int n, M,k,x,y;
void ini()
{
    //һ��ʼ��߽�ڵ�ָ���ұ߽�ڵ�,�ұ߽�ڵ�ָ����߽�ڵ�
    r[0]=n + 1;
    l[1]=0;
    //���½ڵ�����
    index=2;
}

void insert(int k,int x)//�ڵ�k���ڵ�����x
{
    //��ֵ�����½ڵ�
    value[index]=x;
    //���½ڵ�ֱ�ָ�����λ�õ��ҽڵ����ڵ�
    r[index]=r[k];
    l[index]=k;
    //���½ڵ��ұ�һ�ڵ�����ָ���½ڵ�,���½ڵ����һ�ڵ�����ָ���½ڵ�
    l[r[k]]=index;
    r[k]=index;
    //���½ڵ�����
    index++;
}
void remove(int k, int i)
{
    //ɾ����k���ڵ�,��k-1����ָ��ָ��ԭ�ȵ�k���ڵ����ָ��ָ��Ľڵ�
    r[l[k]]=n + 1;
    //ɾ����k���ڵ�,ԭ�ȵ�k���ڵ����ָ��ָ��Ľڵ����ָ��ָ��ԭ�ȵ�k���ڵ����ָ��ָ��
    //�Ľڵ�
    l[r[i]]=0;
}
int main()
{
    // 0 ����߽�  1���ұ߽�
    //��Ϊ0��1����ռ��,���Ե�1���ڵ�Ҳ����2=1+1 ,��2���ڵ�Ϊ3=2+1;
    //���k���ڵ�Ҳ����k+1
    ini();
    
    int operation;
    cin>>n >> M;//��������
    while(M--)
    {
        cin>>operation;//����ָ��
        if(operation==1)//�����������˲���x
        {
            //Ҳ��������߽�����һ���ڵ�,��������˲���һ���ڵ�
            cin>>x>>y;
            insert(y,x);
        }
        else if(operation==2)//�ѵ�k���������ɾ��
        {
            cin>>x >> y;
            remove(x, y);
        }
        else
        {
        	cin >> x;
        	int pos=r[x];
		    while(pos!=n)//��ָ���ұ߽�ڵ�ʱ,ѭ������
		    {
		        cout<<value[pos]<<" ";
		        pos=r[pos];
		    }
		    cout << endl;
		}
    }
    
    return 0;
}

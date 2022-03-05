#include<iostream>
using namespace std;
const int N=1e5+10;
int l[N],r[N],index,value[N];
int n, M,k,x,y;
void ini()
{
    //一开始左边界节点指向右边界节点,右边界节点指向左边界节点
    r[0]=n + 1;
    l[1]=0;
    //更新节点索引
    index=2;
}

void insert(int k,int x)//在第k个节点后插入x
{
    //将值赋给新节点
    value[index]=x;
    //将新节点分别指向插入位置的右节点和左节点
    r[index]=r[k];
    l[index]=k;
    //将新节点右边一节点向左指向新节点,将新节点左边一节点向右指向新节点
    l[r[k]]=index;
    r[k]=index;
    //更新节点索引
    index++;
}
void remove(int k, int i)
{
    //删除第k个节点,第k-1的右指针指向原先第k个节点的右指针指向的节点
    r[l[k]]=n + 1;
    //删除第k个节点,原先第k个节点的右指针指向的节点的左指针指向原先第k个节点的左指针指向
    //的节点
    l[r[i]]=0;
}
int main()
{
    // 0 是左边界  1是右边界
    //因为0和1都被占用,所以第1个节点也就是2=1+1 ,第2个节点为3=2+1;
    //∴第k个节点也就是k+1
    ini();
    
    int operation;
    cin>>n >> M;//操作个数
    while(M--)
    {
        cin>>operation;//操作指令
        if(operation==1)//在链表的最左端插入x
        {
            //也就是在左边界后插入一个节点,就是最左端插入一个节点
            cin>>x>>y;
            insert(y,x);
        }
        else if(operation==2)//把第k个插入的数删除
        {
            cin>>x >> y;
            remove(x, y);
        }
        else
        {
        	cin >> x;
        	int pos=r[x];
		    while(pos!=n)//当指向右边界节点时,循环结束
		    {
		        cout<<value[pos]<<" ";
		        pos=r[pos];
		    }
		    cout << endl;
		}
    }
    
    return 0;
}

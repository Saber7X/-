#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
//*******静态单链表，可以一个点的下一个节点，但是如果要找前一个节点，只能for循环遍历来找


//head 表示头结点的下标
// e[i]表示节点i的值
//ne[i] 表示节点i的next指针（意思是说该节点下一个节点是什么）是多少
//idx表示当前已经用到了哪个点
int m, head,e[10000], ne[10000],idx;

void init()//初始化
{
    head = -1;
    idx = 0;
}

//将x插到头结点,x为值，idx为当前可以用的最新的点的坐标，head是头结点的编号
void  add_to_head(int x)
{
    e[idx] = x;//将空指针和x联系在一起
    ne[idx] = head;//将x的next坐标指向原本的头结点坐标
    head =idx;//将头坐标指向X的坐标
    idx++;//更新当前可用新坐标
}

//一般的插入操作，将x点插入到k点后面
void add(int k,int x)
{
    e[idx] = x; 
    ne[idx] = ne[k];
    ne[k] = idx;
    
    idx++;
}

//将坐标是k后面的点删掉
void del(int k)
{
    ne[k] = ne[ne[k]];//使k的next指向k的下一个的下一个坐标，也就是跳过这个
}

int main()
{
    
    return 0;
}

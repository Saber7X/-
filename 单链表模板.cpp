#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
//*******��̬����������һ�������һ���ڵ㣬�������Ҫ��ǰһ���ڵ㣬ֻ��forѭ����������


//head ��ʾͷ�����±�
// e[i]��ʾ�ڵ�i��ֵ
//ne[i] ��ʾ�ڵ�i��nextָ�루��˼��˵�ýڵ���һ���ڵ���ʲô���Ƕ���
//idx��ʾ��ǰ�Ѿ��õ����ĸ���
int m, head,e[10000], ne[10000],idx;

void init()//��ʼ��
{
    head = -1;
    idx = 0;
}

//��x�嵽ͷ���,xΪֵ��idxΪ��ǰ�����õ����µĵ�����꣬head��ͷ���ı��
void  add_to_head(int x)
{
    e[idx] = x;//����ָ���x��ϵ��һ��
    ne[idx] = head;//��x��next����ָ��ԭ����ͷ�������
    head =idx;//��ͷ����ָ��X������
    idx++;//���µ�ǰ����������
}

//һ��Ĳ����������x����뵽k�����
void add(int k,int x)
{
    e[idx] = x; 
    ne[idx] = ne[k];
    ne[k] = idx;
    
    idx++;
}

//��������k����ĵ�ɾ��
void del(int k)
{
    ne[k] = ne[ne[k]];//ʹk��nextָ��k����һ������һ�����꣬Ҳ�����������
}

int main()
{
    
    return 0;
}

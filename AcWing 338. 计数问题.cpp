#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

//get�ǰ�l,r��Χ�ڵ�ÿ�����ּ����һ������
int get(vector<int> num, int l, int r)
{
    int res = 0;
    for(int i = l; i >= r; i -- )
    {
        res = res * 10 + num[i];
    }
    return res;
}

//����10��x�η�
int power10(int x)
{
    int res = 1;
    while (x -- ) res *= 10;
    return res;
}

int count(int n, int x)
{
    if (!n) return 0;
    
    vector<int> num;
    while(n)
    {
        num.push_back(n % 10);//ÿһλ�����ȥ
        n /= 10;
    }
    n = num.size();
    
    int res = 0;
    for (int i = n - 1 - !x ; i >= 0; i -- )//ö��ÿһλ
    {
        if (i < n - 1)//��һ������������ܷ�������λ��
        {
            //��Ϊȡ����abc - 1,���Ժ�����ȡ�ĸ���һ����10�ı���
            //�ܸ������ڣ�abc-1��*10�ģ���ǰö�ٵ��������м�λ�����η�
            res += get(num, n - 1, i + 1) * power10(i);//��Ϊi��0��ʼ���Բ��ü�һ
            if (!x) res -= power10(i);
        }
        
        //****�ڶ������****//
        
        if(num[i] == x)//��һ�����
        {
            //������λ������������Ƕ��پͼӶ���
            res += get(num, i - 1, 0) + 1;
        }//��Ϊ��λ����Ҫ�ҵ��������Կ���ȡ��999...������0������10�ı���
        else if(num[i] > x) res += power10(i);//�ڶ��� 
    }
    
    return res;
}

int main()
{
    int a, b;
    while(cin >> a >> b, a || b)
    {
        if(a > b) swap(a, b);
        for(int i = 0; i < 10; i ++ )
        {
            cout << count(b, i) - count(a - 1, i) << " ";
        }
        cout << endl;
    }
    return 0;
}

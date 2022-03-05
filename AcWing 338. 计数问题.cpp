#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

//get是把l,r范围内的每个数字计算成一个整数
int get(vector<int> num, int l, int r)
{
    int res = 0;
    for(int i = l; i >= r; i -- )
    {
        res = res * 10 + num[i];
    }
    return res;
}

//计算10的x次方
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
        num.push_back(n % 10);//每一位都存进去
        n /= 10;
    }
    n = num.size();
    
    int res = 0;
    for (int i = n - 1 - !x ; i >= 0; i -- )//枚举每一位
    {
        if (i < n - 1)//第一种情况（不可能发生在首位）
        {
            //因为取的是abc - 1,所以后面能取的个数一定是10的倍数
            //总个数等于（abc-1）*10的（当前枚举的数后面有几位数）次方
            res += get(num, n - 1, i + 1) * power10(i);//因为i从0开始所以不用减一
            if (!x) res -= power10(i);
        }
        
        //****第二种情况****//
        
        if(num[i] == x)//第一个情况
        {
            //加上这位数后面的数，是多少就加多少
            res += get(num, i - 1, 0) + 1;
        }//因为该位数比要找的数大，所以可以取到999...，加上0，就是10的倍数
        else if(num[i] > x) res += power10(i);//第二个 
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

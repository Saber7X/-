#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
int T;
int main()
{
    cin >> T ;
   // getchar();
    while(T -- )
    {
        bool flag = true;
        int a, b;// 0, 1
        char s[N];
        cin >> a >> b;
        scanf("%s", s+1);
        //printf ("%s" , s+1);
        int len = strlen(s+1);
        //cout<<len<<endl;
        

        //判断a，b的个数是否能构成回文
        if(a % 2 != 0 && b % 2 != 0) 
        {
            cout << "-1" <<endl;
            continue;
        }

        //判断给的字符串里 0， 1的个数是否符合要求
        int c = 0, d = 0;
        for(int i = 1; i <= len; i ++ )
        {
            if(s[i] == '0') c++;
            if(s[i] == '1') d++;
        }
        if(c > a || d > b)
        {
            cout << "-1" << endl;
            continue;
        }

        //将0, 1的数量计算成剩下的
        for(int i = 1; i <= len; i ++ )
        {
            if(s[i] == '0')
            {
                a --;
            }
            if(s[i] == '1')
            {
                b --;
            }
        }

        //判断字符串里已有的0，1是否符合回文要求
        for(int i = 1; i <= len/2; i ++)
        {
            if(s[i] != s[len - i + 1] && s[i] != '?' && s[len - i + 1] != '?')
            {
                flag = false;
                break;
            }
        }
        if(!flag) 
        {
            cout << "-1" << endl;
            continue;
        }

        //将一边是数字，另一边是问号的赋值
        for(int i = 1; i <= len / 2; i ++ )
        {
            if(s[i] == '?' && s[len - i + 1] != '?')//前面是问号后面是数字
            {
                s[i] = s[len - i + 1];
                if(s[i] == '0') a --;
                if(s[i] == '1') b --;
            }
            if(s[i] != '?' && s[len - i + 1] == '?')//前面是问号后面是数字
            {
                s[len - i + 1] = s[i];
                if(s[i] == '0') a --;
                if(s[i] == '1') b --;
            }

            if(a < 0 || b < 0)//如果0，1不够用
            {
                flag = false;
                break;
            }
        }
        if(!flag)
        {
            cout << "-1" << endl;
            continue;
        }

        //如果中间的是问号
        for(int i = 1; i <= len; i ++ )
        {
            if(i == len - i + 1 && s[i] == '?')
            {
                if(a % 2 != 0)
                {
                    s[i] = '0';
                    a -- ;
                } 
                else if(b % 2 != 0) 
                {
                    s[i] = '1';
                    b -- ;
                }
                else
                {
                    flag = false;
                }
            }
        }
        if(!flag)
        {
            cout << "-1" << endl;
            continue;
        }

        //如果两边都是问号
        for(int i = 1; i <= len/2; i ++ )
        {
            if (s[i] == '?' )
            {
                if(a >= 2)
                {
                    s[i] = s[len - i + 1] = '0';
                    a -= 2;
                }
                else if(b >= 2)
                {
                    s[i] = s[len - i + 1] = '1';
                    b -= 2;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (!flag)
        {
            cout << "-1" << endl;
            continue;
        }

        //输出
        printf ("%s\n" , s+1);

    }
    return 0;
}


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
        

        //�ж�a��b�ĸ����Ƿ��ܹ��ɻ���
        if(a % 2 != 0 && b % 2 != 0) 
        {
            cout << "-1" <<endl;
            continue;
        }

        //�жϸ����ַ����� 0�� 1�ĸ����Ƿ����Ҫ��
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

        //��0, 1�����������ʣ�µ�
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

        //�ж��ַ��������е�0��1�Ƿ���ϻ���Ҫ��
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

        //��һ�������֣���һ�����ʺŵĸ�ֵ
        for(int i = 1; i <= len / 2; i ++ )
        {
            if(s[i] == '?' && s[len - i + 1] != '?')//ǰ�����ʺź���������
            {
                s[i] = s[len - i + 1];
                if(s[i] == '0') a --;
                if(s[i] == '1') b --;
            }
            if(s[i] != '?' && s[len - i + 1] == '?')//ǰ�����ʺź���������
            {
                s[len - i + 1] = s[i];
                if(s[i] == '0') a --;
                if(s[i] == '1') b --;
            }

            if(a < 0 || b < 0)//���0��1������
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

        //����м�����ʺ�
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

        //������߶����ʺ�
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

        //���
        printf ("%s\n" , s+1);

    }
    return 0;
}


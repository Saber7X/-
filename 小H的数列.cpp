#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10086;
char s1[MAXN] = {};
char s2[MAXN] = {};
int a[MAXN] = {};
int b[MAXN] = {};
int c[2*MAXN] = {};
int main() 
{
    scanf("%s", s1);
 	for(int i=0;i<sizeof s1;i++)
 	{
 		s2[i]=s1[i];
	}
    bool flaga = false;
    if ('-'==s1[0]) 
	{
        flaga = true;
        strcpy(s1, &s1[1]);
    }
    bool flagb = false;
    if ('-'==s2[0]) 
	{
        flagb = true;
        strcpy(s2, &s2[1]);
    }
    if ((true==flaga && false==flagb) || (false==flaga && true==flagb)) 
	{
        printf("-");
    }
    int lena = strlen(s1);
    for (int i=0; i<lena; i++) 
	{
        a[lena-i-1]=s1[i]-'0';
    }
    int lenb = strlen(s2);
    for (int i=0; i<lenb; i++) 
	{
        b[lenb-i-1]=s2[i]-'0';
    }
    int jw;
    for (int i=0; i<lena; i++) 
	{
        jw=0;
        for (int j=0; j<lenb; j++) 
		{
            c[i+j] = a[i]*b[j]+jw+c[i+j];
            jw = c[i+j]/10;
            c[i+j] %= 10;
        }
        c[i+lenb]=jw;
    }
    int lenc=lena+lenb;
    for (int i=lenc-1; i>=0; i--) 
	{
        if (0==c[i] && lenc>1) 
		{
            lenc--;
        } else 
		{
            break;
        }
    }    
    
    for (int i=lenc-1; i>=0; i--) 
	{
        printf("%d", c[i]);
    }
    printf("\n");
    return 0;
}

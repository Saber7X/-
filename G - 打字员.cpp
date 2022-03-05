#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string a;
		cin>>a;
		bool t=0;//0–°–¥£¨1¥Û–¥ 
		int cnt=a.length();
		for(int i=0;i<a.length();i++)
		{
			if((a[i]=='A'||a[i]=='B'||a[i]=='C'||a[i]=='D'||a[i]=='E'||a[i]=='F'||a[i]=='G'||a[i]=='H'||a[i]=='I'||a[i]=='J'||a[i]=='K'||a[i]=='L'||a[i]=='M'||a[i]=='N'||a[i]=='O'||a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S'||a[i]=='T'||a[i]=='U'||a[i]=='V'||a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')&&t==0) 
			{
				cnt++;
				t=1;
			}
			else if((a[i]=='a'||a[i]=='b'||a[i]=='c'||a[i]=='d'||a[i]=='e'||a[i]=='f'||a[i]=='g'||a[i]=='h'||a[i]=='i'||a[i]=='j'||a[i]=='k'||a[i]=='l'||a[i]=='m'||a[i]=='n'||a[i]=='o'||a[i]=='p'||a[i]=='q'||a[i]=='r'||a[i]=='s'||a[i]=='t'||a[i]=='u'||a[i]=='v'||a[i]=='w'||a[i]=='x'||a[i]=='y'||a[i]=='z')&&t==1)
			{
				cnt++;
				t=0;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}

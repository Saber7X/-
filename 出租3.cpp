#include<bits/stdc++.h>
using namespace std;
map<char,int>c;//用来记录 
int main()
{
	int cnt=0;
	string a;//原电话号码 
	char b[100];//存储去重排序后的
	
	cin>>a;
	int lena=a.length();
	for(int i=0;i<lena;i++)
	{
		
		c[a[i]]++;
		//printf("%d",c[a[i]]);
		if(c[a[i]]==1) 
		{
			b[cnt]=a[i];
			//cout<<b[cnt];
			cnt++;
		}
	} 
	cout<<"int[] arr = new int[]{";
	sort(b,b+cnt);
	for(int i=cnt-1;i>=0;i--)
	{
		cout<<b[i];
		if(i!=0)
		{
			cout<<",";
		}
		else
		{
			cout<<"};"<<endl;
		}
	}
	cout<<"int[] index = new int[]{";
	for(int i=0;i<lena;i++)
	{
		for(int j=cnt-1;j>=0;j--)
		{
			if(a[i]==b[j])
			{
				printf("%d",cnt-1-j);
				if(i!=lena-1)
				{
					cout<<",";
				}
				else
				{
					printf("};");
				}
			}
		}
	}
	return 0;
}

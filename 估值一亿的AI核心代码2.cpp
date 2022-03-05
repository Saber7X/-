#include<bits/stdc++.h>
using namespace std;
vector<string>v;
int main()
{
	int n;
	cin>>n;			
	getchar();
	string a;
	
	while(n--)
	{
		getline(cin,a);
		cout<<a<<endl<<"AI: ";//先输出原文和 "AI: "
		//int cnt=0;
		for(int i=0;i<a.length();i++)//转换大小写 
		{
			if(a[i]=='?')//将？改为！ 
			{
				a[i]='!';
			}
			else if(isupper(a[i])!=0&&a[i]!='I')//非0为真，是大写字母 
			{
				a[i]=tolower(a[i]);//将除I以为的大写字母改为小写 
			}
		}
		
		v.clear();//清空数组（初始化） 
		
		for(int i=0;i<a.length();)//去除空格 
		{
			string tmp="";//初始化，清空 
			if(isalpha(a[i])!=0)//非0为真，表示是字母 
			{
				while(i<a.length()&&isalpha(a[i])!=0)
				{
					tmp+=a[i++];//存字母 
				}
			}
			else if(isdigit(a[i])!=0)
			{
				while(i<a.length()&&isdigit(a[i])!=0)//非0为真，表示是数字 
				{
					tmp+=a[i++];//存数字 
				}
			}
			else if(a[i]==' ')
			{
				tmp=" ";
				while(i<a.length()&&a[i]==' ')//只留一个空格 
				{
					i++;
				}
			}
			else//如果是分隔符比如逗号 
			{
				tmp+=a[i];
				i++;
				if(v.size()>0&&v.back()==" ")
				{
					v.pop_back();
				}
			}
			if(tmp==" "&&(v.empty()||i==a.length()))//去除首位空格 
			{
				continue;
			}
			v.push_back(tmp);//存入动态数组 
		}
		
		for(int i=0;i<v.size();i++)
		{
			if(v[i]=="I"||v[i]=="me")//i,me换成you 
			{
				v[i]="you";
			}
			else if(v[i]=="you")
			{
				if(i<2||(v[i-1].length()==0&&(v[i-2]!="can"||v[i-2]!="could")))//如果前面的字符少于2个，说明存不下can和空格  或者前一个字符串是空格，再前一个字符串不是can或could，  说明不符合要求   isalnum(v[i-1][0])==0
				{
					continue;
				}
				if(v[i-2]=="can")
				{
					v[i-2]="I";
					v[i]="can";
				}
				if(v[i-2]=="could")
				{
					v[i-2]="I";
					v[i]="could";
				}
			}
		}
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i];
		}
		 cout<<endl;
	}
	return 0;
}	 
	

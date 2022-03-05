#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string b="I can";
	string c="I could";
	vector<char> v;
	for(int k=0;k<n;k++)
	{
		string a;
		if(k==0)
		{
			getchar();
		}
		getline(cin,a);
		cout<<a<<endl;
		cout<<"AI: ";
		
		for(int i=0;i<a.length();i++)//转换大小写 
		{
			if(a[i]>='A'&&a[i]<='Z'&&a[i]!='I')
			{
				a[i]+=32;
			}
			if(a[i]==' '&&a[i+1]==' ')
			{
				continue;
			}
			else
			{
				v.push_back(a[i]);
			}
		}
		
		for(int i=0;i<v.size();i++)//去除空格 
		{
			if(a[i]==' '&&((a[i+1]<='z'&&a[i+1]>='a')||(a[i+1]<='Z'&&a[i+1]>='A')))
			{
				continue;
			}
			else if(a[i]==' ')
			{
				v.erase(v.begin()+i);
				i--;
			}
		}
		
		for(int i=0;i<v.size();i++)
		{
			if(v[i]=='c'&&v[i+1]=='a'&&v[i+2]=='n'&&v[i+3]==' '&&v[i+4]=='y'&&v[i+5]=='o'&&v[i+6]=='u')
			{
				for(int j=0;j<7;j++)
				{
					v.erase(v.begin()+i+j);
				}
				for(int j=0;j<5;j++)
				{
					v.insert(v.begin()+j,b[j]);
				}	
				
			}
			
			else if(v[i]=='c'&&v[i+1]=='o'&&v[i+2]=='u'&&v[i+3]=='l'&&v[i+4]=='d'&&v[i+5]==' '&&v[i+6]=='y'&&v[i+7]=='o'&&v[i+8]=='u')
			{
				for(int j=0;j<9;j++)
				{
					v.erase(v.begin()+i+j);
				}
				for(int j=0;j<7;j++)
				{
					v.insert(v.begin()+j,c[j]);
				}	
				
			}
			
			else if(v[i]=='?')
			{
				v.erase(v.begin()+i);
				v.insert(v.begin()+i,'!');
			}
			
			else if(v[i]=='I')
			{
				v.erase(v.begin()+i);
				v.insert(v.begin()+i,'y');
				v.insert(v.begin()+i+1,'o');
				v.insert(v.begin()+i+2,'u');
			}
			
			else if(v[i]=='m'&&v[i+1]=='e')
			{
				v.erase(v.begin()+i);
				v.erase(v.begin()+i);
				v.insert(v.begin()+i,'y');
				v.insert(v.begin()+i+1,'o');
				v.insert(v.begin()+i+2,'u');
			}
		 } 
		 int l=0;
		 if(a[0]==' ')
		 	{
		 		l++;
			 }
		 for(int i=l;i<v.size();i++)
		 {
		 	
		 	cout<<v[i];
		 }
		 cout<<endl;
		 v.clear();
	}
	return 0;
}		 
			


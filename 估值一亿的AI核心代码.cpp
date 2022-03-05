#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string a;
		if(i==0)
		{
			getchar();
		}
		getline(cin,a);
		cout<<a<<endl;
		for(int i=0;i<a.length();i++)
		{
			if(a[i]!='I'&&a[i]>='A'&&a[i]<='Z')
			{
				a[i]+=32;
			}
		}
		cout<<"AI: ";
		bool t=0;//用于判断句首空格 
		for(int i=0;i<a.length();i++)
		{
			bool s=0;
			
			
			 if(a[i]=='?')
			 {
			 	s=1;
			 	cout<<'!';
			 }
			 
			 
			 if(a[i]==' ')
			 {
			 	s=1;
			 	t=1;
			 	continue;
			 }
			 else if(a[i]!=' '&&t==1)
			 {
			 	s=1;
			 	if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
			 	{
			 		cout<<" ";
				 }
				 else
				 {
				 	cout<<a[i];
				 }
				 t=0;
			 }
			 
			 if(a[i]=='I')
			 {
			 	s=1;
			 	cout<<"you";
			 }
			 
			 if(a[i]=='m'&&a[i+1]=='e')
			 {
			 	s=1;
			 	cout<<"you";
			 	i+=1;
			 }
			 if(s==0)
			 {
			 	cout<<a[i];
			 }
			 
			 
			
		}
		cout<<endl;
		
	 } 
	return 0;
}

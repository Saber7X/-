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
		cout<<a<<endl<<"AI: ";//�����ԭ�ĺ� "AI: "
		//int cnt=0;
		for(int i=0;i<a.length();i++)//ת����Сд 
		{
			if(a[i]=='?')//������Ϊ�� 
			{
				a[i]='!';
			}
			else if(isupper(a[i])!=0&&a[i]!='I')//��0Ϊ�棬�Ǵ�д��ĸ 
			{
				a[i]=tolower(a[i]);//����I��Ϊ�Ĵ�д��ĸ��ΪСд 
			}
		}
		
		v.clear();//������飨��ʼ���� 
		
		for(int i=0;i<a.length();)//ȥ���ո� 
		{
			string tmp="";//��ʼ������� 
			if(isalpha(a[i])!=0)//��0Ϊ�棬��ʾ����ĸ 
			{
				while(i<a.length()&&isalpha(a[i])!=0)
				{
					tmp+=a[i++];//����ĸ 
				}
			}
			else if(isdigit(a[i])!=0)
			{
				while(i<a.length()&&isdigit(a[i])!=0)//��0Ϊ�棬��ʾ������ 
				{
					tmp+=a[i++];//������ 
				}
			}
			else if(a[i]==' ')
			{
				tmp=" ";
				while(i<a.length()&&a[i]==' ')//ֻ��һ���ո� 
				{
					i++;
				}
			}
			else//����Ƿָ������綺�� 
			{
				tmp+=a[i];
				i++;
				if(v.size()>0&&v.back()==" ")
				{
					v.pop_back();
				}
			}
			if(tmp==" "&&(v.empty()||i==a.length()))//ȥ����λ�ո� 
			{
				continue;
			}
			v.push_back(tmp);//���붯̬���� 
		}
		
		for(int i=0;i<v.size();i++)
		{
			if(v[i]=="I"||v[i]=="me")//i,me����you 
			{
				v[i]="you";
			}
			else if(v[i]=="you")
			{
				if(i<2||(v[i-1].length()==0&&(v[i-2]!="can"||v[i-2]!="could")))//���ǰ����ַ�����2����˵���治��can�Ϳո�  ����ǰһ���ַ����ǿո���ǰһ���ַ�������can��could��  ˵��������Ҫ��   isalnum(v[i-1][0])==0
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
	

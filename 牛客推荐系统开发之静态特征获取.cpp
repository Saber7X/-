//#include<bits/stdc++.h>
//using namespace std;
//int main() 
//{
//	long long int n;
//	cin>>n;
//    getchar();
//    map< string , map<char,int> > res;
//	while(n--)
//	{
//		string a,b;
//		cin>>a>>b;
//		bool t=0;
//        for(int i=0;i<a.length();i++)
//        {
//            if(res[a][a[i]]==0)
//            {
//            	if(t==0)
//            	{
//            		cout<<"YES"<<endl;
//					t=1;
//				}
//            	
//            	res[a][a[i]]=1;
//            	
//			}
//		}
//		if(t==0)
//		{
//			cout<<"NO"<<endl;
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long int n;
	cin>>n;
    getchar();
    map< string , int> res;
	while(n--)
	{
		string a,b,c;
		cin>>a>>b;
		c=a+" "+b;
		if(res[c]==0)
		{
			cout<<"YES"<<endl;
			res[c]=1;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}


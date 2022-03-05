//#include<bits/stdc++.h>
//using namespace std;
//struct name{
//	string a;
//	string b;
//}num[1000];
//int main()
//{
//    long long int sum=0;
//	map<string,long long int> res;
//    map<string,long long int> flag;
//    map<string,long long int> flag1;
//    string x,y;
//    cin>>x;
//    y=x;
//    sort(y.begin(),y.end());
//    for(int i=0;i<x.length();i++)
//    {
//    	num[i].a+=x[i];
//    	if(flag[x[i]]!=0)
//    	{
//    		num[i].a+=(flag[x[i]]-'0');
//		}
//		cout<<num[i].a;
//		flag[x[i]]++;
//		
//	}
//    
////    
//    cout<<sum;
//    return 0;
//}
////cin>>b;
////    for(int i=0;i<b.length();i++)
////    {
////    	num[i].s+=b[i];
////	}
////	c=b;
////	sort(c.begin(),c.end());
////	for(int i=0;i<c.length();i++)
////    {
////    	num[i].a+=c[i];
////	}
////    
////    for(long long int i=0;i<a.length();i++)
////    {
////    	if(flag[num[i].s]!=0)
////    	{
////    		num[i].s+=(flag[num[i].s]-'0');
////		}
////        res[num[i].s]=i;
////        flag[num[i].s]++;
////    }
////    
////    for(long long int i=0;i<c.length();i++)
////    {
////    	if(flag1[num[i].a]!=0)
////    	{
////    		num[i].a+=(flag1[num[i].a]-'0');
////		}
////        sum+=abs(res[num[i].a]-i);
////        flag1[num[i].a]++;
////    }

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int  i, j,sum=0;
	char temp;
	for (i = 0; i <a.length(); i++) 
	{
		for (j = 0; j < a.length()-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];  
				a[j + 1] = a[j];
				a[j] = temp;
				sum++;
			}
		 } 
			
	}
	//	cout<<a<<endl;
	cout<<sum;

}

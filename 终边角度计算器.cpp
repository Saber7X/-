//#include<bits/stdc++.h>
//using namespace std;
//int  main()
//{
//	int n;
//	while(cin>>n)
//	{
//		cout<<n*180-45<<endl;
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=1;i<180;i++)
	{
		if(i*14%360==0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}

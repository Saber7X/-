#include<bits/stdc++.h> 
using namespace std;
//******************队列 
const int N=100010;

//在队尾插入元素，在队头弹出元素 
int q[N],tt=-1,hh;

////插入
//q[++t]  = x;
//
////弹出
//hh++; 
//
////判断队列是否非空
//if(hh<=tt) 不是空的 
//else 空的 
//
////取出队头元素
//q[hh] 
//
////取出队尾元素
//q[tt] 
//




int main()
{
	int t;
	cin>>t;
	while(t--) 
	{
		string s;
		cin>>s;
		if(s=="empty")
		{
			if(hh<=tt)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
		if(s=="pop")
		{
			hh++;
		}
		if(s=="query")
		{
			cout<<q[hh]<<endl;
		}
		if(s=="push")
		{
			int n;
			cin>>n;
			q[++tt]=n;
		}
	}
	return 0;
}

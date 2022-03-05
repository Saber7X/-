//给一个回文串，ALICE先手，
//如果是偶数，BOB必胜：ALICE先，所以他不能翻转，只能修改，然后BOB再修改，使字符串又变成一个回文的，直到剩下两个0的时候，ALICE修改，只剩1个0，此时不是回文，然后BOB就翻转，不消耗能量，此时ALICE只能修改掉最后一个0，此时全部都是1，ALICE消耗的能量比BOB多2，所以偶数时BOB必胜 
//如果是奇数（1除外）， ALICE必胜：ALICE操作一次使字符串变成回文(修改中间的0)，此时0为偶数，这样来看，就回到了上一步操作，只是先手变成了BOB，一番操作后，BOB的最终能量比ALICE多1，所以ALICE必胜 
//如果只有一个0，BOB必胜：不必多说 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0;
		string s;
		cin>>n>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				sum++;
			}
		}
		if(sum==1)
		{
			cout<<"BOB"<<endl;
		}
		else if(sum%2==0)
		{
			cout<<"BOB"<<endl;
		}
		else
		{
			cout<<"ALICE"<<endl;
		}
	}
	return 0; 
}

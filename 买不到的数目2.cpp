#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int k=n*m;
	int a=max(n,m);
	//int t=k;
	while(1)
	{
		int t=k;
		while(t%m!=0&&t>a)//����������ܱ�����m����ʱ��һֱ��n֪���ܱ�m������t<=a������ѭ�� 
		{
			t-=n;
		}
		if(t%m!=0&&k%n!=0&&k%m!=0)//t���ܱ�n,m���Ҳ���ܱ�n,m���� 
		{
			printf("%d",k);
			break;
		}
		k--;
	}
	return 0;
}
//��ʽ���� 
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    cout<<(m-1)*(n-1)-1<<endl;
    return 0;
}
*/

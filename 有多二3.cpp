#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0,i,j,k,t;
	double sum=1.0;
	string a;
	cin>>a;
	int n=a.length();
	t=n;
	for(i=0;i<n;i++)
	{
		if(a[i]=='2')
		{
			cnt++;
		}
	}
	
	if((a[n-1]-'0')%2==0) sum*=2.0;
	if(a[0]=='-')
	{
		sum*=1.5;
		//printf("½øÈë¹ýÅÐ¶Ï"); 
		t--;
	 } 
	//printf("%.2lf %d %d",sum,cnt,t);
	sum=sum*(cnt*1.0)/(t*1.0)*100;
	printf("%.2lf",sum);
	printf("%%");
		

	return 0;
}

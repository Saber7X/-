#include<iostream>
using namespace std ;
int main()
{
	int x = 0 ;
	int y = 0 ; 
	int a[200] , b[200] ;
	int n , n1 , n2 ;
	int cnt1=0 , cnt2=0 ;
	scanf("%d %d %d",&n,&n1,&n2) ;
	for(int i=0;i<n1;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n2;i++)
		scanf("%d",&b[i]);	
     for(int i=0;i<n;i++)
     {
        cnt1 ++;
        cnt2 ++;
        if(cnt1==n1+1)
        cnt1=0 ; 
        if(cnt2==n2+1)
        cnt2=0; 
        
	if(a[cnt1] == 0)
	{
		if(b[cnt2] == 1) y++;
		if(b[cnt2] == 2) x++;
		if(b[cnt2] == 3) x++; 
		if(b[cnt2] == 4) y++;
	}
	
	if(a[cnt1] == 1)
	{
		if(b[cnt2] == 0 ) x++;
		if(b[cnt2] == 2 ) y++;
		if(b[cnt2] == 3 ) x++;
		if(b[cnt2] == 4 ) y++;
	}
	if(a[cnt1] == 2 )
	{
		if(b[cnt2] == 0 ) y++;
		if(b[cnt2] == 1 ) x++;
		if(b[cnt2] == 3 ) y++; 
		if(b[cnt2] == 4 ) x++;
	}
	if(a[cnt1] == 3 )
	{
		if(b[cnt2] == 0 ) y++;
		if(b[cnt2] == 1 ) y++;
		if(b[cnt2] == 2 ) x++;
		if(b[cnt2] == 4 ) x++;
	} 
	if(a[cnt1] == 4 )
	{
		if(b[cnt2] == 0 )	x++;
		if(b[cnt2] == 1 )	x++;
		if(b[cnt2] == 2 )	y++;
		if(b[cnt2] == 3 )	y++;
	}	
}
	printf("%d %d",x,y); 
	return 0 ;
}

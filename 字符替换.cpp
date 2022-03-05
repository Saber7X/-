#include<bits/stdc++.h>
using namespace std;
int main() 
{
	 char a[50];
	 int i,j,k=0;
	 char n,m;
	 gets(a);
	 int b=strlen(a);
	 for(i=0;i<b;i++)
	 {
	 	if(a[i]==' ')
	 	{
	 		break;
		 }
	 	k++;
	 }
	 n=a[k+1];
	 m=a[k+3];
	 for(i=0;i<b-4;i++)
	 {
	 	if(a[i]==n)
	 	{
	 		a[i]=m;
		 }
	 }
	 for(i=0;i<b-4;i++)
	 {
	 	printf("%c",a[i]);
	 }
	 return 0;
	 
 } 

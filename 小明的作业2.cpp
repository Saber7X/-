#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int cnt1=0,cnt2=0;//警告，错误 
	int t=-1;//-1:什么都不是，0wa,1aw,2wa连续，3aw连续 
	
	int lena=a.length();
	for(int i=0;i<lena;i++)
	{
		if(a[i]=='w'&&a[i+1]=='a')
		{
			i++;
			if(t==-1||t==1||t==3)
			{
				t=0;
				cnt1++;
			}
			else if(t==0)
			{
				t=2;
				cnt1--;
				cnt2++;
			}
			else if(t==2)
			{
				t=2;
				continue;
			}
		}
		else if((a[i]=='w'&&a[i+1]!='a')||(a[i]=='a'&&a[i+1]!='w')||(a[i]!='w'&&a[i+1]=='a')||(a[i]!='a'&&a[i+1]!='w')||(a[i]!='w'&&a[i+1]!='a'))
		{
			t=-1;
		}
		else if(a[i]=='a'&&a[i+1]=='w')
		{
			i++;
			if(t==-1||t==0||t==2)
			{
				t=1;
				cnt1++;
			}
			else if(t==1)
			{
				t=3;
				cnt1--;
				cnt2++;
			}
			else if(t==3)
			{
				t=3;
				continue;
			}
		}
		
	}
	printf("%d %d",cnt1,cnt2);
	return 0;
}
/*
iawaswapwauawhawdwafwanbiopwanivgbikvblvbwawawawvolyuvgbololvolgbyolgyowagbolgawgboplwawaolgyolwaogblwaygbowawagwabwayawopwawagyowabwaowapjwapcfrtuywawacvujwawawaufttyfuftywawawatifgugbgbyguwawawawayugbigwwwytigwygwgbwyoawawgoghwaogwborgrewabouyhwabyuhowabhnwawauygbawyawuwaoawfcawaaaahwaywauwagwawefwaafmbawklawjiawihnwanhawawawawijwajiofjeriofgjrefjhwaewarwaowagwahwauwaiwarwaiwaqwarwahwaqwawwaowapfweofbwewafwahwaiwaewawwawawawawafwawawawaeiufwepfhnewfwahwajwatwafowawajtokshwawafwaiwahwafwahmgoewawawawafkfjkewnwawafiewhfwawawafjkernhawkrenwawawawafujnrheiowanwakawawawawwanoifewajrwaoawawfweojnwawawawawawawafjkwenawawferkwmpwawawawaforeijawawferhfiueorghwuwafguwegfwaghrwiufgwahweofgowaidwiweaiwwawieyiwe

#include<stdio.h>
int main()
{
    printf("71\n21");
    return 0;
}*/

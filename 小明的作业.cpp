#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int cnta=0,cntb=0;//aw,wa,连续 
	bool t=-1;//如果是aw则变为0，是wa变为一，什么都不是变成-1；aw连续多个变为2；wa连续多个变成3； 
	long long int lena=a.length();
	for(long long int i=0;i<lena;i++)
	{
		if(a[i]=='a'&&a[i+1]=='w')
		{
			i++; 
			if(t==-1||t==1||t==3)//单个aw的情况 
			{
				t=0;
				cnta++; 
				continue;
			}
			 if(t==0)//多个aw 
			{
				t=2; 
				cnta--;
				cntc++;
			}
			 if(t==2)
			{
				continue;
			}
		 } 
		 else if(a[i]!='a'||a[i+1]!='w'||a[i]!='w'||a[i+1]!='a')
		 {
		 	t=-1;
		 }
		 else if(a[i]=='w'&&a[i+1]=='a')
		 {
		 	i++;
		 	if(t==0||t==-1||t==2)
		 	{
		 		t=1;
		 		cntb++;
		 		continue;
			 }
			if(t==1)
			 {
			 	t=3;
			 	cntb--;
			 	cntc++;
			 }
			if(t==3)
			 {
			 	continue;
			 }
		 }
	}
	cout<<cnta<<endl<<cntb<<endl<<cntc; 
	return 0;
 } 
/*
iawaswapwauawhawdwafwanbiopwanivgbikvblvbwawawawvolyuvgbololvolgbyolgyowagbolgawgboplwawaolgyolwaogblwaygbowawagwabwayawopwawagyowabwaowapjwapcfrtuywawacvujwawawaufttyfuftywawawatifgugbgbyguwawawawayugbigwwwytigwygwgbwyoawawgoghwaogwborgrewabouyhwabyuhowabhnwawauygbawyawuwaoawfcawaaaahwaywauwagwawefwaafmbawklawjiawihnwanhawawawawijwajiofjeriofgjrefjhwaewarwaowagwahwauwaiwarwaiwaqwarwahwaqwawwaowapfweofbwewafwahwaiwaewawwawawawawafwawawawaeiufwepfhnewfwahwajwatwafowawajtokshwawafwaiwahwafwahmgoewawawawafkfjkewnwawafiewhfwawawafjkernhawkrenwawawawafujnrheiowanwakawawawawwanoifewajrwaoawawfweojnwawawawawawawafjkwenawawferkwmpwawawawaforeijawawferhfiueorghwuwafguwegfwaghrwiufgwahweofgowaidwiweaiwwawieyiwe
*/

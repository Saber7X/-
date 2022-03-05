#include<bits/stdc++.h>
using namespace std;
vector<int> vec[105];

int main()
{
	int n;
	scanf("%d", &n);
	int team[105];
	int total[105], sum = 0;
	for(int i = 1; i <= n; i ++)
	{
		scanf("%d", &team[i]);
		total[i] = team[i] * 10 ;//每个赛场一共能容纳多少人 
		sum += total[i];//一共有多少人	
	}
	
	int now = 0, u = 0; //u表示最后一个是哪个学校的人 
	while (sum > 0)
	{
		int cnt = 0;
		for(int i = 1; i <= n; i ++)
		{
			if(total[i] != 0) cnt ++;
		}	
		if(cnt == 1) break;
			
		for(int i = 1; i <= n; i++)
		{
			if(total[i] != 0)
			{
				vec[i].push_back(++ now);
				total[i] --;
				sum --;
				u = i; //是为了标记做的人是谁 
			}
		}
	} 
	if(sum != 0)//表示还有一个考场还有位置，并且还剩下一个队伍没有被容纳 
	{
		int pos = 0;
		for(int i = 1; i <= n; i ++)
		{
			if(total[i] != 0)
			{
				pos = i;
				break;
			}	
		}//找到是哪个考场没有坐满了
		  
		if(u == pos)
		{
			now = now + 2;
			for(int i = 1; i <= sum; i ++, now += 2) vec[pos].push_back(now);	
				
		}
		else 
		{
			now = now + 1;
			for(int i = 1; i <= sum; i ++, now += 2) vec[pos].push_back(now); 
		} 			
	}  
	for(int i = 1; i <= n; i ++)
	{
		printf("#%d\n", i);
		int tt = 0;
		for(int j = 0; j < vec[i].size(); j ++)
		{
			tt ++;
			printf("%d%c",vec[i][j]," \n"[tt % 10 == 0]);
		}
	}
	
	return 0;
}

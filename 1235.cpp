#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int a=0;a<=9;a++)
	{
		for(int b=0;b<=9;b++)
		
		{	
			for(int c=0;c<=9;c++)
			{
				for(int d=0;d<=9;d++)
				{
					for(int e=0;e<=9;e++)
					{
						for(int f=0;f<=9;f++)
						{
							for(int g=0;g<=9;g++)
							{
								for(int h=0;h<=9;h++)
								{
									if(a*1000+b*100+c*10+d+e*1000+f*100+g*10+b==e*10000+f*1000+c*100+b*10+h)
									{
										printf("%d %d %d %d\n",e,f,g,b);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

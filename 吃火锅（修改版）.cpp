#include<bits/stdc++.h>
using namespace std;
	
		
	

int main()
{
	string a="chi1 huo3 guo1";
	int lena=a.length();
	string num;
	int cnt=0;//总条数
	int first;//第一条
	int cnting=0;//共有几条吃火锅 
	bool c=0;
	bool t=0;
	while(1)
	{
		getline(cin,num);
		if(num.length()==1&&num[0]=='.')
		{
			break;
		}
		else
		{
			cnt++;
			for(int i=0;i<num.length();i++)
			{
				
				if(num[i]=='c')
				{
					i++;
					if(num[i]=='h')
					{
						i++;
						if(num[i]=='i')
						{
							i++;
							if(num[i]=='1')
							{
								i++;
								if(num[i]==' ')
								{
									i++;
									if(num[i]=='h')
									{
										i++;
										if(num[i]=='u')
										{
											i++;
											if(num[i]=='o')
											{
												i++;
												if(num[i]=='3')
												{
													i++;
													if(num[i]==' ')
													{
														i++;
														
														if(num[i]=='g')
														{
															i++;
														
															if(num[i]=='u')
															{
																i++;
																if(num[i]=='o')
																{
																	i++;
																	if(num[i]=='1')
																	{
																		i++; 
																		t=1;
																		if(cnting==0&&c==0)
																		{
																			c=1;
																			first=cnt;
																			
																		}
																		cnting++;
																	}
																}
															}
														
														}
													}
												}
											
											}
										}
									}
								}
							}
						}
					}
				}
		}
		
		
		}
		
		
		
	}
	
	if(t==1)
	{
		cout<<cnt<<endl<<first<<" "<<cnting; 
	}
	if(t==0)
	{
		cout<<cnt<<endl<<"-_-#";
	}
	return 0;
}	
	
		


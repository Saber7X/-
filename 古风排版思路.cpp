//判断：如果字符串总数/2！=0；列数＋1 //m列数=(len+n行数-1)/n简便写法
//特判末尾空格
if(cnt>len) 
for(i=m-1;i>0;i--)
{
	for(j=0;j<n;j++)
	{
		ans[j][i]=s[cnt];
		cnt++;
	}
}
 

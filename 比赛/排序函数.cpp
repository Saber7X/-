void paixu(int n,int a[200])//数字个数，待排序数组 
{
	for(int i=0;i<n;i++)
	{
		int k=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		//printf("%d ",a[i]);
	}
}
void paixu(int n,int a[])//指针【】传入地址，所以主函数中的数组也改变了 
{
	for(int i=0;i<n;i++)
	{
		int k=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[k])
			{
				k=j;
			}
		}
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		//printf("%d ",a[i]);
	}
}

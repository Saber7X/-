void paixu(int n,int a[200])//���ָ��������������� 
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
void paixu(int n,int a[])//ָ�롾�������ַ�������������е�����Ҳ�ı��� 
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


int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool put(int x){//判断输入日期是否正确 
	int y=x/10000;//年 
	int m=(x/100)%100;//月 
	int d=x%100;//日 
	if(m<0||m>12) return false; 
	if(d==0||m!=2&&d>a[m]) return false;
	if(m==2){//闰年平年判断 
		int nn=y%100&&y%4==0||y%400==0; 
		if(d>a[m]+nn) return false; 
	}
	return true;
}
int main(){
	int d1,d2;
	cin>>d1>>d2;
	int s=0;
	for(int i=1000;i<10000;i++){
		int de=i;
		int x=i;
		for(int j=0;j<4;j++){//把年份翻过来对称后进行判断 
			de=de*10+x%10;
			x=x/10;
		}
		if(d1<=de&&de<=d2&&put(de))//判断回文年是否符合给定条件 
			s++;//记录个数 
	}
	cout<<s<<endl;
	return 0;
}


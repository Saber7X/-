
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool put(int x){//�ж����������Ƿ���ȷ 
	int y=x/10000;//�� 
	int m=(x/100)%100;//�� 
	int d=x%100;//�� 
	if(m<0||m>12) return false; 
	if(d==0||m!=2&&d>a[m]) return false;
	if(m==2){//����ƽ���ж� 
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
		for(int j=0;j<4;j++){//����ݷ������Գƺ�����ж� 
			de=de*10+x%10;
			x=x/10;
		}
		if(d1<=de&&de<=d2&&put(de))//�жϻ������Ƿ���ϸ������� 
			s++;//��¼���� 
	}
	cout<<s<<endl;
	return 0;
}


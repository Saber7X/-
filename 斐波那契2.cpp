//#include<bits/stdc++.h> 
//using namespace std;
//int main()
//{
//	double a,b,c,d,l=-100.0,r=100.0;
//	int cnt=0;
//	
//	while(1)
//	{
//		
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int f(long long int a)
{
    if(a==0)
    {
        return 0;
    }
    // if(a==1)
    // {
    //     return 1;
    // }
    if(a<=1)
    {
        return 1;
    }
    return f(a-1)+f(a-2);
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x;
        cin>>x;
        cout<<"Fib("<<x<<")"<<" = "<<f(x)<<endl;
        
    }
    return 0;
}


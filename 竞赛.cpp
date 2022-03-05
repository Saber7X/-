#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;//第一个元素
    scanf("%d",&n);
    for(int i=0;i<=9;i++)
    {
        cout<<"N["<<i<<"] = "<<n<<endl;
        n*=2;
    }
    
    return 0;
}

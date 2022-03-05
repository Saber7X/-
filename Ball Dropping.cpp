#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, r, h;
    cin >> r >> a >> b >> h;
    double x = a-b;
    double y = a+b;
    double z = a*h;
    double ans =  (sqrt( (x/2) * (x/2) + h*h )*2*r-y*h+a*h)/x;
    if(2*r < b)
    {
        cout << "Drop";
    }
    else
    {
        cout<<"Stuck"<<endl;
        printf("%.12f",ans);
    }
    
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
    	int x;
    	cin>>x;
        v.push_back(x);
    }
    int m;
    cin>>m;
    int c;
    bool t=0;
    for (int i = 0; i < v.size(); i++)
    {
    	if(m>v[i]&&m<v[i+1])
    	{
    		t=1;
    		c=i;
		}
		else if(m>v[i]&&i==v.size()-1)
		{
			v.push_back(m); 
		}
		else if(m<v[i]&&i==0)
		{
			v.insert(v.begin()+0,m);
		}
    }
    if(t==1)
    {
    	v.insert(v.begin()+c+1,m);
	}
    
    for (int i = 0; i < v.size(); i++)
    {
    	cout<<v[i]<<" ";
    }
    return 0;
}

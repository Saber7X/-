#include <iostream>
#include <set>
 
using namespace std;
 
int main()
{
     set<int> s;
     s.insert(1);
     s.insert(2);
     s.insert(6);
     s.insert(6);
     s.insert(6);
     s.insert(7);
     s.insert(8);
     s.insert(9);
//     cout<<*s.lower_bound(2)<<endl;
//     cout<<*s.lower_bound(3)<<endl;
	auto x =  s.upper_bound(6);
	x--;
     cout<< *x <<endl;
     return 0;
}

#include <iostream>
#include <vector>
#define int long long
using namespace std;
 int read() {
    int x=0,f=1;
    char c=getchar();
    while(c<'0'||c>'9'){if(c=='-') f=-1;c=getchar();}
    while(c>='0'&&c<='9') x=x*10+c-'0',c=getchar();
    return x*f;
}
class Solution{
 
public:
    Solution(vector<int>& _nums,const int& _lower,const int& _upper):nums(_nums),lower(_lower),upper(_upper){}
    int coutRangeSum(){
        if(nums.empty())
           return 0;
        vector<int> presum;//前缀和数组，[0,i]区间和
        int pre=0;
        for(auto& num:nums){
            pre+=num;
            presum.emplace_back(pre);
        }
        int result=0;
        vector<int> temp(nums.size());//用于合并两个有序数组的临时数组
        mergesort(presum,lower,upper,temp,0,nums.size()-1,result);
        
        return result;
    }
 
private:
    void mergesort(vector<int>& presum,int& low,int& up,vector<int>& temp,int left,int right,int& result){
        if(left==right){
            if(presum[left]>=low&&presum[left]<=up)
               result++;
            return;
        }
        int mid=left+(right-left)/2;
        mergesort(presum,low,up,temp,left,mid,result);//使得[left,mid]有序
        mergesort(presum,low,up,temp,mid+1,right,result);//使得[mid+1,right]有序
 
        //合并之前先进行统计
        int i=left;//i指向左区间
        int j_left=mid+1;
        int j_right=mid+1;//j_left、j_right指向右区间，i<j，相减得到区间和
        //i固定时，j越大差越大；j固定时，i越大差越小
        while(i<mid+1){
            while(j_left<=right&&presum[j_left]-presum[i]<low)//找到下限位置
                j_left++;
            j_right=j_left;
            while(j_right<=right&&presum[j_right]-presum[i]<=up){//找到上限位置
                j_right++;
                result++; //找到一对
            }
            i++;
        }
 
        //合并
        i=left;
        int j=mid+1,t=0;
        while(i<=mid&&j<=right){
            if(presum[i]<=presum[j])
                temp[t++]=presum[i++];
            else
                temp[t++]=presum[j++];
        }
 
        while(i<=mid)
            temp[t++]=presum[i++];
    
        
        while(j<=right)
            temp[t++]=presum[j++];
 
        t=0,i=left;
        while(i<=right)
            presum[i++]=temp[t++];
    }
private:
    vector<int> nums;
    int lower,upper;
};
 
signed main(){
    int n,k;
    scanf("%lld%lld",&n,&k);
    vector<int> nums;
    nums.reserve(2000010);	
    for(int i=0;i<n;i++)
    {  
        int x;
//        scanf("%lld",&x);
        nums.push_back(x = read());
    }
    Solution solu(nums,k,k);
    cout<<solu.coutRangeSum()<<endl;
    return 0;
}

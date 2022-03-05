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
        vector<int> presum;//ǰ׺�����飬[0,i]�����
        int pre=0;
        for(auto& num:nums){
            pre+=num;
            presum.emplace_back(pre);
        }
        int result=0;
        vector<int> temp(nums.size());//���ںϲ����������������ʱ����
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
        mergesort(presum,low,up,temp,left,mid,result);//ʹ��[left,mid]����
        mergesort(presum,low,up,temp,mid+1,right,result);//ʹ��[mid+1,right]����
 
        //�ϲ�֮ǰ�Ƚ���ͳ��
        int i=left;//iָ��������
        int j_left=mid+1;
        int j_right=mid+1;//j_left��j_rightָ�������䣬i<j������õ������
        //i�̶�ʱ��jԽ���Խ��j�̶�ʱ��iԽ���ԽС
        while(i<mid+1){
            while(j_left<=right&&presum[j_left]-presum[i]<low)//�ҵ�����λ��
                j_left++;
            j_right=j_left;
            while(j_right<=right&&presum[j_right]-presum[i]<=up){//�ҵ�����λ��
                j_right++;
                result++; //�ҵ�һ��
            }
            i++;
        }
 
        //�ϲ�
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

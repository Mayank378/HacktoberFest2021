class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        int n=nums.size();
        
        sort(nums.begin(),nums.end(),greater<int>());
        
        vector<int>::iterator ip;
        ip=std::unique(nums.begin(),nums.end());
        nums.resize(std::distance(nums.begin(), ip));
        
        sort(nums.begin(),nums.end(),greater<int>());
     
        n=nums.size();
        
        for(int i=0;i<n;i++)
            cout<<nums[i]<<" ";
        
       if(n<3)
           return nums[0];
       else
            return nums[2];
        
        
    }
};

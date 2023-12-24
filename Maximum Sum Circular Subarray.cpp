class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
     return nums[0];

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum +=nums[i];
    }

    int cmax=nums[0], max_so_far=nums[0], cmin=nums[0], min_so_far=nums[0];

    //kadane concept
    for(int i=1; i<n; i++)
    {
        cmax = max(cmax + nums[i], nums[i]);
        max_so_far= max(max_so_far, cmax);

        cmin = min(cmin + nums[i], nums[i]);
        min_so_far= min(min_so_far, cmin);
    }

    if(min_so_far == sum)
      return max_so_far;

    return max(max_so_far, sum-min_so_far);

    }
};

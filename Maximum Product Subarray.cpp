class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currPro=1;
        int maxPro=INT_MIN;

        for(int i=0; i<nums.size(); i++)
        {
            currPro *=nums[i];
            maxPro = max(currPro, maxPro);
    
            if(currPro == 0)
                currPro=1;           
        }
        currPro=1; 
        for(int i=nums.size()-1; i>=0; i--)
        {
            currPro *=nums[i];
             maxPro = max(currPro, maxPro);
             
            if(currPro == 0)
                currPro=1;   
        }
        return maxPro;
    }
};

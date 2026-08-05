class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int l=0;
        int sum=0;
        int min=Integer.MAX_VALUE;
        for(int j=0;j<nums.length;j++){
            sum+=nums[j];
            while(sum>=target){
                min=Math.min(min,j-l+1);
                sum-=nums[l];
                l++;
            }
        }
        return min==Integer.MAX_VALUE ? 0:min;
    }
}
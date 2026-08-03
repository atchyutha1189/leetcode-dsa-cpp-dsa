class Solution {
public:
    void sortColors(vector<int>& nums) {
        //tharun
        int c=0;
        int d=0;
        int e=0;
        int n=nums.size();
        int i=0;

        for(int a=0;a<n;a++){
            if(nums[a]==0){
                c++;
            }
            else if(nums[a]==1){
                d++;
            }
            else{
                e++;
            }
        }
        for(int j=0;j<c;j++){
            nums[i++]=0;
        }
        for(int j=0;j<d;j++){
            nums[i++]=1;
        }
        for(int j=0;j<e;j++){
            nums[i++]=2;
        }

    }
};
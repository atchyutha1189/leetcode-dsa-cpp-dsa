class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>fre;
        for(int c:nums){
            fre[c]++;
        
        if(fre[c]>1){
            return true;
        }
        }
        return false;
}
};
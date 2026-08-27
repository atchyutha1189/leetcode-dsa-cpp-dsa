class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;
        unordered_set<int>ans;
        for(int x:nums1){
            st.insert(x);
        }
        for(int l:nums2){
            if(st.count(l)){
                ans.insert(l);
            }
        }
        return vector<int>(ans.begin(),ans.end());

    }
};
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>need;
        unordered_map<char,int>window;
        vector<int>ans;

        for(char c:p){
            need[c]++;
        }
        int l=0;
        for(int r=0;r<s.size();r++){
            window[s[r]]++;

            if(r-l+1>p.size()){
                window[s[l]]--;
               if(window[s[l]]==0){
                window.erase(s[l]);
               }
               l++;
            }

          if(r-l+1==p.size()){
            if(window==need){
                ans.push_back(l);
            }
          }
        }
        return ans;
    }
};
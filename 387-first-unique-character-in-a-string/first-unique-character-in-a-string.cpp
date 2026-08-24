class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>oo;
        for(char c:s){
            oo[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(oo[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
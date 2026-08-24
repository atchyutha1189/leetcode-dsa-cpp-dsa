class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>fre;
        unordered_map<char,int>frr;
        for(char c:s){
            fre[c]++;
        }
        for(char j:t){
            frr[j]++;
        }
        if(fre==frr){
            return true;
        }
        else{
            return false;
        }
    }
};
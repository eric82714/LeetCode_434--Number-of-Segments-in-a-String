class Solution {
public:
    int countSegments(string s) {
        int count = 0, j = 0;
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                if(i != j) count ++;
                j = i + 1;
            } else if(i == s.size()-1) {
                count ++;
            }
        }
        
        return count;
    }
};

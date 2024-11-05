//leetcode 2914

class Solution {
public:
    int minChanges(string s) {
        int count=0;
        int len=s.length();
        for(int i=0;i<len-1;i++)
        {
            if( !(i%2))
            if(s[i]!=s[i+1])
                count++;
        }
        return count;
    }
};
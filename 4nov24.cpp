//leetcode 3163

class Solution {
public:
    string compressedString(string word) {
      string comp = "";
        int i = 0;

        while (i < word.size()) {
            char c = word[i];
            int count = 0;
            while (i < word.size() && word[i] == c && count < 9) {
                i++;
                count++;
            }
            comp += to_string(count) + c;
        }

        return comp;
    }
};

/*

class Solution {
public:
    string compressedString(string word) {
        int count=1;
        char prev=word[0];
        string ans="";
        for(int i=1;i<word.size();i++)
        {
          if(word[i]==prev)
          {
            count++;
          }
          else
          {
            ans+=to_string(count)+prev;
            prev=word[i];
            count=1;
          }
          if(count==9)
          {
            ans+=to_string(count)+prev;
            count=1;
            if(i+1<word.size())
            {
              prev=word[i+1];
              i++;
            }
            
          }
        }
        ans+=to_string(count)+prev;
        return ans;
    }
};
*/
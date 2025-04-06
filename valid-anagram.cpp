class Solution {
public:
    bool isAnagram(string s, string t) {
       if (s.length() != t.length())
       {
            return false;
       }

       int counts[26];
       
       for (int i = 0; i < s.length(); ++i)
       {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
       }

       for (int i = 0; i < 26; i++)
       {
            if (counts[i] != 0)
            {
                return false;
            }
       }
       return true;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l =0;
        int r = 0;
        set<char> m;
        int maxlen=0;

        while(r<n)
        {
            if(m.find(s[r]) == m.end())
            {
                m.insert(s[r]);
                maxlen=max(maxlen , r-l+1);
                r++;
            }
            else
            {
                m.erase(s[l]);
                l++;
            }
        }

        return maxlen;

    }
};
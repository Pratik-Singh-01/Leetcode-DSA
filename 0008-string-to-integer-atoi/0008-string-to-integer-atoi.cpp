class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        long result=0;

        int n= s.size();

        while(i<n && s[i]==' ')
        {
            i++;
        }

        int sign = 1;

        if(i<n && s[i] == '+' || s[i] == '-' )
        {
            if(s[i] == '-')
            {
                sign = -1;
            }

            i++;
        }

        while(i<n && isdigit(s[i]))
        {
            result = 10 * result + (s[i]-'0');

            // 4. Handle overflow
            if (sign * result > INT_MAX) return INT_MAX;
            if (sign * result < INT_MIN) return INT_MIN;


            i++;
        }

        return result*sign;
    }
};
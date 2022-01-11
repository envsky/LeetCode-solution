class Solution {
public:
    int myAtoi(string s) {
        int flag = 1;
        int neg = 0;
        long output = 0;
        for(int i=0; i<s.length(); i++) {
            if(neg == 0 && s[i] == ' ')
                continue;
            else if(neg == 0 && s[i] == '-')
                neg = -1;
            else if(neg == 0 && s[i] == '+')
                neg = 1;
            else if(s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9') {
                if(neg == 0) neg = 1;
                output = output * 10 + (s[i] - '0');
                if(output * neg > numeric_limits<int>::max())
                    return numeric_limits<int>::max();
                else if(output * neg < numeric_limits<int>::min())
                    return numeric_limits<int>::min();
            }
            else break;
        }
        return output * neg;
    }
};
class Solution {
public:
    string originalDigits(string s) {
        int freq[10] = {0};
        string output = "";
        
        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'z')
                freq[0]++;
            else if(s[i] == 'w')
                freq[2]++;
            else if(s[i] == 'u')
                freq[4]++;
            else if(s[i] == 'x')
                freq[6]++;
            else if(s[i] == 'g')
                freq[8]++;
            else if(s[i] == 'o')
                freq[1]++;
            else if(s[i] == 'h')
                freq[3]++;
            else if(s[i] == 'f')
                freq[5]++;
            else if(s[i] == 's')
                freq[7]++;
            else if(s[i] == 'i')
                freq[9]++;
        }
        
        freq[1] -= (freq[0] + freq[2] + freq[4]);
        freq[3] -= freq[8];
        freq[5] -= freq[4];
        freq[7] -= freq[6];
        freq[9] -= (freq[5] + freq[6] + freq[8]);
        
        for(int i=0; i<10; i++) {
            for(int j=0; j<freq[i]; j++) {
                output += to_string(i);
            }
        }
        return output;
    }
};
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if(coordinates[0] % 2 == 0)
            return (coordinates[1]-48) % 2 == 1;
        else
            return (coordinates[1]-48) % 2 == 0;
    }
};
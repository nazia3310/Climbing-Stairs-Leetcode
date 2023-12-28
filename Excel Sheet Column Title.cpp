class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while (columnNumber > 26) {
            columnNumber -= 1;
            res = (char)('A' + columnNumber % 26) + res;
            columnNumber /= 26;
        }
        columnNumber -= 1;
        res = (char)('A' + columnNumber) + res;
        return res;      
    }
};

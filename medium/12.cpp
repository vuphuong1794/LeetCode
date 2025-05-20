class Solution {
public:
    string intToRoman(int num) {
        const vector<pair<int, string>> capGT{
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
            {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, 
            {5, "V"}, {4, "IV"}, {1, "I"}
        };

        string result;

        //tham chiếu đến các giá trị trong cặp capGT tránh bị trùng lặp
        for(const auto& [value, gtri] : capGT ){
            if(num == 0)
                break;

            while(num >= value) {
                num -= value;
                result += gtri;
            }
        }
        return result;
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Duyệt từ chữ số cuối
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // Nếu là 9, đặt thành 0 và tiếp tục
            digits[i] = 0;
        }

        // Nếu toàn bộ là 9 (ví dụ: [9,9,9]), thì kết quả sẽ là [1,0,0,0]
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

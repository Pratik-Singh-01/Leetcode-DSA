class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse from the last digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // If digit is 9, it becomes 0 and carry continues
            digits[i] = 0;
        }

        // If all digits were 9 (e.g., 999 -> 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        const int zeroes = ranges::count(s, '0');
        const int ones = s.length() - zeroes;
        return string(ones - 1, '1') + string(zeroes, '0') + '1';
    }
};
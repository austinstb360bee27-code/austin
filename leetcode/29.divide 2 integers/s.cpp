#include <climits>
#include <cmath>

class Solution {
public:
    int divide(int dividend, int divisor) {
        // 1. Handle Overflow: -2^31 / -1 = 2^31 (which exceeds 2^31 - 1)
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // 2. Determine the sign of the result
        // If one is negative, the result is negative
        bool isNegative = (dividend < 0) ^ (divisor < 0);

        // 3. Work with long and absolute values to avoid overflow during bit shifts
        long long absDividend = std::abs((long long)dividend);
        long long absDivisor = std::abs((long long)divisor);
        long long quotient = 0;

        // 4. Exponential subtraction logic
        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor;
            long long multiple = 1;

            // Double the divisor until it's larger than the dividend
            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;
                multiple <<= 1;
            }

            // Subtract the largest possible multiple
            absDividend -= tempDivisor;
            quotient += multiple;
        }

        return isNegative ? -quotient : quotient;
    }
};

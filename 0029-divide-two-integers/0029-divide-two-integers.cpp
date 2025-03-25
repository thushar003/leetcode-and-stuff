class Solution {
public:
    int divide(int dividend, int divisor) {
        // int counter = 1;
        // if (dividend == 0)
        // {
        //     return 0;
        // }
        // if (divisor > 0)
        // {
        //     while (true)
        //     {
        //         if ((dividend - divisor) < divisor)
        //         {
        //             return counter;
        //         }
        //         dividend = dividend - divisor;
        //         counter++;
        //     }
        // }
        // else
        // {
        //     divisor = abs(divisor);
        //     counter = -1;
        //     while (true)
        //     {
        //         if ((dividend - divisor) < divisor)
        //         {
        //             return (counter);
        //         }
        //         dividend = dividend - divisor;
        //         counter--;
        //     }
        // }

        if (dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }

        //bool isNegative = (dividend < 0 || divisor < 0) ? true : false;
        bool isNegative = (dividend < 0) ^ (divisor < 0);
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);

        unsigned long long quotient = 0;
        while (absDividend >= absDivisor)
        {
            long long tempDivisor = absDivisor;
            int numDivisors = 1;
            while (absDividend >= (tempDivisor << 1))
            {
                tempDivisor <<= 1;
                numDivisors <<= 1;
            }

            absDividend -= tempDivisor;
            quotient += numDivisors;
        }

        return isNegative ? -(quotient) : quotient;
    }
};
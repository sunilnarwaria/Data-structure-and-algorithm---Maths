// interviewbit
 int trailingZeroes(int n) {
        int sum = 0;
        while (n / 5 > 0) {
            sum += (n / 5);
            n /= 5;
        }
        return sum;
    }

// explaination
 The idea is:

The ZERO comes from 10.

The 10 comes from 2 x 5

And we need to account for all the products of 5 and 2, like 4×5 = 20 …

So, if we take all the numbers with 5 as a factor, we will have plenty of even numbers to pair with them to get factors of 10

Example 1:

How many multiples of 5 are there between 1 and 23?

These are 5, 10, 15, and 20, for four multiples of 5. Paired with 2s from the even factors, this makes for four factors of 10, so: 23! has 4 zeros.

Example 2:

How many multiples of 5 are there in the numbers from 1 to 100?

Because 100 ÷ 5 = 20, so, there are twenty multiples of 5 between 1 and 100.

But wait, actually 25 is 5×5, so each multiple of 25 has an extra factor of 5, e.g. 25 × 4 = 100，which introduces an extra of zero.

So, we need to know how many multiples of 25 are there between 1 and 100? Since 100 ÷ 25 = 4, there are four multiples of 25 between 1 and 100.

Finally, we get 20 + 4 = 24 trailing zeroes in 100!

The above examples tell us that we need to care about 5, 5×5, 5×5×5, 5×5×5×5 …

Example 3:

For given number 4617.

5^1 : 4617 ÷ 5 = 923.4, so we get 923 factors of 5

5^2 : 4617 ÷ 25 = 184.68, so we get 184 additional factors of 5

5^3 : 4617 ÷ 125 = 36.936, so we get 36 additional factors of 5

// Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

// Input:
// n=5
// Output:
// 225
// Explanation:
// 13+23+33+43+53=225

long long sumOfSeries(long long n)
{
    if (n == 0)
        return 0;

    return (n * n * n) + sumOfSeries(n - 1);
}

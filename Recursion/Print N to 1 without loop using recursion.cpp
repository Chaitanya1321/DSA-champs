// Print N to 1 without loop using recursion
void printNos(int N)
{
    if (N < 1)
        return;
    cout << N << " ";
    printNos(N - 1);
}
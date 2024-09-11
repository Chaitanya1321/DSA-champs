// Print number 1 to N using recursion.

void printNos(int N)
{
    if (N < 1)
        return;

    printNos(N - 1);

    cout << N << " ";
}

// quick trick in this we are using backtracking in which we bring the last outcome first.
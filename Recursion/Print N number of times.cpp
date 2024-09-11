// Print N number of times the given thing.

void printGfg(int N)
{
    if (N < 1)
        return;
    cout << "GFG" << " ";

    printGfg(N - 1);
}
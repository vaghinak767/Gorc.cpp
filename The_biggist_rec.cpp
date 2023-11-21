#include <iostream>

int Max(int *arr, int size);

int main()
{
    int n = 0;
    std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }
    std::cout << Max(arr, n);
    delete[] arr;
}

int Max(int *arr, int size)
{
    if (0 == size)
    {
        throw std::invalid_argument(" ");
    }
    if (0 == size - 1)
    {
        return arr[0];
    }
    int max = arr[size - 1];
    int max2 = Max(arr, size - 1);
    return max > max2 ? max : max2;
}

#include <iostream>

int index1(const char *arr)
{
    int index = 0;
    int max = 0;
    for (int i = 0; arr[i] != '\0';)
    {
        int count = 0;
        int j = i;
        while (arr[i] != ' ')
        {
            ++count;
            ++i;
        }
        ++i;
        if (count > max)
        {
            index = j;
            max = count;
        }
    }
    return index;
}

int main()
{
    const char *arr = "hello worl";
    int index = index1(arr);
    while(arr[index] != ' ')
    {
        std::cout << arr[index];
        ++index;
    }
}

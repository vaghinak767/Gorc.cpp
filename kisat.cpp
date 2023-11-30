#include <iostream>

char *strstr(const char *, const char *);
char **split(char *, char);
int k = 0;

int main()
{
    int size1 = 1, size2 = 1;
    char *arr = new char[size1];
    char *target = new char[size2];
    int index = 0;
    char ch;
    std::cin >> ch;
    while (std::cin.get(ch) && ch != '\n')
    {

        if (index == size1 - 1)
        {
            char *largerArray = new char[size1 * 2];
            for (int i = 0; i < size1; ++i)
            {
                largerArray[i] = arr[i];
            }
            delete[] arr;
            arr = largerArray;
            size1 *= 2;
        }
        arr[index] = ch;
        ++index;
    }
    // int index1 = 0;
    // char c;
    // while (std::cin.get(c) && c != '\n')
    // {

    //     if (index1 == size2 - 1)
    //     {
    //         char *largerArray = new char[size2 * 2];
    //         for (int i = 0; i < size2; ++i)
    //         {
    //             largerArray[i] = target[i];
    //         }
    //         delete[] target;
    //         target = largerArray;
    //         size1 *= 2;
    //     }
    //     target[index] = c;
    //     ++index1;
    // }
    // char *ptr = strstr(arr, target);
    // std::cout << (void *)ptr << std::endl;
    char delim = ' ';
    std::cout << "Enter delim: ";
    char **arr1 = split(arr, delim);
    for (int i = 0; i <= k; ++i)
    {
        for (int j = 0; arr1[i][j] != '\0'; ++j)
        {
            std::cout << arr1[i][j];
        }
        std::cout << std::endl;
    }
    for (int i = 0; i <= k; ++i)
    {
        delete[] arr1[i];
    }
    delete[] arr1;
    delete[] arr;
    delete[] target;
}

size_t strlen(const char *ptr)
{
    int size = 0;
    while (ptr[size])
    {
        ++size;
    }
    return size;
}

char **split(char *s1, char delim)
{
    int row = 1;
    int column = 1;
    char **arr = new char *[row];
    for (int i = 0; s1[i] != delim; ++i)
    {
        arr[i] = new char[column];
    }
    int count = 0;
    for (int i = 0; s1[i] != '\0'; ++i)
    {
        while (s1[i] != delim)
        {
            if (i == row - 1 || count == column - 1)
            {
                char **arr1;
                if (i == row - 1)
                {
                    arr1 = new char *[row * 2];
                }
                else
                    arr1 = new char *[row];
                for (int j = 0; j < row * 2; ++i)
                {
                    if (count == column - 1)
                    {
                        arr1[i] = new char[column * 2 + 1];
                    }
                    else
                        arr1[i] = new char[column + 1];
                }
                for (int i = 0; i < row; ++i)
                {
                    for (int j = 0; j < column; ++j)
                    {
                        arr1[i][j] = arr[i][j];
                    }
                }
                for (int i = 0; i < row; ++i)
                {
                    delete[] arr[i];
                }
                delete[] arr;
                arr = arr1;
                row *= 2;
                column = column * 2 + 1;
                ++count;
            }
            else
                column = column * 2 + 1;
            ++count;
            arr[k][i] = s1[i];
            ++i;
        }
        arr[k][i] = '\0';
        ++k;
    }
    return arr;
}

char *strstr(const char *arr, const char *target)
{
    int size1 = strlen(arr);
    int size2 = strlen(target);
    if (size1 < size2)
    {
        return (char *)(arr + size1);
    }
    int tmp = 0;
    for (int i = 0; arr[i] != '\0'; ++i)
    {
        if (arr[i] != target[tmp])
        {
            tmp = 0;
        }
        ++tmp;
        if (target[tmp] == '\0' && (arr[i + 1] == ' ' || arr[i + 1] == '\0'))
        {
            return (char *)(arr + (i - tmp));
        }
    }
    return (char *)(arr + size1);
}

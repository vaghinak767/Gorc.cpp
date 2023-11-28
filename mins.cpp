#include <iostream>

int main()
{
    int height = 0;
    int lenght = 0;
    std::cout << "Number of rows: ";
    std::cin >> height;
    std::cout << "Number of columns: ";
    std::cin >> lenght;
    char **arr = new char*[height];
    for(int i = 0; i < height; ++i)
    {
        arr[i] = new char[lenght];
    }
    for(int i = 0; i < height; ++i)
    {
        for(int j = 0; j < lenght; ++j)
        {
            arr[i][j] = '0';
        }
    }
    int desired = 0;
    std::cout << "Enter the count of mins: ";
    std::cin >> desired;
    for(int i = 0; i < height; ++i)
    {
        for(int j = 0; j < lenght; ++j)
        {
            std::cout << 0 << " ";
        }
        std::cout << std::endl;
    }
    int a = 0, b = 0;
    std::cout << "Enter the first digit: ";
    std::cin >> a;
    std::cout << "Enter the second digit: ";
    std::cin >> b;
    int countOfMs = 0;
    while (countOfMs < desired) {
        int randomRow = rand() % height;
        int randomCol = rand() % lenght;
        if (arr[randomRow][randomCol] == '0' && randomRow != a && randomCol != b) {
            arr[randomRow][randomCol] = 'm';
            countOfMs++;
        }
    }
    for(int i = 0; i < height; ++i)
    {
        for(int j = 0; j < lenght; ++j)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for(int i = 0; i < height; ++i)
    {
        delete[]arr[i];
    }
    delete[]arr;
}

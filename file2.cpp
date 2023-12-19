#include <iostream>
#include <fstream>
#include <string>
void code_foo(std::string from, std::string to, int key);
void decode(std::string from, std::string to, int key);

int main()
{
    std::string title;
    std::cout << "Enter the input file name : ";
    std::cin >> title;
    std::string out_title;
    std::cout << "Enter the output file name : ";
    std::cin >> out_title;
    int key;
    std::cout << "Enter the key to : ";
    std::cin >> key;
    bool code;
    std::cout << "Enter 1 to code and 0 to decode : ";
    std::cin >> code;

    switch (code)
    {
        case true:
        {
            code_foo(title, out_title, key);
            break;
        }
        case false:
        {
            decode(title, out_title, key);
            break;
        }
    }

    return 0;
}

void code_foo(std::string from, std::string to, int key)
{
    if(key < 0)
    {
        key %= 26;
        key += 26;
    }
    else
    key %= 26;
    std::ifstream fin(from);
    if (!fin.is_open())
    {
        throw std::exception();
    }

    std::string res;
    while (std::getline(fin, res))
    {
        fin.close();
        std::ofstream fout(to);
        for (int i = 0; i < res.size(); ++i)
        {
            if (res[i] == ' ')
            {
                continue;
            }
            if (res[i] + key > 122 && res[i] >= 'a')
            {
                res[i] = 'a' + res[i] + key - 123;
                continue;
            }
            if (res[i] + key > 90 && res[i] < 'a')
            {
                res[i] = 'A' + res[i] + key - 89;
                continue;
            }
            res[i] += key;
        }
        fout << res << std::endl;
        fout.close();
    }
}

void decode(std::string from, std::string to, int key)
{
    if(key < 0)
    {
        key %= 26;
        key += 26;
    }
    else
    key %= 26;
    std::ifstream fin(from);
    if (!fin.is_open())
    {
        throw std::exception();
    }
    std::string res;
    while (std::getline(fin, res))
    {
        fin.close();
        std::ofstream fout(to);
        for (int i = 0; i < res.size(); ++i)
        {
            if (res[i] == ' ')
            {
                continue;
            }
            if (res[i] - key < 97 && res[i] >= 'a')
            {
                res[i] = res[i] - 'a' - 3 + 123;
                continue;
            }
            if (res[i] - key < 65 && res[i] < 'a')
            {
                res[i] = res[i] - 'A' - 3 + 89;
                continue;
            }
            else
            {
                res[i] -= key;
            }
        }
        fout << res << std::endl;
        fout.close();
    }
}

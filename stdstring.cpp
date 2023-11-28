#include <iostream>

size_t strlen(const char* ptr)
{
    int size = 0;
    while(*ptr)
    {
        ++ptr;
        ++size;
    }
    return size;
}

char* strchr(const char* ptr, const char c)
{
    while(*ptr)
    {
        if(*ptr == c)
        {
            return (char*)ptr; 
        }
        ++ptr;
    }
    return (char*)ptr; 
}

int strcmp(const char* s1, const char* s2){
    int i = 0;
    int j = 0;
    while(s1[i])
    {
        ++i;
    }
    while(s2[j])
    {
        ++j;
    }
    if(i > j)
    {
        return 1;
    }
    if(j < i)
    {
        return -1;
    }
    if(i == j)
    {
        return 0;
    }
    for(int k = 0; k < i; ++i)
    {
        if(s1[k] > s2[k])
        {
            return 1 ;
        }
        else if(s1[k] < s2[k])
        {
            return -1;
        }
    }
    return 0;
}

int main()
{
    int size1 = 0, size2 = 0;
    std::cin >> size1 >> size2;
    char *s1 = new char[size1];
    char *s2 = new char[size2];
    std::cin >> s1;
    std::cin >> s2;
    std::cout << strcmp(s1, s2) << std::endl;
    delete[] s1;
    delete[] s2;
}







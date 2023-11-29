#include <iostream>

size_t strlen(const char* ptr);
char *strchr(const char* ptr, const char c);
int strcmp(const char* s1, const char* s2);
char *strcpy(char *s1, const char *s2);
char *strstr(const char *, const char *);

int main()
{
    int size1 = 1, size2 = 1;
    char *arr = new char[size1];
    char *target = new char[size2];
    int index = 0;
    char ch;
    std::cin >> ch;
    while (std::cin.get(ch) && ch != '\n') {
        
        if (index == size1 - 1) {
            char* largerArray = new char[size1 * 2];
            for (int i = 0; i < size1; ++i) {
                largerArray[i] = arr[i];
            }
            delete[] arr;
            arr = largerArray;
            size1 *= 2;
        }
        arr[index] = ch;
        ++index;
    }
    int index1 = 0;
    char c;
    while (std::cin.get(c) && c != '\n') {
        
        if (index1 == size2 - 1) {
            char* largerArray = new char[size2 * 2];
            for (int i = 0; i < size2; ++i) {
                largerArray[i] = target[i];
            }
            delete[] target;
            target = largerArray;
            size1 *= 2;
        }
        target[index] = c;
        ++index1;
    }
    char *ptr = strstr(arr, target);
    std::cout << strcmp(arr, target) << std::endl;
    std::cout << strlen(arr) << std::endl;
    std::cout << strchr(arr, 'k') << std::endl;
    std::cout << strcpy(arr, target) << std::endl;
    std::cout << (void*)ptr << std::endl;
    delete[]arr;
    delete[]target;
}

size_t strlen(const char* ptr)
{
    int size = 0;
    while(ptr[size])
    {
        ++size;
    }
    return size;
}

char* strchr(const char* ptr, const char c)
{
    while(*ptr && *ptr != c)
    {
        ++ptr;
    }
    return (char*)ptr; 
}

int strcmp(const char* s1, const char* s2)
{
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

char * strcpy(char *s1, const char *s2)
{
    char * it = s1;
    while(*s2)
    {
        *it = *s2;
        ++it;
        ++s2;
    }
    *it = '\0';
    return s1;
}

char *strstr(const char *arr, const char *target)
{
    int size1 = 0, size2 = 0;
    while(arr[size1])
    {
        ++size1;
    }
    while(target[size2])
    {
        ++size2;
    }
    if(size1 < size2)
    {
        return nullptr;
    }
    int tmp = 0;
    int size = 0;
    for(int i = 0; arr[i] != '\0'; ++i)
    {
        if(arr[i] != target[tmp]){
            tmp = 0;
        }
        ++tmp;
        if(target[tmp] == '\0' && (arr[i + 1] == ' ' || arr[i + 1] == '\0')){
            return (char*)(arr + (i - tmp));
        }
    }
    return nullptr;
}

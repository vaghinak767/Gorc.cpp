#include <iostream>

void reset(int &n, int i)
{
    int k = 1;
    if (((n >> i) & 1) == 1)
    {
        k <<= i;
        n ^= k;
    }
    else
        return;
}

void selection(int *arr, int n)
{
  int ind = 0;
  for(int i = 0; i < n ; ++i)
  {
    ind = i;
    for(int j = i + 1; j < n; ++j)
    {
      if(arr[j] < arr[ind])
      {
        ind = j;
      }
    }
    if(ind != i)
    {
      int tmp = arr[ind];
      arr[ind] = arr[i];
      arr[i] = tmp;
    }
  }
}

void insertion(int *arr, int n)
{
    for (int i = 1; i < n; ++i)
    {
        int index = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > index)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = index;
    }
}

void bubble(int *arr, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = false;
            }
        }
        if(flag)
            break;
    }
}

int main()
{
    int n = 0;
    std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }
    int key = 0;
    while (key < 1 || key > 3)
    {
        std::cin >> key;
    }
    if (key == 1)
        insertion(arr, n);
    if (key == 2)
        buble(arr, n);
    if (key == 3)
        selection(arr, n);
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
}

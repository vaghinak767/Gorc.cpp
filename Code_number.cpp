#include <iostream>

void size_32_(char* arr);
int Power_rek(int n, int power);

int main(){
    while(1){
        std::cout << "Please enter the code"<<std::endl;
        for(char arr[32]; std::cin >> arr; ){
            size_32_(arr);
            std::cout << std::endl;
        }
    }
}

int Power_rek(int n, int power){
    if(power == 0){
        return 1;
    }
    if(n == 0 || n == 1){
        return n;
    }
    return n * Power_rek(n, power - 1);
}

void size_32_(char *arr){
    int size = 0;
    int sum = 0;
    while(arr[size]){
        ++size;
    }
    for(int i = size - 1, j = 0; i >= 0; --i, ++j){
        if(arr[i] >= '0' && arr[i] <= '9'){
            sum += (arr[i] - 48) * Power_rek(32, j);
        }
        else if(arr[i] >= 'A' && arr[i] <= 'V')
        {
            sum += (arr[i] - 55) * Power_rek(32, j);
        }
        else {
            std::cout << "Incorrect code";
            return;
        }
    }
    std::cout << "The number is = "<< sum;
}

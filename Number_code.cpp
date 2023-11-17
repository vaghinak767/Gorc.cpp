#include <iostream>
const char *size_32 = "0123456789ABCDEFGHIJKLMNOPQRSTUV";
void s_32(long int n, int size);
int size_(long int);
int main(){
    while(1){
        std::cout << "Please enter the number" << std::endl;
        for(long int n = 0; std::cin >> n; ){
            while(n < 0){
            std::cout << "Please enter positiv number"<< std::endl;
            std::cin >> n;
            }
            int size = size_(n);
            std::cout << "The 32 code is = ";
            if(n == 0)
            std::cout << "2x0";
            else               
                s_32(n, size);
            std::cout << std::endl;
        }
    }
}
int size_(long int n){
    int size = 1;
    while(n/10){
        ++size;
        n /= 10;
    }
    return size;
}
void s_32(long int n, int size){  
    if(n == 0){
        std::cout << "2x";
        for(int i = 0; i < 16 - size; ++i){
            std::cout << 0;
    }
        return; 
    }
    int tmp = n % 32;
    s_32(n / 32, size);
    std::cout << size_32[tmp];
}

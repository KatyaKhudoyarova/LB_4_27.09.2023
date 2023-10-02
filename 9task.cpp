#include <iostream>

int main(){
    int num1, num2, num3, num4;

    std::cout<<"Enter num1:";
    std::cin>>num1;
    std::cout<<"Enter num2:";
    std::cin>>num2;
    std::cout<<"Enter num3:";
    std::cin>>num3;
    std::cout<<"Enter num4:";
    std::cin>>num4;

    if(num1>=1&&num1<=255
    &&num2>=1&&num2<=255&&
    num3>=1&&num3<=255
    &&num4>=1&&num4<=255)
        std::cout<<"Your IP is:"<< num1<<"."<<num2<<"."<<num3<<"."<<num4;
    else {
        std::cout << "Invalid input.Change your numbers, pls<3";
    }

}
















#include <iostream>
using namespace std;
/*
 Дано двузначное число. Найти сумму и произведение его цифр.
 */
int main() {
    int num;
    cout<<"Введите двузначное число: ";
    cin>>num;
    int sum = 0;
    int multipl = 0;
    multipl = (num % 10)*(num/10);

    if(num>10 && num<99){
        while(num!=0){
            sum += num%10;
            num/=10;
        }
        cout<<"Сумма цифр вашего числа : "<<sum<<endl;
        cout<<"Произвидение цифр вашего числа : "<<multipl<<endl;
    }
    else if (num > -99 && num < -9){
        while(num!=0){
            sum += (-num)%10;
            num/=10;
        }
        cout<<"Сумма цифр вашего числа : "<<sum<<endl;
        cout<<"Произвидение цифр вашего числа : "<<multipl<<endl;

    }
    else{
        cout<<"Введите двузначное число!"<<endl;
    }
    return 0;
}

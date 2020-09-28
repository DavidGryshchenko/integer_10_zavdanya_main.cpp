
#include <iostream>
using namespace std;
/*
 Дано трехзначное число. Вывести вначале его последнюю цифру
 (единицы), а затем — его среднюю цифру (десятки).
 */
int main() {
    int num;
    cout<<"Введите трехзначное число: ";
    cin>>num;
    int third =0;
    int second = 0;
    if(num>99 && num<1000){
        third = num / 1 % 10;
        second = num / 10 % 10;
        cout<<"Последяя цифра вашего числа : "<<third<<" "<<"Средняя цифра вашего числа : "<<second<<endl;
    }
    else if (num > -1000 && num < -99){
        third = -num / 1 % 10;
        second = -num / 10 % 10;
        cout<<"Последяя цифра вашего числа : "<<third<<"Средняя цифра вашего числа : "<<second<<endl;
    }
    else{
        cout<<"Введите трехзначное число!"<<endl;
    }
    return 0;
}



#include <iostream>
using namespace std;
/*
 Дано двузначное число. Вывести число, полученное при перестанов-
 ке цифр исходного числа.
 */
int main() {
    int num;
    cout<<"Введите двузначное число: ";
    cin>>num;

    if(num>10 && num<99){
        int  tmp1= num/10;
        int tmp2 = num - (tmp1*10);
        cout<<tmp2<<tmp1<<endl;
    }
    else if (num > -99 && num < -9){
        int  tmp1= -num/10;
        int tmp2 = num + (tmp1*10);
        cout<<tmp2<<tmp1<<endl;
    }
    else{
        cout<<"Введите двузначное число!"<<endl;
    }
    return 0;
}

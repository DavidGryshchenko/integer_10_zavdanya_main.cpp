
#include <iostream>
using namespace std;
/*
 Даны целые положительные числа A и B (A > B). На отрезке длины A
 размещено максимально возможное количество отрезков длины B (без на-
 ложений). Используя операцию взятия остатка от деления нацело, найти
 длину незанятой части отрезка A.
 */
int main() {
    int a;
    int b;
    cout<<"Введите целое положительное число А"<<endl;
    cin>>a;
    cout<<"Введите целое  положительное число B"<<endl;
    cin>>b;
    int division = a % b;
    if(a<0 || b <0){
        cout<<"Введите положительные числа! "<<endl;
    }
    else{
            if(a>b){
                int division = a % b;
                cout<<"Незанятая часть отрезка А при делении на отрезок В : ";
                cout<<division<<endl;
            }
            else{
                int division = b % a;
                cout<<"Незанятая часть отрезка B при делении на отрезок A : ";
                cout<<division<<endl;
            }
    
    }
    
    return 0;
}
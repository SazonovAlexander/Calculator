#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a,b;
    char action;
    cout<<"Первое число: ";
    cin>>a;
    cout<<"Второе число: ";
    cin>>b;
    cout<<"Арифметическая операция: ";
    cin>>action;
    cout<<"Ответ: ";
        switch(action){

            case '+': {
                cout<< a + b;
                break;
            }

            case '-': {
                cout<< a - b;
                break;
            }

            case '*': {
                cout<< a * b;
                break;
            }

            case '/': {
                b==0 ? cout<<"На 0 делить нельзя": cout<< a / b ;
                break;
            }

            default:{
                cout<<"Неправильный знак арифметической операции";
            }

        }

    cin.ignore();
    cin.ignore();
    return 0;
}

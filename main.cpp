/*
Задание 4. Калькулятор опыта
Что нужно сделать:
Напишите программу, которая определяет уровень персонажа в компьютерной игре. 
Пользователь вводит число «очков опыта», а программа вычисляет уровень. 
Новый уровень даётся при достижении 1000, 2500 и 5000 «очков опыта». Начальный уровень равен 1.
Пример

Введите число очков опыта: 2000
-----Считаем-----
Ваш уровень: 2
*/

#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Введите число очков опыта: ";
    cin >> x;
    cout << "-----Считаем-----" << endl;
    if (x < 1000){
        cout << "Ваш уровень: 1";
    }
    else if (x>=1000 && x<2500){
        cout << "Ваш уровень: 2";
    }
    else if (x>=2500 && x<5000){
        cout << "Ваш уровень: 3";
    }
    else if (x>=5000){
        cout << "Ваш уровень: 4";
    }
}
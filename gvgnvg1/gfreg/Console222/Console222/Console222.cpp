// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int sum(int a, int b);
int max(int a, int b);
int z3(int a);
int factorial(int a);
int stepen(int a, int b);
double sred(int a, int b);
void prosto(int a);



int main()
{
    setlocale(LC_ALL, "Russian");
    int n,a,b,c;
    int* d, * f;
    cout << "Введите номер задания: ";
    cin >> n;
    switch (n)
    {
    case 1:
    {
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        cout << "Cумма двух чисел: " << sum(a,b);
    }

    case 2:
    {
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        cout << "Большее из чисел: " << max(a, b);
    }

    case 3:
    {
        cout << "Введите число: ";
        cin >> a;
        cout << z3(a);
    }

    case 4:
    {
        cout << "Введите число: ";
        cin >> a;
        cout << "Факториал введённого числа: " << factorial(a);
    }

    case 5:
    {
        cout << "Введите основание: ";
        cin >> a;
        cout << "Введите степень: ";
        cin >> b;
        cout << "Результат возведения в степень: " << stepen(a, b);
    }

    case 6:
    {

    }

    case 7:
    {
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число: ";
        cin >> b;
        cout << "Cреднее двух чисел: " << sred(a, b);
    }

    case 8: 
    {
        cout << "Введите число: ";
        cin >> a;
        prosto(a);

    }
    }
        
}

int sum(int a, int b)
{
    return a + b;
}

int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}

int z3(int a)
{
    if (a%2==0) return true;
    else return false;
}

int factorial(int a)
{
    if (a > 1)
        return a * factorial(a - 1);
    return 1;
}

int stepen(int a, int b)
{
    int result = 1;

    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}

double sred(int a, int b)
{
    return double((a + b))/2;
}

void prosto(int a)
{
    int k = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            k = 1;
            break;
        }
    }

    if (k == 0) cout << "Число простое";
    else cout << "Число не простое";
}
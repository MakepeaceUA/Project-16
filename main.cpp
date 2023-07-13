#include <iostream>
#include <ctime>
using namespace std;



// Задание 1
//void Calculate(int Number, int Degree) 
//{
//  int res = 1;
//  for (int i = 0;i < Degree;i++) 
//  {
//    res *= Number;
//  }
//  cout << res;
//}

//int main()
//{   
//    setlocale(0,"RUS");
//    int num;
//    int deg;
   
//    cout << "Введите число,которое вы хотите возвести в степень:\n";
//    cin >> num;
//    cout << "Введите степень:\n";
//    cin >> deg;
//    Calculate(num, deg);
//}





// Задание 2
//void Calculate(int F_Number, int S_Number) 
//{
//  int sum = 0;
//  for (int i = F_Number + 1;i < S_Number;i++) 
//  {
//    sum += i;
//  }
//  cout << "Сумма чисел указанного диапазона:" << sum;
//}

//int main()
//{   
//    setlocale(0,"RUS");
//    int num1;
//    int num2;
   
//    cout << "Введите первое число:\n";
//    cin >> num1;
//    cout << "Введите второе число:\n";
//    cin >> num2;
//    Calculate(num1, num2);
//}





// Задание № 3
//void Calculate(int Number)
//{
//    int sum = 0;
//    for (int i = 1; i < Number; i++)
//    {
//        if (Number % i == 0) 
//        {
//            sum += i;
//        }
//        else 
//        {
//            continue;
//        }
            
//    }
//    cout << sum << "\n";
//    if (sum == Number) 
//    {
//        cout << "Число совершенно.";
//    }
//    else
//    {
//        cout << "Число несовершенно.";
//    }
//}

//int main()
//{
//    setlocale(0, "RUS");
//    int num;

//    cout << "Введите число:\n";
//    cin >> num;
//    Calculate(num);
//}







// Задание № 5
//void Calculate(int Number) 
//{
//    int hundred_thousands = Number / 10000 % 1000 / 10;
//    int ten_thousands = Number / 1000 % 100 / 10;
//    int thousands =  Number / 1000 % 10;
//    int hundreds = Number % 1000 / 100;
//    int dozens = Number % 100 / 10;
//    int units = Number % 10;

    
//    int sum_first = hundred_thousands + ten_thousands + thousands;
//    int sum_second = hundreds + dozens + units;
        
//    if (sum_first == sum_second)
//      {
//        cout << "Число счастливое";
//      }
//    else 
//      {
//        cout << "Число не счастливое!";
//      }
//}

//int main()
//{
//    setlocale(0, "RUS");
//    int num;

//    cout << "Введите шестизначное число:\n";
//    cin >> num;
//    Calculate(num);
//}





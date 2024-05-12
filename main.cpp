#include <iostream>
#include <vector>
#include <string>
using namespace std;
void main_func() { 
    int num = 129956;
    int result = 0;
    string str_num = std::to_string(num);
    for (int i = 0; i < 6; i++) {
        result += str_num[i] - 48;
        cout << "итоговая сумма после повторения под номером " << i+1 << " = " << result << endl;
    }
    cout << "Сумма цифр числа 129956 = " << result << endl;
}

void YesOrNo(int a, int b, int c) {
    if ((a > (b + c)) || (b > (a + c)) || (c > (a + b))) {
        cout << "Треугольник со сторонами: " << a << ' ' << b << ' ' << c << endl;
        cout << "Не может существовать" << endl;
    }
    else {
        cout << "Треугольник со сторонами: " << a << ' ' << b << ' ' << c << endl;
        cout << "Может существовать" << endl;
    }
}

void Sub_main_func() {
   
    int a = 34;
    int b = 17;
    int c = 98;
    YesOrNo(a, b, c);
}


int main() {
    setlocale(0, "ru");
    main_func();
    Sub_main_func();
    return 0;
}

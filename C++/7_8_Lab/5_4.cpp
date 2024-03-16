#include <iostream>
#include <cmath>

using namespace std;

int menu(){
    int choice;
    cout << "Choose the function:\n1) 1/(1+x^2);\n2) arccos(sqrt(x));\n"
            "3) ln((1+x)/(1-x));\n4) e^(x-1);\n5) sin(sqrt(x));\n6) arctg(1/x);\n"
            "7) ln^2(x+1/x);\nWrite down the number (1-7): " << endl;
    cin >> choice;
    return choice;
}

double f1(double x){
    return (1/(1+ pow(x, 2)));
}
double f2(double x){
    return acos(sqrt(x));
}
double f3(double x){
    return log((1+x)/(1-x));
}
double f4(double x){
    return exp(x-1);
}
double f5(double x){
    return sin(sqrt(x));
}
double f6(double x){
    return atan(1/x);
}
double f7(double x){
    return pow(log(x + 1/x), 2);
}

double func_res(double func(double x), double x){
    return func(x);
}

int main(){
    int choice = menu();
    int x;
    cout << "Write down the x: " << endl;
    cin >> x;

    double(*function_ptr)(double);
    switch(choice){
        case 1:
            function_ptr = &f1;
            break;
        case 2:
            function_ptr = &f2;
            break;
        case 3:
            function_ptr = &f3;
            break;
        case 4:
            function_ptr = &f4;
            break;
        case 5:
            function_ptr = &f5;
            break;
        case 6:
            function_ptr = &f6;
            break;
        case 7:
            function_ptr = &f7;
            break;
        default:
            cout << "Wrong choice";
            return 1;
    }
    //string type = (type_info(func_res(function_ptr, x)).name());
    double answ = func_res(function_ptr, x);

    if (isnan(answ) or isinf(answ)){
        cout << "Result isn't valiable." << endl;
    } else {
        cout << answ << endl;
    }
}
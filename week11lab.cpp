#include <iostream>
#include <math.h>
using namespace std;


double Add(int x, int y){
    double solution = x + y;
    return solution;
}

double Sub(int a, int b){
    double solution = a - b;
    return solution;
}

double Mul(int c, int d){
    double solution = c * d;
    return solution;
}

double Div(int e, int f){
    double solution = e / f;
    return solution;
}

double Square(int g){
    double solution = sqrt(g);
    return solution;
}

double Pow(int h, int i){
    double solution = pow(h,i);
    return solution;
}



int main() {
Expressions:
int selection;
cout << "Please select a function: " << endl;
cout << "1. Addition" << endl;
cout << "2. Substract" << endl;
cout << "3. Multiply" << endl;
cout << "4. Division" << endl;
cout << "5. Square root" << endl;
cout << "6. Exponent" << endl;
cout << "Any other number to exit" << endl;

cin >> selection;

if(cin.fail() || selection < 1 || selection > 7){
cout << "Goodbye"<< endl;
return 0;
}

if (selection==1){
int x, y;
cout << "Input two numbers you'd like to add together: " << endl;
cin >> x;
cin >> y;
cout << x << " + " << y << " = " << Add(x,y) << endl;
goto Expressions;

}   else if(selection==2){
int a, b;
cout << "Input two numbers you'd like to substract: " << endl;
cin >> a;
cin >> b;
cout << a << " - " << b << " = " << Sub(a,b) << endl;
goto Expressions;

}   else if(selection==3){
int c, d;
cout << "Input two numbers you'd like to multiply: " << endl;
cin >> c;
cin >> d;
cout << c << " x " << d << " = " << Mul(c,d) << endl;
goto Expressions;

}   else if(selection==4){
    int e, f;
cout << "Input two numbers you'd like to divide: " << endl;
cin >> e;
cin >> f;
cout << e << " / " << f << " = " << Div(e,f) << endl;
goto Expressions;

}   else if(selection==5){
int g;
cout << "Input a number to get its square root: " << endl;
cin >> g;
cout << "The quare root of " << g << " = " << Square(g) << endl;
goto Expressions;

}   else {
int h, i;
cout << "Input your base number: " << endl;
cin >> h;
cout << "Input a number to give the base number that power: " << endl;
cin >> i;
cout << h << " to the power of " << i << " = " << Pow(h,i) << endl;
goto Expressions;
}












return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

float func_a(float x, float y){
    return log(pow(y, -sqrt(abs(x)))) * (sin(x) + exp(x + y));
}

float func_b(float x, float y){
    float b;
    if(x / y > 0){
        b = log(x / y) + pow((pow(x, 2) + y), 3);
    } else if(x / y < 0){
        b = log(abs(x / y)) + pow((pow(x, 2) + y), 3);
    } else if(y != 0 && x == 0){
        b = pow((pow(x, 2) + y), 3);
    } else {
        b = 0;
    }
     return b;
}

int main(){
    float x, y;
    cin >> x;
    cin >> y;
    cout << func_a(x, y) << endl;
    cout << func_b(x, y) << endl;
}
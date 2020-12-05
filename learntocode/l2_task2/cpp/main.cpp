#include <iostream>
#include <cmath>

using namespace std;

float func_y(float v){
    if(v > -1)
        return 1./ ((v + 1) * sqrt(pow(v, 2) + 1));
    return (-pow(log(abs(v)), 3) + 3 * pow(log(abs(v)), 2) / 2 + 3 * (log(abs(v))) / 2 + 3./4.) / (2 * pow(v, 2));
}

int main(){
    float a;
    cout.width(4);
    cout << "x";
    cout.width(6);
    cout << "|";
    cout.width(6);
    cout << "y" << endl;
    cout.width(5);
    cout << "__________________" << endl;
    for(float x = -3; x <= 0;x = x + 0.1){
        a = func_y(x);
        cout.setf( ios::fixed, ios::floatfield );
        cout.precision(3);
        cout << x;
        cout.width(4);
        cout << "|";
        cout.width(8);
        cout << a << endl;
    }
}
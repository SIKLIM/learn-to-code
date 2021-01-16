#include <iostream>
#include <cmath>

using namespace std;

void fill_array(double *arr, unsigned int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

double mean(const double *arr, unsigned int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum / n;
}

double std_sample(const double *arr, unsigned int n)
{
    double t, sum = 0;
    t = mean(arr, n);
    for (int i = 0; i < n; i++)
        sum += pow(arr[i] - t, 2.);
    return sqrt(sum / (n - 1));
}

int main()
{
    const unsigned int n = 15;
    double arr[n], t, s;
    fill_array(arr, n);
    t = mean(arr, n);
    s = std_sample(arr, n);
    cout << "Ответ: t = " << t << ", s = " << s << endl;
    return 0;
}
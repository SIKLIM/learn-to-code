#include <iostream>

using namespace std;

void input_array(unsigned short *arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        char h;
        cin >> h;
        arr[i] = h;
    }
}

void print_array(const unsigned short *arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int N = 8;
    unsigned short arr[N];
    input_array(arr, N);
    for (int i = 0; i < N; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            arr[i] |= (1 << 3);
            //code чётные
        }
        else
        {
            arr[i] |= (1 << 2);
            /* code ytчётные */
        }
    }
    print_array(arr, N);
    /*
   char a = 49, v = 60, t = 57;
   cout << a << " " << v << " " << t << endl;
   */
    return 0;
}
#include <iostream>
using namespace std;

int main ()
{
    int i, n;
    float sum = 0, avg;
    float *p;

    cout << "Enter the number of marks: "; cin >> i;

    p = new float [i];

    for(n=0; n<i; n++)
    {
        cout << "Enter mark " << n+1 << ": "; cin >> p[n];
        sum += p[n];
    }

    avg = sum / i;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;

    delete [] p;

    return 0;
}
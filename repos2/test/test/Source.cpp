#include <iostream>

using namespace std;

void bar(int* a)

{

    for (int j = 0; j < 4; j++)

        a[j] = 4 - j;

}

void main()

{

    int* a = new int[4];

    bar(a);

    for (int i = 3; i >= 0; i--)
        cout << a[i] << " ";
}
#include <iostream>

#include <cmath>

using namespace std;

float A, B, C;

char K;

int N;

int main()
{

    while (N != 2)
    {
        cout << "1 = count \n";

        cout << "2 = end the process \n";

        cin >> N;

        switch (N)
        {
        case 1:
        {
            cout << "Firstn ";
            cin >> A;

            cout << "wright Action of two numders ";
            cin >> K;

            cout << "Secondn ";
            cin >> B;

            if (K == '+')
                C = A + B;

            if (K == '-')
                C = A - B;

            if (K == '/')
                C = A / B;

            if (K == '*')
                C = A * B;

           
        }
        case 2:
        {
            break;
        }
        }
        cout << "conclusion =" << C << endl;
    }
}
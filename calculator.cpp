#include <iostream>

using namespace std;

int main() {
    int PickOne, a, b, c, d, e, f, g, h, i, j, k, l;

    cout << "Pick number 1) Addition ,2) Substraction ,3) Multiplication ,4) Divisionn" << endl;
    cin >> PickOne;
    if (PickOne == 1) {
        cout << "enter first integer" << endl;
        cin >> a;

        cout << "enter second integer" << endl;
        cin >> b;

        i = a + b;

        cout << "The answer is = ";
        cout << i;
    }
    else if (PickOne == 2) {
        cout << "enter first integer" << endl;
        cin >> c;

        cout << "enter second integer" << endl;
        cin >> d;

        j = c - d;
        cout << "The answer is = ";
        cout << j;
    }
    else if (PickOne == 3) {
        cout << "enter first integer" << endl;
        cin >> e ;
        cout << "enter second integer" << endl;
        cin >> f;

        k = e * f;

        cout << "The answer is = ";
        cout << k;
    }
    else if (PickOne == 4) {
        cout << "enter first integer integer" << endl;
        cin >> g;

        cout << "enter second integer" << endl;
        cin >> h;

        l = g /h;
        if (h == 0) {
            cout << "The second value is 0, divide by zero" << endl;
            return 0;
        }

        cout << "The answer is = ";
        cout <<l;
    }else{
        cout << "invalid input" << endl;
    }
}


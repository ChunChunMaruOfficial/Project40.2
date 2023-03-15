#include <iostream>
#include <string>

using namespace std;

int main() {
    srand(time(NULL));
    string msg = "";

    const int size = 5;
    int sum = 0;
    int array[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) {
            array[i][j] = rand() % (5 + 5) - 5;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) {
            msg += to_string(array[i][j]) + "  ";
        }
        msg += "\n";
    }

    cout << msg;

    int onepos, twopos;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) {
            if (array[i][j] > 0) {
                onepos = j;
                break;
            }
        }
        for (int j = onepos + 1; j < size; j++) {
            if (array[i][j] > 0) {
                twopos = j;
                break;
            }
        }

        for (int j = onepos + 1; j < twopos; j++) {
            sum += array[i][j];
        }


        onepos = 0;
        twopos = 0;
    }


    cout << "Sum : " << sum << endl;

    return 0;
}
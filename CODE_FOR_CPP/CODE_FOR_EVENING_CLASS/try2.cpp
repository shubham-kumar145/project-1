#include <iostream>
using namespace std;

void input(int array[], int number) {
    for (int i = 0; i < number; i++) {
        cout << "Enter the " << i + 1 << " number: ";
        cin >> array[i];
    }
}

void sort(int array[], int n) {
    for (int i = n - 1; i >= 0; i--) { // Fix loop condition
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main() {
    int number;
    cout << "Enter the total number of elements: ";
    cin >> number;

    int array[number];
    input(array, number);

    bool containsOne = false;
    for (int i = 0; i < number; i++) {
        if (array[i] == 1) {
            containsOne = true;
            break;
        }
    }

    if (containsOne) {
        cout << "HCF of the numbers is: 1" << endl;
        return 0;
    }

    sort(array, number);

    int hcf = array[0];
    for (int i = 1; i < number; i++) {
        int a = hcf;
        int b = array[i];
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        hcf = a;
    }

    cout << "HCF of the numbers is: " << hcf << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    // TASK 1
    int n;
    cout << "Please enter a positive integer greater than 1: ";
    cin >> n;

    int steps = 0;
    string result = to_string(n);

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
        result = result + " -> " + to_string(n);
        steps++;
    }

    cout << result << endl;
    cout << "Total steps: " + to_string(steps) << endl;


    // TASK 2
    int a = 0;
    while (a < 10 || a > 100) {
        cout << "Please enter a number between 10 and 100: ";
        cin >> a;
        if (a < 10 || a > 100) {
            cout << "Invalid value." << endl;
        }
    }

    int fizz_c = 0;
    int buzz_c = 0;
    int fizzbuzz_c = 0;

    for (int i = 1; i <= a; i++) {
        if (i % 7 == 0) {
            cout << i << " is skipped" << endl;
            continue;
        }
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
            fizzbuzz_c++;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
            fizz_c++;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
            buzz_c++;
        } else {
            cout << i << endl;
        }
    }

    cout << "--- Summary ---" << endl;
    cout << "Fizz count : " + to_string(fizz_c) << endl;
    cout << "Buzz count : " + to_string(buzz_c) << endl;
    cout << "FizzBuzz count : " + to_string(fizzbuzz_c) << endl;


    // TASK 3
    int b = 0;
    while (b < 3 || b > 9) {
        cout << "Please enter a number between 3 and 9: ";
        cin >> b;
        if (b < 3 || b > 9) {
            cout << "Invalid value." << endl;
        }
    }

    for (int i = 1; i <= b; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = b - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

}

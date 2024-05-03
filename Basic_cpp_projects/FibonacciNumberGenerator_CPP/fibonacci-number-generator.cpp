#include <iostream>
using namespace std;
void fibonacci(int terms) {
    int n1 = 0, n2 = 1, nextTerm;

    cout << "Fibonacci Series up to " << terms << " terms:" << endl;

    for (int i = 1; i <= terms; ++i) {
        cout << n1 << " ";
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    cout << endl;
}

int main() {
    int numTerms;

    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> numTerms;

    fibonacci(numTerms);

    return 0;
}

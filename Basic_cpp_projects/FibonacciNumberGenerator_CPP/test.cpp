#include <iostream>
using namespace std;

int fibonacci(int terms) {
    int n1 = 0, n2 = 1, nextTerm;

    cout << "Fibonacci Series up to " << terms << " terms:" << endl;

        cout << n1 << " ";
        //cout << n2 << " ";

    for (int i = 1; i < terms; i++) {

        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
        cout<< n1<<" ";
    }
    cout << endl;
    return n1;
}

int main() {
    int numTerms;

    fibonacci(10);
    cout<<endl;
    fibonacci(1);
    cout<<endl;
    fibonacci(15);

    return 0;
}

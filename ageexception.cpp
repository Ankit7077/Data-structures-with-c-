#include<iostream>
using namespace std;
class A {
public:
    int age;
    A() {
        cout << "\nEnter the age: ";
        cin >> age;
    }
};
int main() {
    try {
        A obj;
        if (obj.age < 18)
            throw 0;
    }
    catch (int age) {
        cout << "Age is invalid." << endl;
    }

    return 0;
}

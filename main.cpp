#include <iostream>
#include <cmath>

using namespace std;

//Define the function first
void sayHi(string name, int age);

int main() {

    sayHi("Mike", 12);

    return 0;
}

//Add details later 
void sayHi(string name, int age) {
    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old" << endl;
}
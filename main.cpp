#include <iostream>
#include <cmath>

using namespace std; 

class Student {
   public:
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    bool hasHonors() {
        if (gpa >= 3.5) {
            return true;
        }
        return false;
    }
};

int main() {
    
    Student student1("Mary", "Maths", 4.0);
    Student student2("John", "Jungle Studies", 3.2);

    cout << student2.hasHonors() << endl;

    return 0;
}


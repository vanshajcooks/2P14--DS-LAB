#include <iostream>
using namespace std;

int main() {
    cout << "Hello World\n";
    cout << "Hello World" << endl;
    cout << "Hello\tWorld\n";
    cout << "Hello\aWorld\n";
    cout << "Hello\rWorld\n";
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (9 * celsius / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}






#include <iostream>
using namespace std;

int main() {
    // Standard for loop
    cout << "Standard for loop:" << endl;
    for (int i = 0; i < 5; i++)
        cout << i << " ";
    cout << endl;

    // For loop without initialization
    cout << "For loop without initialization:" << endl;
    int i = 0;
    for (; i < 5; i++)
        cout << i << " ";
    cout << endl;

    // For loop without increment
    cout << "For loop without increment:" << endl;
    i = 0;
    for (; i < 5;) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // While loop
    cout << "While loop:" << endl;
    i = 0;
    while (i < 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Do-while loop
    cout << "Do-while loop:" << endl;
    i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i < 5);
    cout << endl;

    // While loop without initialization inside loop
    cout << "While loop with external increment:" << endl;
    i = 0;
    while (i < 5)
        cout << i++ << " ";
    cout << endl;

    // Do-while loop with external increment
    cout << "Do-while loop with external increment:" << endl;
    i = 0;
    do
        cout << i++ << " ";
    while (i < 5);
    cout << endl;

    return 0;
}





#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void addDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();
        cout << "Enter Degree: ";
        getline(cin, degree);
        cout << "Enter Hostel: ";
        getline(cin, hostel);
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
        cin.ignore();
    }

    void updateDetails() {
        cout << "Enter New Name: ";
        getline(cin, name);
        cout << "Enter New Degree: ";
        getline(cin, degree);
    }

    void updateCGPA() {
        cout << "Enter New CGPA: ";
        cin >> currentCGPA;
        cin.ignore();
    }

    void updateHostel() {
        cout << "Enter New Hostel: ";
        getline(cin, hostel);
    }

    void displayDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.displayDetails();

    cout << "\nUpdating Details...\n";
    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();
    s.displayDetails();

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int arr[3][3] = {
        {10, 22, 32},
        {41, 51, 61},
        {72, 90, 100}
    };

    
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }

   
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << colSum << endl;
    }

    return 0;
}

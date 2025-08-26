#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10,50,40,98,45,98,70,42,47,50};
    int uniqueCount = 0;

    for(int i = 0; i < 10; i++) {
        bool isUnique = true;
        for(int j = 0; j < i; j++) { 
            if(arr[i] == arr[j]) {
                isUnique = false;
                break; 
            }
        }
        if(isUnique)
            uniqueCount++;
    }

    cout << "Total number of unique numbers are: " << uniqueCount << endl;
}

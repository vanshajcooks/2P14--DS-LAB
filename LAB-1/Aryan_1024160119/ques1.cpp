#include <iostream>
using namespace std;

void create(int arr[],int &n){
    cout<<"Enter number of Elements :";
    cin>>n;
    if(n<1 || n>100){
        cout<<"INVALID SIZE \n";
        n=0;
        return;
    }
    cout<<"Enter"<<n<<"Elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void display(int arr[],int n){
    if(n==0){
        cout<<"Array is empty\n";
        return;
    }
    cout<<"Elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insert(int arr[],int &n){
    if(n==100){
        cout<<"Array is full, cannot insert more elements.\n";
        return;
    }
    int pos,val;
    cout<<"Enter position to insert : ";
    cin>>pos;
    if(pos<0 || pos>n){
        cout<<"INVALID POSITION\n";
        return;
    }
    cout<<"Enter the value to be inserted : ";
    cin>>val;
    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    cout << "Element inserted.\n";
}

void deleteelem(int arr[],int &n){
    if(n==0){
        cout<<"Array is empty\n";
        return;
    }
     int pos;
    cout << "Enter position to delete : "; 
    cin >> pos;
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!\n";
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Element deleted.\n";
}

void linearsearch(int arr[],int n){
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    int val;
    cout << "Enter value to search: ";
    cin >> val;
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            cout << "Value found at position: " << i << endl;
            return;
        }
    }
    cout << "Value not found.\n";
}

int main(){
    int arr[100];
    int n=0;
    int choice;
    
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: create(arr,n); break;
            case 2: display(arr,n); break;
            case 3: insert(arr,n); break;
            case 4: deleteelem(arr,n); break;
            case 5: linearsearch(arr,n); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 6);
    
    return 0;
}

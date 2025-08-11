#include <iostream>

using namespace std;

#define MAX_SIZE 100

int arr[MAX_SIZE];
int n = 0;

//CREATE an ARRAY function
void createArray() {
	cout << "Enter number of elements PLEASE: ";
	cin >> n;
	
	
	//Validating ki no of elements invalid toh nhi 
	if(n > MAX_SIZE || n<=0){
		cout << "Invalid Size. Please Try Again. \n";
		n = 0;
		return;
	}
	
	cout << "Enter " << n << " elements please: \n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << "Array created!\n";
}


//Display an ARRAY function
void displayArray() {
	if (n == 0){
		cout << "Array Empty!";
		return;
		}
	
	cout << "Here's your array being displayed: ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
}

//Insert an ARRAY function
void insertElement() {
	if (n >= MAX_SIZE){
		cout << "Array is FULL You cant insert anything!";
		return;
		}
	
	int pos,value;
	cout << "Enter position (1 to " << n+1 << "): ";
	cin >> pos;
	cout << "Please enter your desired value: ";
	cin >> value;
	
	if (pos < 1 || pos > n+1){
		cout << "Invalid Position!\n";
		return;
	}
	
	for (int i = n; i >=pos; i--){
		arr[i] = arr[i-1];
	}
	arr[pos-1]=value; // Inserting my desired value here
	n++;  // Increased my "no of elements" integer
	
	cout << "Inserted element! \n";
}



//Delete an ARRAY function
void deleteElement() {
	if (n == 0){
		cout << "Array Empty! You cannot delete anything\n";
		return;
		}
	
	int pos;
	cout << "Enter position (i.e. 1 to " << n+1 << "): ";
	cin >> pos;
	
	if (pos< 1 || pos > n){
		cout << "Invalid Position! \n";
		return;
	}
	
	for (int i=pos-1; i < n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	
	cout << "Deleted Element at desired Position!\n";
}


// Linear SEARCHing my array
void linSearch() {
	if (n == 0){
		cout << "Array Empty! You cannot search\n";
		return;
		}
	
	int key;
	cout << "Enter value to search: ";
	cin >> key;
	
	for (int i=0; i < n;i++){
		if (arr[i]= key){
			cout << "Element found at position " << i+1 << "\n";
			return;
		}
	}
	
	cout << "Element not FOUND! \n";
}















int main() {
    int choice;

    do {                                       
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;                         

        switch (choice) {                      
            case 1: createArray(); break;
            case 2: displayArray(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: linSearch(); break;
            case 6: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);                    

    return 0;                          
}



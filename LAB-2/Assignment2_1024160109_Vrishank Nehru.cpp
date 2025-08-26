#include <iostream>
#include <cmath>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printStringArray(char str[][50], int n) {
    for (int i = 0; i < n; i++) {
        cout << str[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key)
            return mid;
        
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findMissingLinear(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return total - sum;
}

int findMissingBinary(int arr[], int n) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == mid + 1)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return left + 1;
}

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void stringConcat(char str1[], char str2[]) {
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);
    
    for (int i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }
    str1[len1 + len2] = '\0';
}

void stringReverse(char str[]) {
    int len = stringLength(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void deleteVowels(char str[]) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) return -1;
        if (str1[i] > str2[i]) return 1;
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') return 0;
    return (str1[i] == '\0') ? -1 : 1;
}

void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void sortStrings(char str[][50], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (stringCompare(str[j], str[j + 1]) > 0) {
                char temp[50];
                stringCopy(temp, str[j]);
                stringCopy(str[j], str[j + 1]);
                stringCopy(str[j + 1], temp);
            }
        }
    }
}

void upperToLower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

class DiagonalMatrix {
    int *arr;
    int n;
public:
    DiagonalMatrix(int size) {
        n = size;
        arr = new int[n];
        for (int i = 0; i < n; i++) arr[i] = 0;
    }
    
    void set(int i, int j, int val) {
        if (i == j) arr[i] = val;
    }
    
    int get(int i, int j) {
        if (i == j) return arr[i];
        return 0;
    }
    
    void display() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }
    
    ~DiagonalMatrix() { delete[] arr; }
};

class TriDiagonalMatrix {
    int *arr;
    int n;
public:
    TriDiagonalMatrix(int size) {
        n = size;
        arr = new int[3 * n - 2];
        for (int i = 0; i < 3 * n - 2; i++) arr[i] = 0;
    }
    
    void set(int i, int j, int val) {
        if (abs(i - j) <= 1) {
            if (i == j) arr[i] = val;
            else if (i == j + 1) arr[n + i - 1] = val;
            else if (i == j - 1) arr[2 * n - 1 + i] = val;
        }
    }
    
    int get(int i, int j) {
        if (abs(i - j) > 1) return 0;
        if (i == j) return arr[i];
        if (i == j + 1) return arr[n + i - 1];
        if (i == j - 1) return arr[2 * n - 1 + i];
        return 0;
    }
    
    ~TriDiagonalMatrix() { delete[] arr; }
};

class LowerTriangularMatrix {
    int *arr;
    int n;
public:
    LowerTriangularMatrix(int size) {
        n = size;
        arr = new int[n * (n + 1) / 2];
        for (int i = 0; i < n * (n + 1) / 2; i++) arr[i] = 0;
    }
    
    void set(int i, int j, int val) {
        if (i >= j) arr[i * (i + 1) / 2 + j] = val;
    }
    
    int get(int i, int j) {
        if (i >= j) return arr[i * (i + 1) / 2 + j];
        return 0;
    }
    
    ~LowerTriangularMatrix() { delete[] arr; }
};

class UpperTriangularMatrix {
    int *arr;
    int n;
public:
    UpperTriangularMatrix(int size) {
        n = size;
        arr = new int[n * (n + 1) / 2];
        for (int i = 0; i < n * (n + 1) / 2; i++) arr[i] = 0;
    }
    
    void set(int i, int j, int val) {
        if (i <= j) arr[j * (j + 1) / 2 + i] = val;
    }
    
    int get(int i, int j) {
        if (i <= j) return arr[j * (j + 1) / 2 + i];
        return 0;
    }
    
    ~UpperTriangularMatrix() { delete[] arr; }
};

class SymmetricMatrix {
    int *arr;
    int n;
public:
    SymmetricMatrix(int size) {
        n = size;
        arr = new int[n * (n + 1) / 2];
        for (int i = 0; i < n * (n + 1) / 2; i++) arr[i] = 0;
    }
    
    void set(int i, int j, int val) {
        if (i >= j) arr[i * (i + 1) / 2 + j] = val;
        else arr[j * (j + 1) / 2 + i] = val;
    }
    
    int get(int i, int j) {
        if (i >= j) return arr[i * (i + 1) / 2 + j];
        return arr[j * (j + 1) / 2 + i];
    }
    
    ~SymmetricMatrix() { delete[] arr; }
};

struct SparseElement {
    int row, col, value;
};

class SparseMatrix {
    SparseElement *elements;
    int rows, cols, numElements;
    
public:
    SparseMatrix(int r, int c, int num) {
        rows = r;
        cols = c;
        numElements = num;
        elements = new SparseElement[num];
    }
    
    void setElement(int index, int r, int c, int val) {
        if (index < numElements) {
            elements[index].row = r;
            elements[index].col = c;
            elements[index].value = val;
        }
    }
    
    SparseMatrix transpose() {
        SparseMatrix result(cols, rows, numElements);
        for (int i = 0; i < numElements; i++) {
            result.elements[i].row = elements[i].col;
            result.elements[i].col = elements[i].row;
            result.elements[i].value = elements[i].value;
        }
        return result;
    }
    
    void display() {
        cout << "Row Col Value" << endl;
        for (int i = 0; i < numElements; i++) {
            cout << elements[i].row << "   " << elements[i].col << "   " << elements[i].value << endl;
        }
    }
    
    ~SparseMatrix() { delete[] elements; }
};

int countInversions(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int countDistinctElements(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool isDistinct = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) count++;
    }
    return count;
}

int countPairsWithDifferenceK(int arr[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(arr[i] - arr[j]) == k) {
                count++;
            }
        }
    }
    return count;
}

bool canSplitString(char str[]) {
    int len = stringLength(str);
    
    for (int i = 1; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            char part1[100], part2[100], part3[100];
            
            int k = 0;
            for (int p = 0; p < i; p++) part1[k++] = str[p];
            part1[k] = '\0';
            
            k = 0;
            for (int p = i; p < j; p++) part2[k++] = str[p];
            part2[k] = '\0';
            
            k = 0;
            for (int p = j; p < len; p++) part3[k++] = str[p];
            part3[k] = '\0';
            
            bool found1in2 = false, found1in3 = false;
            int len1 = stringLength(part1);
            int len2 = stringLength(part2);
            int len3 = stringLength(part3);
            
            for (int p = 0; p <= len2 - len1; p++) {
                bool match = true;
                for (int q = 0; q < len1; q++) {
                    if (part2[p + q] != part1[q]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    found1in2 = true;
                    break;
                }
            }
            
            for (int p = 0; p <= len3 - len1; p++) {
                bool match = true;
                for (int q = 0; q < len1; q++) {
                    if (part3[p + q] != part1[q]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    found1in3 = true;
                    break;
                }
            }
            
            if (found1in2 && found1in3) return true;
        }
    }
    return false;
}

bool areAnagrams(char str1[], char str2[]) {
    int len1 = stringLength(str1);
    int len2 = stringLength(str2);
    
    if (len1 != len2) return false;
    
    int freq1[26] = {0}, freq2[26] = {0};
    
    for (int i = 0; i < len1; i++) {
        freq1[str1[i] - 'a']++;
        freq2[str2[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) return false;
    }
    
    return true;
}

void dutchFlagSort(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    
    while (mid <= high) {
        if (arr[mid] == 0) {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

void duplicateZeros(int arr[], int n) {
    int zeroCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) zeroCount++;
    }
    
    int i = n - 1;
    int j = n + zeroCount - 1;
    
    while (i >= 0 && j >= 0) {
        if (j < n) arr[j] = arr[i];
        
        if (arr[i] == 0) {
            j--;
            if (j < n) arr[j] = 0;
        }
        i--;
        j--;
    }
}

int main() {
    cout << "=== UCS301 Data Structures Lab Assignment 2 ===" << endl;
    
    cout << "\n1. Binary Search Implementation:" << endl;
    int sortedArr[] = {2, 5, 8, 12, 16, 23, 38, 56, 67, 78};
    int n1 = 10;
    int key = 23;
    int result = binarySearch(sortedArr, n1, key);
    cout << "Searching for " << key << " in array: ";
    printArray(sortedArr, n1);
    cout << "Found at index: " << result << endl;
    
    cout << "\n2. Bubble Sort Implementation:" << endl;
    int bubbleArr[] = {64, 34, 25, 12, 22, 11, 90};
    int n2 = 7;
    cout << "Before sorting: ";
    printArray(bubbleArr, n2);
    bubbleSort(bubbleArr, n2);
    cout << "After sorting: ";
    printArray(bubbleArr, n2);
    
    cout << "\n3. Finding Missing Number:" << endl;
    int missingArr[] = {1, 2, 4, 5, 6};
    int n3 = 5;
    cout << "Array: ";
    printArray(missingArr, n3);
    cout << "Missing number (Linear): " << findMissingLinear(missingArr, n3) << endl;
    cout << "Missing number (Binary): " << findMissingBinary(missingArr, n3) << endl;
    
    cout << "\n4. String Operations:" << endl;
    char str1[100] = "Hello";
    char str2[100] = " World";
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    stringConcat(str1, str2);
    cout << "After concatenation: " << str1 << endl;
    
    char str3[100] = "Programming";
    cout << "Original string: " << str3 << endl;
    stringReverse(str3);
    cout << "Reversed string: " << str3 << endl;
    
    char str4[100] = "Hello World";
    cout << "Original string: " << str4 << endl;
    deleteVowels(str4);
    cout << "After removing vowels: " << str4 << endl;
    
    char strings[][50] = {"banana", "apple", "cherry", "date"};
    int n4 = 4;
    cout << "Before sorting: ";
    printStringArray(strings, n4);
    sortStrings(strings, n4);
    cout << "After sorting: ";
    printStringArray(strings, n4);
    
    char str5[100] = "HELLO WORLD";
    cout << "Uppercase: " << str5 << endl;
    upperToLower(str5);
    cout << "Lowercase: " << str5 << endl;
    
    cout << "\n5. Efficient Matrix Storage:" << endl;
    DiagonalMatrix dm(4);
    dm.set(0, 0, 5);
    dm.set(1, 1, 8);
    dm.set(2, 2, 3);
    dm.set(3, 3, 6);
    cout << "Diagonal Matrix:" << endl;
    dm.display();
    
    cout << "\n6. Sparse Matrix Operations:" << endl;
    SparseMatrix sm(4, 4, 3);
    sm.setElement(0, 0, 0, 5);
    sm.setElement(1, 1, 2, 8);
    sm.setElement(2, 3, 1, 3);
    cout << "Original Sparse Matrix:" << endl;
    sm.display();
    
    cout << "\n7. Count Inversions:" << endl;
    int invArr[] = {8, 4, 2, 1};
    int n7 = 4;
    cout << "Array: ";
    printArray(invArr, n7);
    cout << "Number of inversions: " << countInversions(invArr, n7) << endl;
    
    cout << "\n8. Count Distinct Elements:" << endl;
    int distArr[] = {4, 3, 2, 4, 9, 2, 4, 1};
    int n8 = 8;
    cout << "Array: ";
    printArray(distArr, n8);
    cout << "Distinct elements: " << countDistinctElements(distArr, n8) << endl;
    
    cout << "\n--- Additional Questions ---" << endl;
    
    cout << "\n1. Count pairs with difference K:" << endl;
    int diffArr[] = {1, 5, 3, 4, 2};
    int n9 = 5, k = 3;
    cout << "Array: ";
    printArray(diffArr, n9);
    cout << "Pairs with difference " << k << ": " << countPairsWithDifferenceK(diffArr, n9, k) << endl;
    
    cout << "\n2. String Split Challenge:" << endl;
    char testStr[] = "abcabc";
    cout << "String: " << testStr << endl;
    cout << "Can split: " << (canSplitString(testStr) ? "Yes" : "No") << endl;
    
    cout << "\n3. String Anagrams:" << endl;
    char anag1[] = "listen";
    char anag2[] = "silent";
    cout << "String 1: " << anag1 << endl;
    cout << "String 2: " << anag2 << endl;
    cout << "Are anagrams: " << (areAnagrams(anag1, anag2) ? "Yes" : "No") << endl;
    
    cout << "\n4. Dutch National Flag Problem:" << endl;
    int flagArr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n10 = 12;
    cout << "Before sorting: ";
    printArray(flagArr, n10);
    dutchFlagSort(flagArr, n10);
    cout << "After sorting: ";
    printArray(flagArr, n10);
    
    cout << "\n5. Duplicate Zeros:" << endl;
    int zeroArr[] = {1, 0, 2, 3, 0, 4, 5, 0};
    int n11 = 8;
    cout << "Before duplicating zeros: ";
    printArray(zeroArr, n11);
    duplicateZeros(zeroArr, n11);
    cout << "After duplicating zeros: ";
    printArray(zeroArr, n11);
    
    return 0;
}

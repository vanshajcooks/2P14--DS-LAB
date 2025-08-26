#include <iostream>
using namespace std;

void createarray(int a[], int &n) {
    cout << "size: ";
    cin >> n;

    cout << "elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void displayarray(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void insertelement(int a[], int &n) {
    int p, v;
    cout << "pos & val: ";
    cin >> p >> v;

    for (int i = n; i > p; i--)
        a[i] = a[i - 1];

    a[p] = v;
    n++;
}

void deleteelement(int a[], int &n) {
    int p;
    cout << "pos: ";
    cin >> p;

    for (int i = p; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;
}

void linearsearch(int a[], int n) {
    int key;
    cout << "key: ";
    cin >> key;

    for (int i = 0; i < n; i++)
        if (a[i] == key) {
            cout << "found at " << i << endl;
            return;
        }
    cout << "not found" << endl;
}

void removeduplicates(int a[], int &n) {
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n;)
            if (a[i] == a[j]) {
                for (int k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;
            } else j++;
}

void reversearray(int a[], int n) {
    for (int i = 0; i < n / 2; i++)
        swap(a[i], a[n - 1 - i]);
}

void sumrowscols() {
    int r, c;
    cin >> r >> c;

    int m[10][10];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];

    for (int i = 0; i < r; i++) {
        int s = 0;
        for (int j = 0; j < c; j++)
            s += m[i][j];
        cout << "row " << i << " sum=" << s << endl;
    }

    for (int j = 0; j < c; j++) {
        int s = 0;
        for (int i = 0; i < r; i++)
            s += m[i][j];
        cout << "col " << j << " sum=" << s << endl;
    }
}

int main() {
    int a[100], n = 0, ch;
    do {
        cout << "1.create 2.display 3.insert 4.delete 5.search 6.exit" << endl;
        cin >> ch;

        if (ch == 1) createarray(a, n);
        else if (ch == 2) displayarray(a, n);
        else if (ch == 3) insertelement(a, n);
        else if (ch == 4) deleteelement(a, n);
        else if (ch == 5) linearsearch(a, n);

    } while (ch != 6);
}

#include <iostream>
#include <vector>
using namespace std;

struct Term {
    int row, col, val;
};

class SparseMatrix {
public:
    int rows, cols;
    vector<Term> terms;

    SparseMatrix(int r, int c) {
        rows = r;
        cols = c;
    }

    void addTerm(int r, int c, int v) {
        if (v != 0) {
            terms.push_back({r, c, v});
        }
    }

    // (a) Transpose
    SparseMatrix transpose() {
        SparseMatrix result(cols, rows);
        for (auto &t : terms) {
            result.addTerm(t.col, t.row, t.val);
        }
        return result;
    }

    // (b) Addition
    SparseMatrix add(SparseMatrix &other) {
        if (rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrix dimensions mismatch");
        }
        SparseMatrix result(rows, cols);
        int i = 0, j = 0;

        while (i < terms.size() && j < other.terms.size()) {
            if (terms[i].row == other.terms[j].row &&
                terms[i].col == other.terms[j].col) {
                int sum = terms[i].val + other.terms[j].val;
                if (sum != 0) result.addTerm(terms[i].row, terms[i].col, sum);
                i++; j++;
            } else if (terms[i].row < other.terms[j].row ||
                      (terms[i].row == other.terms[j].row && terms[i].col < other.terms[j].col)) {
                result.addTerm(terms[i].row, terms[i].col, terms[i].val);
                i++;
            } else {
                result.addTerm(other.terms[j].row, other.terms[j].col, other.terms[j].val);
                j++;
            }
        }
        while (i < terms.size()) result.addTerm(terms[i].row, terms[i].col, terms[i++].val);
        while (j < other.terms.size()) result.addTerm(other.terms[j].row, other.terms[j].col, other.terms[j++].val);

        return result;
    }

    // (c) Multiplication
    SparseMatrix multiply(SparseMatrix &other) {
        if (cols != other.rows) {
            throw invalid_argument("Matrix dimensions not compatible for multiplication");
        }
        SparseMatrix result(rows, other.cols);

        SparseMatrix transB = other.transpose();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                int sum = 0;
                for (auto &a : terms) {
                    if (a.row == i) {
                        for (auto &b : transB.terms) {
                            if (b.row == j && b.col == a.col) {
                                sum += a.val * b.val;
                            }
                        }
                    }
                }
                if (sum != 0) result.addTerm(i, j, sum);
            }
        }
        return result;
    }

    void display() {
        cout << "row col val\n";
        for (auto &t : terms) {
            cout << t.row << "   " << t.col << "   " << t.val << endl;
        }
    }
};


int main() {
    SparseMatrix A(3, 3), B(3, 3);

    // Matrix A
    A.addTerm(0, 2, 5);
    A.addTerm(2, 0, 2);

    // Matrix B
    B.addTerm(0, 0, 3);
    B.addTerm(2, 0, 4);

    cout << "Matrix A (triplet):\n";
    A.display();

    cout << "\nMatrix B (triplet):\n";
    B.display();

    cout << "\nTranspose of A:\n";
    A.transpose().display();

    cout << "\nA + B:\n";
    A.add(B).display();

    cout << "\nA * B:\n";
    A.multiply(B).display();

    return 0;
}

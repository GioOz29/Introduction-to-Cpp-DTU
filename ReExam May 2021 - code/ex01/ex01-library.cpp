#include <iostream>
#include "ex01-library.h"

using namespace std;

// Task 1(a).  Implement this function
Vector **createField(unsigned int m, unsigned int n, Vector v) {
    // Write your code here
    Vector **field = new Vector*[m];
    for(int i=0; i<m; i++){
        field[i] = new Vector[n];
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            field[i][j] = v;
        }
    }
    return field;
}

// Task 1(b).  Implement this function
void displayField(Vector **A, unsigned int m, unsigned int n) {
    // Write your code here
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << "(" << A[i][j].x << "," << A[i][j].y << ")";
            cout << " ";
        }
        cout << endl;
    }
}

// Task 1(c).  Implement this function
void addFields(Vector **A, Vector **B, Vector **C,
               unsigned int m, unsigned int n) {
    // Write your code here
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            C[i][j] = {A[i][j].x + B[i][j].x, A[i][j].y + B[i][j].y};
        }
    }
}

// Task 1(d).  Implement this function
void scaleField(Vector **A, double c,
                unsigned int m, unsigned int n) {
    // Write your code here
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            A[i][j] = {A[i][j].x * c, A[i][j].y * c};
        }
    }
}

// Do not modify
void deleteField(Vector **A, unsigned int nRows) {
    for (unsigned int i = 0; i < nRows; ++i) {
        delete[] A[i];
    }
    delete[] A;
}

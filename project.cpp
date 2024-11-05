#include <iostream>
using namespace std;
int addition(){
    int i,j,rows1,cols1,rows2,cols2;
    cout << "Enter the order of first the matrix (rows,cols) :"; 
    cin >> rows1 >> cols1;
    int arr1[rows1][cols1];
    cout << "\n";
    for (i=0;i<rows1;i++){
        for (j=0;j<cols1;j++){
            cout << "Enter the number for matrix1 :";
            cin >> arr1[i][j];
        }
    }
    cout << "\n";
    cout << "Enter the order of second the matrix (rows,cols) :"; 
    cin >> rows2 >> cols2;
    int arr2[rows2][cols2];
    cout << "\n";
    for (i=0;i<rows2;i++){
        for (j=0;j<cols2;j++){
            cout << "Enter the number for matrix2 :";
            cin >> arr2[i][j];
        }
    }
    if ((rows1 == rows2) && (cols1 == cols2)){
        cout << "Matrix 1 :\n";
        for (i=0;i<rows1;i++){
            for (j=0;j<cols1;j++){
                cout << arr1[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
        cout << "Matrix 2 :\n";
        for (i=0;i<rows2;i++){
            for (j=0;j<cols2;j++){
                cout << arr2[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "Addition of two matrices :\n";
        for (i=0;i<rows1;i++){
            for (j=0;j<cols1;j++){
                cout << arr1[i][j] + arr2[i][j] << "\t";
            }
            cout << "\n";
        }        

    }
    else{
        cout << "Addition not possible." << "\n";
    }
}

int subtraction(){
    int i,j,rows1,cols1,rows2,cols2;
    cout << "Enter the order of first the matrix (rows,cols) :"; 
    cin >> rows1 >> cols1;
    int arr1[rows1][cols1];
    cout << "\n";
    for (i=0;i<rows1;i++){
        for (j=0;j<cols1;j++){
            cout << "Enter the number for matrix1 :";
            cin >> arr1[i][j];
        }
    }
    cout << "\n";
    cout << "Enter the order of second the matrix (rows,cols) :"; 
    cin >> rows2 >> cols2;
    int arr2[rows2][cols2];
    cout << "\n";
    for (i=0;i<rows2;i++){
        for (j=0;j<cols2;j++){
            cout << "Enter the number for matrix2 :";
            cin >> arr2[i][j];
        }
    }
    if ((rows1 == rows2) && (cols1 == cols2)){
        cout << "Matrix 1 :\n";
        for (i=0;i<rows1;i++){
            for (j=0;j<cols1;j++){
                cout << arr1[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
        cout << "Matrix 2 :\n";
        for (i=0;i<rows2;i++){
            for (j=0;j<cols2;j++){
                cout << arr2[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "Subtraction of two matrices :\n";
        for (i=0;i<rows1;i++){
            for (j=0;j<cols1;j++){
                cout << arr1[i][j] - arr2[i][j] << "\t";
            }
            cout << "\n";
        }        

    }
    else{
        cout << "Subtraction not possible." << "\n";
    }
}

int multiplication(){
    int row1, col1, row2, col2, i, j;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> row1 >> col1;
    cout << endl;    
    cout << "Enter rows and columns for the second matrix: ";
    cin >> row2 >> col2;
    cout << endl;
    if (col1 != row2) {
        cout << "Matrix multiplication is not possible." << "\n";
    }
    else{
        int arr1[row1][col1], arr2[row2][col2], res[row1][col2];
        for (int i=0;i<row1;i++) {
            for (int j=0;j<col1;j++) {
                cout << "Enter elements of the first matrix: ";
                cin >> arr1[i][j];
            }
        }
        cout << endl;
        for (int i=0;i<row2;i++) {
            for (int j=0;j<col2;j++) {
                cout << "Enter elements of the second matrix: ";
                cin >> arr2[i][j];
            }
        }
        cout << endl;
        for (int i=0;i<row1;i++) {
            for (int j=0;j<col2;j++) {
                res[i][j] = 0;
            }
        }   
        for (int i=0;i<row1;i++) {
            for (int j=0;j<col2;j++) {
                for (int k=0;k<col1;k++) {
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        cout << "\n";
        cout << "Matrix 1 :\n";
        for (i=0;i<row1;i++){
            for (j=0;j<col1;j++){
                cout << arr1[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
        cout << "Matrix 2 :\n";
        for (i=0;i<row2;i++){
            for (j=0;j<col2;j++){
                cout << arr2[i][j] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";        
        cout << "Resultant matrix: \n";
        for (int i=0;i<row1;i++) {
            for (int j=0;j<col2;j++) {
                cout << res[i][j] << "\t";
            }
            cout << endl;
        }
    }
    
}
int main() {
    char ch = 'y';
    int c;
    while (ch == 'y'){
    cout << "1. Addition of two matrices" << endl << endl;
    cout << "2. Subtraction of two matrices" << endl << endl;
    cout << "3. Multiplication of two matrices" << endl << endl;
    cout << "Enter your choices (1/2/3) :";
    cin >> c;
    cout << endl;
    if (c == 1){
        addition();
    }
    else if (c == 2){
        subtraction();
    }
    else if (c == 3){
        multiplication();
    }
    else{
        cout << "You have entered a wrong input";
    }
    cout << "Do you want to continue the program again(y/n) :";
    cin >> ch;
    }
}
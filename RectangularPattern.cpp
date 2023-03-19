#include <iostream>
using namespace std;
int main() {
   int rows, columns;
   cout << "Enter number of rows: ";
   cin >> rows;
   cout << "Enter number of colums: ";
   cin >> columns;
   for (int i = 0; i < rows; i++) {
       for(int i = 0; i < columns; i++) {
        cout << "*";
    }
    cout << endl;
   }
    
    return 0;

    
}
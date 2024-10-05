//#include <iostream>
//using namespace std;
//
//void deleteRow(int arr[][3], int& rows, int rowToDelete) {
//    if (rowToDelete < 0 || rowToDelete >= rows) {
//        cout << "Invalid row number!" << endl;
//        return;
//    }
//
//    for (int i = rowToDelete; i < rows - 1; i++) {
//        for (int j = 0; j < 3; j++) {
//            arr[i][j] = arr[i + 1][j];
//        }
//    }
//    rows--; 
//}
//
//void printArray(int arr[][3], int rows) {
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << arr[i][j] << '\t';
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int arr[5][3] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9},
//        {10, 11, 12},
//        {13, 14, 15}
//    };
//
//    int rows = 5;
//    int rowToDelete;
//
//    cout << "Original array:" << endl;
//    printArray(arr, rows);
//
//    cout << "Enter row number to delete (0-indexed): ";
//    cin >> rowToDelete;
//
//    deleteRow(arr, rows, rowToDelete);
//
//    cout << "Array after deletion:" << endl;
//    printArray(arr, rows);
//
//    return 0;
//}
//#2
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "How many people? ";
//    cin >> n;
//    cin.ignore();
//
//    string* phoneBook = new string[n * 2];
//
//    for (int i = 0; i < n; ++i) {
//        cout << "Enter name: ";
//        getline(cin, phoneBook[i * 2]);
//        cout << "Enter phone: ";
//        getline(cin, phoneBook[i * 2 + 1]);
//    }
//
//    string search;
//    cout << "Enter name to search: ";
//    getline(cin, search);
//    for (int i = 0; i < n; ++i) {
//        if (phoneBook[i * 2] == search) {
//            cout << "Name: " << phoneBook[i * 2] << ", Phone: " << phoneBook[i * 2 + 1] << endl;
//            break;
//        }
//    }
//
//    cout << "Enter phone to search: ";
//    getline(cin, search);
//    for (int i = 0; i < n; ++i) {
//        if (phoneBook[i * 2 + 1] == search) {
//            cout << "Name: " << phoneBook[i * 2] << ", Phone: " << phoneBook[i * 2 + 1] << endl;
//            break;
//        }
//    }
//
//    cout << "Enter name to change phone: ";
//    getline(cin, search);
//    for (int i = 0; i < n; ++i) {
//        if (phoneBook[i * 2] == search) {
//            cout << "New phone: ";
//            getline(cin, phoneBook[i * 2 + 1]);
//            break;
//        }
//    }
//
//    delete[] phoneBook;
//    return 0;
//}

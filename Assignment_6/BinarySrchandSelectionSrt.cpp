/*
*Author: Luis Roldan
*created on June 2, 2026
*Purpose: Binary search
*/

#include <iostream> //input output lib
using namespace std;

//prototypes
void filAry(int [], int);
void prntAry(int [], int, int);
void selSrt(int [], int);
int binSrch(int [], int, int, int&);

//main f(x)
int main(int argc, char** argv){
    //vatriables
    const int SIZE = 100;
    int array[SIZE];
    int indx, val;

    //nitialization
    filAry(array, SIZE);
    
    //sorting
    selSrt(array, SIZE);

    //display
    prntAry(array, SIZE, 10);
    cout << "Input the value to find in the array\n";
    cin >> val;
    if (binSrch(array, SIZE, val, indx)){
        cout << val << " was found at indx = " << indx << endl;
    }

    return 0;
}
void filAry(int a[], int n){
    for (int i = 0; i < n; i++){
        int nm;
        cin >> nm;
        a[i] = nm;
    }
}
void selSrt(int a[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if (a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void prntAry(int a[], int n, int perline){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
        if (i%perline == (perline -1)){
            cout << endl;
        }
    }
    cout << endl;
}
int binSrch(int a[], int n, int val, int &indx){
    int beg = 0,
    end = (n-1); 
    do {
        int mid = (beg + end) / 2;
        if (a[mid] == val){
            indx = mid;
            return indx;
        } else if (val > a[mid]){
            beg = mid  + 1;
        } else {
            end = mid - 1;  }
    }while (end >= beg);
    return -1;
}

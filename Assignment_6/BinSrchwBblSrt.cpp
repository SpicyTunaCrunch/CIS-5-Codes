/*
*File: Problem 7
*Author: Luis Roldan
*created on June 2, 2026
*Purpose: Binary search
*/

//sys lib
#include <iostream> //input output lib
using namespace std;

//prototypes
void filAry(int [], int);
void prntAry(int [], int, int);
void bblSrt(int [], int);
int binSrch(int [], int, int, int &);

//main f(x)
int main(int argc, char** argv){
    //variables
    const int SIZE = 100;
    int array[SIZE];
    int indx, val;

    //initialization
    filAry(array, SIZE);

    //sort
    bblSrt(array, SIZE);

    //display
    prntAry(array, SIZE, 10);
    cout << "Input the value to find in the array\n";
    cin >> val;
    if (binSrch(array, SIZE, val, indx)){
        cout << val << " was found at indx = " << indx << endl;
    }


}
//function defs
void filAry(int a[], int n){
    for (int i = 0; i < n; i++){
        int nm;
        cin >> nm;
        a[i] = nm;
    }
}
void bblSrt( int a[], int n){
    bool swap;
    do{
        swap = false; 
        for (int i =0; i < n-1; i++){
            if (a[i] > a[i + 1]){
                int t = a[i];
                a[i] = a[i +1 ];
                a[i + 1] = t;
                swap = true;
            }
        }
        n--;
    }while (swap);
}
void prntAry(int a[], int n, int perline){
    for (int i = 0 ; i < n; i++){
        cout << a[i] << " ";
        if (i%perline == (perline -1)){
            cout << endl;
        }
    }
    cout << endl;
}
int binSrch(int a[], int n, int val, int &indx){
    int b = 0,
    e  = (n-1);
    do {
        int m = (b + e) /2;
        if (a[m] == val){
            indx = m;
            return indx;
        } else if (val > a[m]){
            b = m + 1;
        }else {
            e = m -1;
        }
    }while (e >=b);
    return  -1;
}
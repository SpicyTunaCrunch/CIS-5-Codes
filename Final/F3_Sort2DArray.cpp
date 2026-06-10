/*
*File: Final Question 3
*Authro: Luis Roldan
*Created on June9, 2026
*Purpose: Sort using a 2-Dimension Arr ay of characters
*/

//sys libs
#include <iostream> //in/out lib
#include <cstring> //strlen(), strcmp(), strcpy()
using namespace std;

//Global Constants
const int COLMAX = 80;  //Only 20 reqiored, and 1 for null terminator

//prototypes
int read (char [][COLMAX], int &); // output row and columns deteced from input
void sort(char[][COLMAX], int, int);
void print(const char[][COLMAX], int, int);

//main f(x)
int main (int argc, char** argv){
    //Variables
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected

    //Input the size of the array you are sorting
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;

    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);

    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }else{
        if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}
int read(char a[][COLMAX], int &r){
    int maxCol = 0;
    for (int i =0; i< r; i++){
        cin >> a[i];
        int len = strlen(a[i]);
        if(len > maxCol){
            maxCol = len;
        }
    }
    return maxCol;
}
void sort(char a[][COLMAX], int r, int c){
    char t[COLMAX];
    for (int i = 0; i < r - 1; i++){
        for (int j = i + 1; j < r; j++){
            if(strcmp(a[i], a[j]) > 0){
                strcpy(t, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], t);
            }
        }
    }
}
void print(const char a[][COLMAX], int r, int c){
    for (int i = 0; i < r; i++){
        cout << a[i] << endl;
    }
}


/*
input:
3↵
3↵
678↵
567↵
456↵

Expected output:
Read·in·a·2·dimensional·array·of·characters·and·sort·by·Row↵
Input·the·number·of·rows·<=·20↵
Input·the·maximum·number·of·columns·<=20↵
Now·input·the·array.↵
The·Sorted·Array↵
456↵
567↵
678↵
*/
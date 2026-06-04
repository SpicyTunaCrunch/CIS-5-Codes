/*
	Author:  Dr. Mark E. Lehr
	Date:    May 28th, 2026
	Purpose: Dynamic Memory Tests
*/

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>
#include <ctime>
using namespace std; 

//User Libraries

//Global Constants - Scientific/Physics/Chemistry/Conversions Higher Dimensions

//Function Prototypes
long long unsigned int *filAry(long long unsigned int);

//Execution Begins Here
int main(int argv,char **argc){
	//Set the Random Number Seed
	srand(static_cast<unsigned int>(time(0)));
	
	//Declare Variables
	long long unsigned int size=19999999999;
	long long unsigned int *array;
	array=filAry(size);
	
	//Initialize Variables
	cout<<"Array Size Allocated "<<size<<endl;
	cout<<"Input a integer value"<<endl;
	int dummy;
	cin>>dummy;
	
	//Mapping Input to Output
	
	//Display the Results

	//De-allocate Memory
	delete []array;
	
	//Exit Stage Right
	return 0;
}

long long unsigned int *filAry(long long unsigned int size){
	long long unsigned int *array=new  long long unsigned int[size];
	for(int i=0;i<size;i++){
		array[i]=rand();
	}
	return array;
}
/*
*Author: Luis Roldan
*Date: June 2, 2026
*Purpose: Class Implmentation of mark Sort DB
*/

// System Libraries
#include <iostream> //Input/Output Libraries
#include <cstdlib>  //Randome Function
#include <ctime>    // time function
using namespace std; //STD Name-space where Library is complied

#ifndef dbArray_h
#define dbArray_h

class Array{
        public: 
        int size; //Size of Dynamic Arrays
        int *data; //Data Array
        int *indx; //Array index
};

#endif
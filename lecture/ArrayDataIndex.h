/*
*Author: Luis Roldan
*Created on June 2, 2026
*Puropose: Structure Specification
*/

#ifndef Array_h //has this already been defined?
#define Array_h //if it has not been defined, it will go ahead and define it

const int SIZE = 1000;
struct Array{       
        int size; //Size of dynamic array
        int *data; //Data Array
        int *indx;//Sorted Index Array
};

#endif
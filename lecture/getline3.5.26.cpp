/* Formating Output Example */

//sysLibraries
#include <iostream> //Input-output Library
#include <cstring> //Old C String Library
#include <string> //new OOP Library
#include <iomanip> //Format Lirbary 
#include <cstdlib> //Ramdom Library 
#include <ctime> //Time Library

//Entity Organizer
using namespace std;

int main (int argv,char **argc)
{
//Setting Random # Seed
srand(static_cast<unsigned int>(time(0)));
    //strand = set random number seed
    //then we static cast something to sifferent data type(into unsigned int)
    //time function returns the present time, (the miliseconds times 1920?)

//varibles
int var1;
float var2;
const int SIZE=20;
char fName[SIZE]; //Old style C
string sName;//New style C++

//Initialize Variables
var1=rand()%90+10;//will give me a random digit from 10-99
var2=var1;//promoting var1 from int to a float
strcpy(fName,"John"); //old style string
sName="doe"; //new style string

//Initialize by inputt the values
            //Demos that values can be chaged
cout<<"Read in the value of var1"<<endl;
cin>>var1; //if this is put in, it will only output the input from user and not whats in Display Results when..(didnt hear the rest)

cout<<"Read intthe name for fNAme" <<endl;
cin.ignore();//clears out buffer MUST BE INPPUTED BEFORE THE 'cin.getline' need to put one before every 'cin.getline' specially when jumping between it and cin
cin.getline(fName,SIZE); //will not read fname because of buffer, will have to do cin.ignore()   
        //'getline' allows for multiple words including spaces
cout<<"Read in the value for var2"<<endl;
cin>>var2;

cout<<"Reads in the ame fo rName"<<endl;
cin>>sName;
/*cin.ignore();*/    
/*getline(cin,sName) alt for cin (DONOT FOREGET A 'cin.ignore()')*/


//Display results
cout<<fixed<<setprecision(2)<<showpoint;//show (2) decimal points (all in iomanip library)
        //showpoint forces output stream to display the decimal point(even when its a whole number)
cout<<setw(10)<<var1<<endl;
        //setw = setting width
cout<<setw(10)<<var2<<endl;
cout <<setw(10)<<fName<<endl;
cout <<setw(10)<<sName<<endl;


//exit stage right
return 0;
}
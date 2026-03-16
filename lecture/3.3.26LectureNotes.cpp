/* inclass problem 18 practice from gaddis
    soft drink survey
    cust = 16500
    15% = 1 or more energy drink
    58% of 15% = cirtus*/

    #include <iostream>

    using namespace std;

    int main(int argv, char ** argc)
    {
        
        //Declare Variables
        unsigned short cust, cDrnkrs, eDrnkrs;
        unsigned char eDrkN, eDrkD, cDrkN, cDrkD;

        //Initialize Variables
        cust = 16500; //#Customers
        eDrkN =3;//15%
        eDrkD=20;
        cDrkN=29;//58%
        cDrkD=50;
        
        //Mapping Input and Output
        eDrnkrs =cust*eDrkN/eDrkD;
        cDrnkrs=cust*eDrkN/eDrkD*cDrkN/cDrkD;

        //display results
        cout <<"Nuumber of Energy Drinkers = " << eDrnkrs <<endl;
        cout << "NUmber of Citrus Drinkers = " << cDrnkrs <<endl;

        return 0;
    }
//THis shows we can use differnet ways to get the answer, using char is one way nut he wants us to use floats 
//Word of the day for lecture is : Static Casting
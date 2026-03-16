/*          
    Author: Luis Roldan
    Write a programthat prints out "C S !" in large letters
    insdie a border of *s followed by blank lines then the 
    message 'Cpmputer Science is Cool Stuff!!' */ 

    //preprocessor
    #include <iostream>

    //Entity Organizer
    using namespace std;

    //main function
    int main ()
    {
    cout <<"***********************************************************\n\n";
    cout <<"            CCC               SSSSS                  !!     \n";
    cout <<"           C   C             S     S                 !!     \n";
    cout <<"          C                 S                        !!     \n";
    cout <<"          C                  SSSSS                   !!     \n";
    cout <<"          C                       S                  !!     \n";
    cout <<"           C   C             S     S                 !!     \n";
    cout <<"            CCC               SSSSS                  **    \n\n";
    cout <<"***********************************************************\n";
    cout <<"         Computer Science is Cool Stuff!!!" << endl;
    return 0;
}
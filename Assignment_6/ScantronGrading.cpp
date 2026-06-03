/*
*File: Problem 5
*Author: Luis Roldan
*Created on May 29th, 2026
*Purpose: Compare and grade the answers when compared to a key, like a scantron
*/

//sys libraries
#include <iostream> //input-output library
#include <string.h> //string libray
#include <fstream> //File in-out library
using namespace std; //Entity organizer

//protortpes
void print(const string &);
void read(const char [], string &);
int compare(const string &, const string &, string &);

//main f(x)
int main(int argc, char** argv){
    //variables
    string
    key, answers, score;
    char 
    fileKey[] = "key.dat",
    fileAns[] = "answer.dat";
    float pRight; 
    
    //initialization
    read(fileKey, key);
    read(fileAns, answers);

    //score the exam
    pRight = compare(key, answers, score);

    //display resutls
    cout<<"Key     ";print(key);
    cout<<"Answers ";print(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/score.size()*100<<"%"<<endl;

    return 0;
}
void read(const char file[], string &data)
{
    ifstream in(file);
    if (in){
        cin >> data;
    }
    in.close();
}
int compare(const string &key, const string &answers, string &score)
{
    int crct = 0;
    for (int i = 0; i < key.size(); i++){
        if (key[i] == answers[i]){
            score += 'C';
            crct++;
        } else {
            score += 'W';
        }
    }
    return crct;
}
void print(const string &str)
{
    for (int i = 0; i < str.size(); i++){
        cout << str[i] << ' ';
    }
    cout << endl;
}
/*
Input:
Key·····A·B·C·D·A·B·C·D·A·B·C·C·A·B·C·D·A·B·C·D·↵
Answers·A·A·C·A·A·B·C·D·A·B·C·D·A·B·B·D·A·B·C·D·↵

expected output:
C/W·····C·W·C·W·C·C·C·C·C·C·C·W·C·C·W·C·C·C·C·C·↵
Percentage·Correct·=·80%↵
*/
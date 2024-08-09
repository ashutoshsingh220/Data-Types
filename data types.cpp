//program to implement and use data types.
// ASHUTOSH SINGH
// 23070123033

#include<iostream>
using namespace std;

int main()
{
    int myIntVar ;
    float myFloatVar;
    char myCharVar;
    double myDoubleVar;
    string myStringVar;
    bool myBoolVar;
    cout<<"Enter an integer:";
    cin>>myIntVar;
    cout<<"Enter an float: ";
    cin>>myFloatVar;
    cout<<"Enter an char: ";
    cin>>myCharVar;
    cout<<"Enter an double: ";
    cin>>myDoubleVar;
    cout<<"Enter an string: ";
    cin>>myStringVar;
    cout<<"Enter an bool: ";
    cin>>myBoolVar;
    cout<<"int is :"<<myIntVar<<endl<<"size of integer is "<<sizeof(myIntVar)<<endl;
    cout<<"float is :"<<myFloatVar<<endl<<"size of float is "<<sizeof(myFloatVar)<<endl;
    cout<<"char is :"<<myCharVar<<endl<<"size of character is "<<sizeof(myCharVar)<<endl;
    cout<<"double is :"<<myDoubleVar<<endl<<"size of double is "<<sizeof(myDoubleVar)<<endl;
    cout<<"string is :"<<myStringVar<<endl<<"size of string is "<<sizeof(myStringVar)<<endl;
    cout<<"bool is :"<<myBoolVar<<endl<<"size of bool is "<<sizeof(myBoolVar)<<endl;
}

// output
/*Enter an integer:4
Enter an float: 35.1
Enter an char: a
Enter an double: 14.2004
Enter an string: ashu
Enter an bool: true
int is :4
size of integer is 4
float is :35.1
size of float is 4
char is :a
size of character is 1
double is :14.2004
size of double is 8
string is :ashu
size of string is 24
bool is :0
size of bool is 1*/

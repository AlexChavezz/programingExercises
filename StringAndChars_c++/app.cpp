#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    /*
        Determine length of a string variable
        When we use a string variable we can use length() or size() to determine the length.    
        Example..
    */

    string name = "Alexiss";
    cout<<"Your name size is: "<<name.size()<<endl;
    cout<<"Your name size is: "<<name.length()<<endl;

    /*
        But when you use a type char you need use sizeof( variableName )
        Example...
    */
    return 0;
}
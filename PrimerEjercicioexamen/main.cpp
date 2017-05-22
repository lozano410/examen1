#include <iostream>
#include<string.h>
#include<stdlib.h>


using namespace std;

int main()
{
    char cade1[25];
    char cade2[25];

    cout<<"Ingrese cadena numero 1: "<<endl;
    cin.getline(cade1,25);
    cout<<endl;


    cout<<"Ingrese cadena numero 2: "<<endl;
    cin.getline(cade2,25);
    cout<<endl;



    for(int m = 0; cade1[m]; m++)
    {
        cade1[m]=tolower(cade1[m]);
    }

    for(int m = 0; cade2[m]; m++)
    {
        cade2[m]=tolower(cade2[m]);
    }

    if(strcmp(cade1,cade2)!=0)
        cout<<"FALSE"<<endl;
    else
        cout<<"TRUE"<<endl;




    return 0;
}


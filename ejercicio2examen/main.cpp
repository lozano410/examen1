#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

int mist( const char * );

int main()
{
    char candenas[ 80 ];

 cout << "Escriba una cadena: ";
 cin >> candenas;
 cout << mist( candenas ) << endl;
 return 0;
}
int mist( const char *s )
 {
int x;

 for ( x = 0; *s != '\0'; s++ )
 x++;

 return x;
 }







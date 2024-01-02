#include <stdio.h>
int main()
{
    // m es una variable de tipo puntero
    char *m,varChar;
    varChar = 'A';
    m= &varChar;
    printf("%c %x",varChar,m);
    return 0;
}

#include <stdio.h>
int main()
{
    // m es una variable de tipo puntero
    char *m,varChar;
    varChar = 'A';
    m= &varChar;
    printf("%c %x \n",varChar,m);
    int variableEnt, *num;
    variableEnt=500;
    num= &variableEnt;
    printf("%d %x",variableEnt,num);
    return 0;
}

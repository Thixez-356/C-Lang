#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charName[] = "James";
    int charAge = 50;
    printf("\n");
    printf("There once was a man named %s,\n", charName);
    printf("%s was %d years old.\n", charName, charAge);
    printf("He really liked the name %s,\n", charName);
    printf("but did not like being %d.\n", charAge);
    return 0;
}
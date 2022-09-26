#include <stdio.h>
#include <stdlib.h>
// variables are containers for storing data
int main()
{
    char charactername[] = " Brian"; // type_of-data,
    int characterAge = 35;
    printf("There once was a man named %s\n", charactername); // insert string variable using a place holder
    printf("he was %d years old.\n", characterAge);           //%d inserts intefer number
    printf("He really liked the name %s\n", charactername);
    printf("but did not like being %d.\n", characterAge);

    return 0;
}

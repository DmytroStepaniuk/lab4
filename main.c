#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "prototype.h"
int main()
{
    unsigned long int count = 0;
    printf("Enter the number of medical cards:");
    scanf("%ld",&count);

    med StructureCreate(count);
    void Display(count);


    return 0;
}

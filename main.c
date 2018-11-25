#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include "prototype.h"


//Data* StructureCreate(unsigned long int);

int main()
{
    Data* med = NULL;
    unsigned long int count = 0;
    printf("Enter the number of medical cards:");
    scanf("%ld",&count);

    med = StructureCreate(count);
    //Display(med, count);


    return 0;
}

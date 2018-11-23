#include <stdio.h>
#include <stdlib.h>
#include "prototype.h"

#define STRUCT_H_INCLUDED

med StructureCreate(unsigned long int count){
    int *med;
    med = (int*)malloc(count*sizeof(int));
    int i;
    for(i = 0; i<count; i++){
        printf("Enter the name of the patient №%i:", i);
        scanf("%29s", data[i].name);
        printf("Enter the medical card number:");
        scanf("%ld", &data[i].medicalcard);
        printf("Enter the bloodgroup of patient:");
        scanf("%i", &data[i].bloodg);
        printf("Enter the illness:");
        scanf("%29s", data[i].illness);
        printf("Point when the illness started:");
        scanf("%9i",data[i].illbegin);
        }
        return data[i];
}

void Display(unsigned long int count){
    int i;

    printf("\t\n Structures\n");
    for(i = 0; i<count; i++){
        printf("\nThe name of the patient is %s", data[i].name);
        printf("\nThe medical card number is %ld", &data[i].medicalcard);
        printf("\nThe bloodgroup is %i",data[i].bloodg);
        printf("The illness is %s", data[i].illness);
        printf("Illness started: %s", data[i].illbegin);
    }
}

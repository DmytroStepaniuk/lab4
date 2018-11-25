#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

Data* StructureCreate(unsigned long int count){
    Data* meddes;
    meddes = malloc(count* sizeof(Data));
    int i;
    for(i = 0; i<count; i++){
        printf("Enter the name of the patient №%i:", i);
        scanf("%29s", meddes[i].name);
        printf("Enter the medical card number:");
        scanf("%ld", &meddes[i].medicalcard);
        printf("Enter the bloodgroup of patient:");
        scanf("%i", &meddes[i].bloodgr);
        printf("Enter the illness:");
        scanf("%29s", meddes[i].illness);
        printf("Point when the illness started:");
        scanf("%9s",meddes[i].illbegin);
        }
        return meddes;
}

void Display(Data* meddes, unsigned long int count){
    int i;

    printf("\t\n Structures\n");
    for(i = 0; i<count; i++){
        printf("\nThe name of the patient is %s", meddes[i].name);
        printf("\nThe medical card number is %ld", &meddes[i].medicalcard);
        printf("\nThe bloodgroup is %i",meddes[i].bloodgr);
        printf("The illness is %s", meddes[i].illness);
        printf("Illness started: %s", meddes[i].illbegin);
    }
}

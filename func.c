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
        scanf("%lu", &meddes[i].medicalcard);
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
        printf("\nThe medical card number is %lu", meddes[i].medicalcard);
        printf("\nThe bloodgroup is %i",meddes[i].bloodgr);
        printf("The illness is %s", meddes[i].illness);
        printf("Illness started: %s", meddes[i].illbegin);
    }
}

Data* StructureCreatedFromFile (int count)
{
    Data* m;
    int i;
    m = malloc(count *sizeof(Data));
    FILE* myfile;
    myfile = fopen("data.txt", "r");
    if (myfile == NULL)
        printf("ERROR!\n");
    else
    {
        for (i=0; i<count; i++)
        fscanf(myfile, "%s %ld %i %s %s", m[i].name, &m[i].medicalcard, &m[i].bloodgr, m[i].illness, m[i].illbegin);
    }

    fclose(myfile);

    return m;
}

void Search(Data* meddes, int count){
    int i;
    char name[30];
    printf("\nEnter the name:");
    scanf("%s", name);
        for(i = 0; i<count; i++){
            if(name == meddes[i].name){
            printf("\nThe medical card number is %lu", meddes[i].medicalcard);
            printf("\nThe bloodgroup is %i",meddes[i].bloodgr);
            printf("The illness is %s", meddes[i].illness);
            printf("Illness started: %s", meddes[i].illbegin);
            }
    }
}

void ReadBin(Data* meddes){
    FILE *bin;
    bin = fopen("data.bin", "rb");

    if(bin == NULL){
        printf("File not found!");
    }
    else{
        while(fread(&meddes[0].medicalcard, sizeof(Data),1,bin));
        printf("\nMedicalcard from binary: %lu", meddes[0].medicalcard);
    }
}

void StructureDelete(Data* meddes){

    free(meddes);

}

#include <stdio.h>
#include <stdlib.h>
#include "./struct.h"
#include "./prototype.h"

int main()
{
    Data *med = NULL;
    unsigned long int count = 0;
    printf("Enter the number of medical cards:");
    scanf("%ld",&count);

    int n;
    do {
       printf ("\nKeyboard or FILE?(1 or 2)\n");
      scanf("%i", &n);
    } while(n<1 || n>2);

    if(n==1){
      med = StructureCreate(count);
    }
    else{
      med = StructureCreatedFromFile(count);
    }

    Display(med, count);
    Search(med, count);
    StructureDelete(med);

    int c;
    do {
      printf("\nDo you want to read from binary?(1-Yes, 2-No)\n");
      scanf("%i", &c);
    } while(c<1 || c>2);

    if(c==1){
      ReadBin(med);
    }
    else{
      printf("\nHave a good day!\n");
    }

    return EXIT_SUCCESS;
}

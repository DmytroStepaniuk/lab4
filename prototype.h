#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED
#include "struct.h"


Data* StructureCreate(unsigned long int);
void Display(Data* meddes, unsigned long int);
Data* StructureCreatedFromFile (int);
void Search(Data* meddes, int);
void ReadBin(Data* meddes);
void StructureDelete(Data* meddes);

#endif

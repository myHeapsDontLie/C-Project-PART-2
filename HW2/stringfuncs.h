#pragma once

#include <stdio.h>
#include <ctype.h>
#include "product.h"

#define MAX_SIZE 255

int isValidBarcode(const char* str);
int checkDigitsCount(const char* str);
int isLowercase(const char* str);
int IsAlphanumeric(const char* str);
int isOnlyNumbers(const char* str);
int isValidCharacterPosition(const char* str);
int isValidAddressFormat(const char* str);
int isValidAddressSections(const char* str);
int validTokens(const char* str);
int isOnlySpaces(const char* str);
void fixLastSpacesAndCapital(char* tempString, char* lastWord, int index);
int isValidAddress(char* street, char* streetNum, char* city);
char* fixAddressStreetAndCity(char* str);
char* createAddressString(char* str, char* tempString, int* index);

#include <stdio.h>
#include <stdlib.h>
#include "write.h"


char *getTextFromFile(char *filename) {
    FILE *fp = NULL;
    char *buff = (char *)malloc(sizeof(char) * 255);
 
   fp = fopen("test.txt", "r");
   fgets(buff, 255, (FILE*)fp);
   fclose(fp);
   return buff;
}
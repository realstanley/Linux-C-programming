#include "string.h"
#include "stdio.h"
#include <stdlib.h>

int main()
{
    char src[]="hello world";
    int len=sizeof(src)/sizeof(*src)-1;
    char* dst=(char*)malloc(len);
    int i = 0;
    while(len-- !=0){
     *(dst+i) = *(src+len) ;
     i++;
    }
   
    printf("src: %s \n", src);
    printf("dst: %s \n", dst);

    return 0;

}

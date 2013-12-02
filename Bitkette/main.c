//
//  main.c
//  Bitkette
//
//  Created by Markus Klemm on 25.11.13.
//  Copyright (c) 2013 MK-Enterprises. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


char* crtBitStr(unsigned int x);

int main(int argc, const char * argv[])
{

    printf("Eingabe einer int-Zahl: ");
    char cbuff[128];
    
    fgets(cbuff, 128, stdin);
    
    int ibuff = atoi(cbuff);
    
    printf("\n*** \ndez: %d \nhex %x\n",ibuff,ibuff);
    
    printf("bin: %s \n",crtBitStr(ibuff));
    
    printf("xxx\n");
    
    return 0;
}

char* crtBitStr(unsigned int x)
{
    static char cresult[sizeof(x)*8+1];
    
    int mask = 1;
    
    int i;
    
    for (i=0; i<sizeof(x)*8; i++) {
        if (x & mask) {
            cresult[sizeof(x)*8-i-1] = '1';
        }
        else{
            cresult[sizeof(x)*8-i-1] = '0';
        }
        mask<<=1;
    }
    
    
    return cresult;
    
}


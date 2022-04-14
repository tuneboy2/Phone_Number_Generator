    /* created by oladapo.olatunbosun */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* phone();

int main() {

    int *p, i;
    
    p = phone();
    
    
    printf("Your New Phone Number is:\n\n");
    
    for (i = 0;i < 11;i++)
    {
        printf("%d",*(p + i));
        
    }
        
    printf("\n\nThanks for Using our Network\n");
    return 0;
}

int* phone()
{
    /* Static variable used so as to return the variable outside of the scope of the local variable */
    static int r[11];
    
    int i, j, n;
    
    srand((unsigned)time(0));
    
    for (i = 0; i < 11; i++)
    {
        n = rand();
        j = n % 10;
        
        if (i == 0)
        {
            n = n * 0;
        }
        
        else if (i == 1)
        {
            
            if (j >= 0 && j < 5)
            {
                n = 8;
            }
            else
            n = 9;
            
        }
    
        else if (i == 2)
        {
            if (j >= 0 && j < 5)
            {
                n = 0;
            }
            else 
            n = 1;
        }
        
        r[i] = (n % 10);
    }
    
    return r;
}

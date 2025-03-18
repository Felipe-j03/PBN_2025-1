#include <stdio.h>

int main()
{
    int vet[] = { 4, 9, 12 };
    int i, *ptr;
    ptr = vet;
    for(i =0; i<3; i++)
    // avança o ponteiro
    printf("%d ", *ptr++);
    printf("\n");
    
    ptr = vet;
    for(i = 0; i<3; i++)
        printf("%d ", *ptr++);
    printf("\n");
    return 1;
}
#include <stdio.h>
 
void print()
{
    printf("~!@#$^&*()_+|\n");
}
 
int main()
{
    int a;
    scanf("%d", &a);
 
    int i;
    for(i=0;i<a;i++){
        print();
    }
}

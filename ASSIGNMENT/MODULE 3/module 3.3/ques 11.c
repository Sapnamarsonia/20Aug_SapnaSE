//WAP to show difference between Structure and Unio
#include <stdio.h>
struct data
{
    int id;
    char name[10];
}x;

union datal
{
    int i;
    char nm[10];
}y;


int main()
{
    printf("Enter the id = ");
    scanf("%d", &x.id);
    printf("Enter the name =");
    scanf("%s", &x.name);
    printf("Employee number = %d\n", x.id);
    printf("Employee name = %s\n", x.name);

    printf("Enter the union id = ");
    scanf("%d", &y.i);
    printf("Enter the union name =");
    scanf("%s", &y.nm);
    printf("Employee number = %d\n", y.i);
    printf("Employee name = %s\n", y.nm);
    
    printf("\n memory allocation for structure =%d",sizeof(x));
    printf("\n memory allocation for union =%d",sizeof(y));
    
}

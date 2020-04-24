#include <stdio.h>
#include <stdarg.h>

void var_parameterfunc_1(int num, ...)
{
    printf("\nIn function var_parameterfunc_1: \n");
    va_list list;
    va_start(list, num);
    int temp = 0;
    
    for (int i = 0; i < num; i++)
    {
        temp = va_arg(list, int);
        printf("parameter %d: %d\n", i, temp);
    }
    
    va_end(list);
}

void var_parameterfunc_2(int num, ...)
{
    printf("\nIn function var_parameterfunc_2: \n");
    va_list list;
    va_start(list, num);
    char* temp = 0;
    
    for (int i = 0; i < num; i++)
    {
        temp = va_arg(list, char*);
        printf("parameter %d: %s\n", i, temp);
    }
    
    va_end(list);
}


void var_parameterfunc_3(int num1, int num2, int num3, ...)
{
    printf("\nIn function var_parameterfunc_3: \n");
    printf("parameter 1: %d\n", num1);
    printf("parameter 2: %d\n", num2);
    printf("parameter 3: %d\n", num3);
    
    va_list list;
    va_start(list, num3);
    int index = 3;
    char* temp = va_arg(list, char*);
    
    while(temp != NULL)
    {
        printf("parameter %d: %s\n", ++index, temp);
        temp = va_arg(list, char*);
    }
    
    va_end(list);
}

int main()
{
    var_parameterfunc_1(3, 1, 2, 3);
    var_parameterfunc_2(3, "one", "two", "three");
    var_parameterfunc_3(1, 2, 3, "one", "two", "three");
    return 0;
}

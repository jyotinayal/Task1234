#include <stdio.h>
void add(int a,int b)
{
    int c= a+b;
    printf("%d",  c);
}

void sub(int a,int b)
{
	int c= a-b;
	printf("%d",  c);
}

int main()
{
   int first_num=0;
   int second_num=0;
    printf("Enter two operands: ");
    scanf("%d %d", &first_num, &second_num);
    add(first_num,second_num);
    sub(first_num,second_num);
    return 0;
}
#include <cs50.h>
#include <stdio.h>
int main(void)
{
   string name = get_string("Please write your name.\n");
   printf("Hello, %s\n", name);
}

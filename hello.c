//  hello output

//  include files
#include "stdio.h"
#include "string.h"

//  public function
extern  int test(int x, int y);

//  main
int main(void)
{
    printf("hello world!\n");
    printf("add dev branch\n");
    return  0;
}
/**
 * @brief   compare
 * 
 * @param x 
 * @param y 
 * @return output the big one 
 */
int test(int x, int y)
{
    if(x > y)
        return  x;
    else
        return  y;
}
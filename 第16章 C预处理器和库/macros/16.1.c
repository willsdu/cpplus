/*prepro.c --简单的预处理示例*/
#include <stdio.h>
#define TWO 2
#define OW "this is a  \
    line has space"
#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main(void)
{
    int x=TWO;
    
    PX;
    x=FOUR;
    printf(FMT,x);
    printf("%s\n", OW);
    printf("TWO: ow\n");

    return 0;
}

//
//  main.c
//  求log2x
//
//  Created by Miles Yuan on 24/7/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    int ret = -1; //ret在这里相当于count，统计循环次数

    scanf("%d", &x);
    int t = x; //先存一下x的值，以免最后出循环变为1了，print出来句子错误

//  不断除以2，通过除了多少次，来确定对数是多少
//  除到1的时候，1/2按整数运算结果为0，就出了循环
    while ( x > 0 ) {
        x /= 2;
        ret++;
    }
    printf("log2 of %d is %d.", t, ret);
    return 0;
}

/*

===一般情况===
x   ret
128 -1
=> 进循环
64  0
32  1
16  2
8   3
4   4
2   5
1   6
0   7
=> x=0不满足x>0，出循环
=> 结果：log2 of 128 is 7


===特殊情况===
x   ret
2   -1
=> 进循环
1   0
0   1
=> x=0不满足x>0，出循环
=> 结果：log2 of 1 is 0

*/



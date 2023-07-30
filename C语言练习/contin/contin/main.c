//
//  main.c
//  contin
//
//  Created by Miles Yuan on 29/7/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//  【素数(Prime number)：只能被1和它自己整除的正整数】
//  0和1既不是素数也不是合数(Composite number)，它们被称为特殊的数字
//  （注：但是本程序中暂时没有去考虑0和1，默认输入的是1以上的正整数）
    int x;

    scanf("%d", &x);
    
    int i;
    int isPrime = 1; //代表「x是素数」，是一个indicator
    for (i=2; i<x; i++) {
        if (x%i == 0) {
            isPrime = 0;
            break; //一旦发现是素数，把isPrime改为0，然后立即出循环，不需要继续往下判断了
        }
    }
    /*
    所以循环里一直在执行indicator，最后再走一个if去print，
    而不是把print写在循环里，不断在输出句子
    另外，由于只要有一次能被整除，就不是素数，
    因此isPrime初始值设定为1，只要有一次被整除结果就为0且不会再变回来
    而不能设置为0，看它变不变1 */
    
    
//  最终结果验收并输出
    if (isPrime == 1) {
        printf("是素数\n");
    } else {
        printf("不是素数\n");
    }
    printf("\n");

    return 0;
}

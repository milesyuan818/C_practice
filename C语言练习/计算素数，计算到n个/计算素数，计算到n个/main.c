//
//  main.c
//  计算素数，计算到n个
//
//  Created by Miles Yuan on 29/7/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//  【接文件“contin”（乱码是因为命名失效）】
//  【输出特定范围内（「x」到「外部for循环里，x小于的那个值」）的所有素数】

    int x;
        
    for (x=2; x<100; x++) {
        int i;
        int isPrime = 1; //代表「x是素数」，是一个indicator
        for (i=2; i<x; i++) {
            if (x%i == 0) {
                isPrime = 0;
                break; //一旦发现是素数，把isPrime改为0，然后立即出循环，不需要继续往下判断了
            }
        }
        
        //  最终结果验收并输出
        if (isPrime == 1) {
            printf("%d ", x);
        }
    
    }
    printf("\n");
    
    return 0;
}

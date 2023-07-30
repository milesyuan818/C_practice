//
//  main.c
//  循环，数数字
//
//  Created by Miles Yuan on 24/7/2023.
//


/* 判断（四位数及以下的）数字是几位数 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 初始化
    int x;
    int n=1;
    
    // 扫描数字
    printf("请输入那个数字：");
    scanf("%d", &x);
    
    // 条件判断
    if ( x>999 ) {
        n=4;
    } else if ( x>99) {
        n=3;
    } else if ( x>9 ) {
        n=2;
    }
    // 最后还差一个else可以不写，因为这个情况下n的值本来就是初始化的1

    // 输出
    printf("%d\n", n);
    
    printf("=====下一个程序：判断一个非常长的数的位数=====\n方法：「数一个划掉一个，然后计数」\n");
    int x1;
    int n1=0;
    
    printf("输入数字：");
    scanf("%d", &x1);
    
    // 用整除10来「划掉最后一位数字」，直到没的可除
//    n1++;
//    x1/=10; // 这两行写在while的前面，是为了应对x=0的特殊情况
//    while ( x1>0 ) {
//        n1++;
//        x1/=10;
//    }
//
//    printf("%d\n", n1);
    
    // 先执行一次，再进入循环执行同样操作，可以简化成do-while
    do {
        n1++;
        x1/=10;
    }
    while ( x1>0 ); // 这里的while括号后要加分号了

    printf("%d\n", n1);

    return 0;
}

//
//  main.c
//  整数的分解
//
//  Created by Miles Yuan on 28/7/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//  【===== 省略0的版本 =====】
    printf("===== 省略0的版本 =====\n");

    int x;
    scanf("%d", &x);
    
    int digit;
    int ret = 0; //ret指结果
    
    while (x>0) {
        digit = x%10;
//        printf("%d", digit);
        ret = ret*10 + digit;
        printf("x=%d, digit=%d, ret=%d\n", x, digit, ret);
        x /= 10; //显示挪动过程
    }
    printf("%d\n", ret); //【最终输出命令】
    
    
    
//  【===== 不省略0的版本 =====】
//    printf("===== 不省略0的版本 =====\n");

    int x_;
    scanf("%d", &x_);
    
    int digit_;
    int ret_ = 0; //ret指结果
    
    while (x_>0) {
        digit_ = x_%10;
        printf("%d", digit_); //【最终输出命令】
        //每次循环中print的东西串在一起，最终组合出了那个数字
        //即每取完一次最后一位，就print出来，且不换行，因此最终没省略0
        ret_ = ret_*10 + digit_;
//        printf("x_=%d, digit_=%d, ret_=%d\n", x_, digit_, ret_); //显示挪动过程
        x_ /= 10;
    }
//    printf("%d\n", ret_);

    return 0;
}

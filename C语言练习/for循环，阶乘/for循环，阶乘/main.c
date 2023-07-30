//
//  main.c
//  for循环，阶乘
//
//  Created by Miles Yuan on 29/7/2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//  【while的写法】
    printf("=====while的写法=====\n");
    int n;
    
    scanf("%d", &n); //扫描阶乘的n
    int fact = 1; //阶乘结果fact
    
    int i = 1; //i是当前阶乘到的项
    while (i<=n) {
        fact *= i;
        i++;
    }
    printf("%d! = %d\n", n, fact);
    
//  【for的写法】
    printf("=====for的写法=====\n");
    
    int n_;
    
    scanf("%d", &n_);
    int fact_ = 1;
    
    int i_ = 1;
    for (i_=1; i_<=n_; i_++) {
        fact_ *= i_;
    }
    
    printf("%d != %d\n", n_, fact_);
    
    
    return 0;
}

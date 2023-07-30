//
//  main.c
//  change-1
//
//  Created by Miles Yuan on 19/7/2023.
//

#include <stdio.h>

int main()
{
    // 初始化
    int bill = 100;
    int price = 0;
    // 读入金额和票面
    printf("请输入金额（元）：");
    scanf("%d", &price);
    
    printf("请输入票面（元）：");
    scanf("%d", &bill);
    
    // 计算找零
    if (bill >= price) {
        printf("找您%d元\n", bill-price);
    }

    else {
        printf("你的钱不够\n");
    }
    return 0;
}

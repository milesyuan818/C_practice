//
//  main.c
//  猜数游戏
//
//  Created by Miles Yuan on 28/7/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    srand(time(0));
    int number = rand()%100+1;
//  以上两行是为了保证每次随机的数字不一样，暂时不涉及怎么用
    
    int count = 0;
    int a = 0; //用户猜的那个数
    printf("我已经想好了一个1到100之间的数，");
    
    do {
        printf("请开始猜吧。");
        scanf("%d", &a);
        count ++;
        if (a>number) {
            printf("你猜的数大了。");
        } else if (a<number) {
            printf("你猜的数小了。");
        }
    } while (a!=number);
    
//  x % n的结果是[0, n-1]的整数
//  也可以理解为取x最后的几位数字（看0的个数）
//  例如，12345 % 100相当于只取45
    
    printf("太好了，你用了%d次就猜到了答案。\n", count);
    return 0;
}

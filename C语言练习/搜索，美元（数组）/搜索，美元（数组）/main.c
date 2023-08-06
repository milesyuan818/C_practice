//
//  main.c
//  搜索，美元（数组）
//
//  Created by Miles Yuan on 5/8/2023.
//

/*
 penny          1分
 nickel         5分
 dime           10分
 quarter        25分
 half-dollar    50分
 */

/*
 查找方法：使用数组
 数组1        数组2
 0 -> 1      penny
 1 -> 5      nickel
 2 -> 10     dime
 3 -> 25     quarter
 4 -> 50     half-dollar
 */

#include <stdio.h>

int amount[] = {1,5,10,25,50};
char *name[] = {"penny", "nickel", "dime", "quarter", "half-dollar"};
//这里字符串数组加*，是为了允许每个字符串的字母个数（长度）不同

int search(int key, int a[], int len) { //传入参数len，是用来确定遍历结束条件（i<len）
    int ret = -1;
    for (int i=0; i<len; i++)
    {
        if (key == a[i])
        {
            ret = i;
            break;
        }
    }
    return ret;
}

int main(int argc, const char * argv[]) {
    int k = 10;
    int r = search(k, amount, sizeof(amount)/sizeof(amount[0]));
                                    //数组中元素的个数
    if (r > -1)
    {
        printf("%s\n", name[r]);
    }
//    int *po=0;
//    int i =30;
//    po = &i;
//    printf("%d", *po);

    struct date {
    int month; int day; int year;
    } myday;
    struct date *p = &myday;
    (*p) .month = 12;
    printf("%i\n", myday);
    printf("%i\n", *p);

    return 0;
    

}

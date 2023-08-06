//
//  main.c
//  函数传值传指针
//
//  Created by Miles Yuan on 4/8/2023.
//

#include <stdio.h>


void modifyByValue(int x) {
    x = x * 2;
}

int main(int argc, const char * argv[]) {
    int num = 5;
    modifyByValue(num);
    // num remains unchanged (still 5)
    printf("%d\n", num);
    return 0;
}

// 【如果这样写，就会得到10】
// 【重点】1.函数头返回int而不是void 2.调用函数时要再次assign
// 即num = modifyByValue(num)，要加上「num =」


//int modifyByValue(int x) {
//    return x = x * 2;
//}
//
//int main(int argc, const char * argv[]) {
//    int num = 5;
//    num = modifyByValue(num);

//    printf("%d\n", num);
//    return 0;
//}


// 【第二种：传指针，而不是传值，此时可以改变函数外的值】
//void modifyByPointer(int* ptr) {
//    *ptr = *ptr * 2;
//}
//
//int main() {
//    int num = 5;
//    modifyByPointer(&num);
//    // num is modified to 10
//    return 0;
//}

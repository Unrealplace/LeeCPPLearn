//
//  main.cpp
//  LeeCPPTest
//
//  Created by MacBook on 2017/4/27.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "LeeDemo1.hpp"
#include "People.cpp"

using namespace std;
// 取别名
typedef int LeeInt;
typedef char LeeChar;
// 枚举
enum LeeColor {

    red = 0x00,
    green = 0x01,
    blue = 0x02
};
//extern int a,b,c;
//extern char d;

//常量的使用
#define LEE_STR "heloo ,dear"
#define Lee(x) x * x
#define LeeMax(a,b) a>b?a,b

const int AAA = 1313;
const double PI = 3.1415926;

static int count = 10; //全局变量//

void leeTest(int a,char * b);
inline void leeTestF(int a); // 内联函数，可以提高速度；

int    lee(int a);
float  lee(int a,int b);
double lee(double a,double b); //函数的重载，

template <typename T> // 声明函数模版
T Xmax(T x, T y){

    return x > y ? x:y;
}


int main(int argc, const char * argv[]) {


    int m = 4;
    char w = 44;

    
    std::cout << "Hello, World!\n" << endl;
    std::cout << sizeof(char) << endl;
    std::cout << sizeof(short int) << endl;
    std::cout << sizeof(LeeChar) << endl;
    LeeColor color = red;
    std::cout << color << endl;
    leeTest(m, &w);
    cout << "hello\tworld\n" << endl;
    
    short int i ;
    unsigned short int j;
    i = 3000;
    j = i;
    
    std::cout << i << j << endl;
    
    //////auto 存储类/////////c++11 中已经删除了这个用法
    auto f = 3.14;
    auto s("oliver");
    auto z = new auto(10);
    auto t = 5;
    
    std::cout << f << s << z << t << endl;
    
    ///register 存储类////////// 弃用了
    
//    register int www;
    
    _Global_count = 10101;
    
    char aa = 'a';
    testDemo1(_Global_count, &aa);
    
    testDemo2(3, 1);
    
    std::cout << testDemo2(3, 1) << endl;
    
//    printf("%d",aa);
    
    [](int x , int y){
        
        return x < y;
    
    };
   
    [](int a, int b) -> int {
        int z = a + b;
        return z + a;
    };
    
    int c;
    
    cout << Xmax(3, 6) << endl;
    cout << Xmax(3.5, 6.666) << endl;
    
    
    int arr[6]  =  {1,24,5,6,78,99};
    
   unsigned char charArr[3] {254,255,7};
    
    int sub = 0 ;
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        int * p = &arr[i];
        std::cout <<"arr -->>>" << p << endl;
        if (i == 5) {
            *p = 666666;
        }
        if (arr[i] > arr[sub]) {
            sub = i;
        }
        for (int j = i; j < sizeof(arr)/sizeof(int) - i ; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i]   = arr[j];
                arr[j]   = temp;
            }
        }
    }
    std::cout <<"arr -->>>" << arr[sub] << endl;
    for (int i = 0; i < sizeof(arr)/sizeof(int) ; i++) {
        std::cout <<"arr:::" << arr[i] << endl;
    }

    
    int www = 5;
    int * ptr = &www; // int * 指针类型 ，整形指针。存储的是www的内存地址
    std::cout <<"ptr >>>>"<< *ptr<<endl; //* 解引用。
    
    int * ppp = NULL; // c 语言的写法
    int * p1  = nullptr;//c++ 写法
    int * p2 ;
    std::cout << "p2--->" << *(&p2) <<endl;
    
    //内存五大区: 1.源代码区--》存放代码的区域，2.静态区域--》存放静态变量和全局变量的区域，3.栈区，存放局部变量和参数的区域，有操作系统管理，4.堆区，存放我们开辟的一块内存区域用了存放对象的，手动管理，5.常量区域
    //指针可以指向堆区，栈区，静态区，常量区,代码区
    
    char * p4 = "abdd";
    
    static int wwww = 334;
    
    int * p5 = &wwww;
    
    std:: cout << "main -->"<<"test-->"<< &main<<&leeTest <<endl;
    
    
    int r = 6;
    int q = 7;
    char e = 'g';
    
    Leeswap(&r, &q);
    std::cout << r << endl;
    
  // 函数指针是一个指向函数的指针， 指针函数，
    
    void (*pppp)(int,char*);
    
    pppp = leeTest;
    
    (*pppp)(r,&e);
    (*leeTest)(r,&e);
    
    char  name = 'o';
    People oliver;//创建对象
    oliver.age = 10;
    oliver.name = &name;
    oliver.eat();
    
    People * Poliver = &oliver;
    Poliver ->age = 25;
    Poliver ->name = &name;
    Poliver ->eat();
    
    
    
    return 0;
}
void leeTest(int a , char * b){

    std::cout << a + (*b) << endl;
    
}

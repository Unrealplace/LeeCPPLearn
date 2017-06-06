//
//  SimpleComplex.hpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef SimpleComplex_hpp
#define SimpleComplex_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
//复数类
class NewComplex{
    
//    对 Complex 类的进一步精简
//    
//    上面的 Complex 类中我们定义了三个构造函数，其中包括两个普通的构造函数和一个转换构造函数。其实，借助函数的默认参数，我们可以将这三个构造函数简化为一个，请看下面的代码：
public:
    NewComplex(double real = 0.0, double imag = 0.0): m_real(real), m_imag(imag){ }
//    精简后的构造函数包含了两个默认参数，在调用它时可以省略部分或者全部实参，也就是可以向它传递 0 个、1 个、2 个实参。转换构造函数就是包含了一个参数的构造函数，恰好能够和其他两个普通的构造函数“融合”在一起。
public:
    friend ostream & operator<<(ostream &out, NewComplex &c);  //友元函数
private:
    double m_real;  //实部
    double m_imag;  //虚部
};

#endif /* SimpleComplex_hpp */

//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/5.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "Complex.hpp"

int main(int argc, const char * argv[]) {
  
    Complex c1(24.6,100);
    double f = c1;//相当于 double f = Complex::operator double(&c1);
    cout << "f =  "<<f<<endl;
    
    f = 12.5 + c1 + 9;//相当于 f = 12.5 + Complex::operator double(&c1) + 6;
    cout << "f =  "<<f <<endl;
    
    int n = Complex(3.5,35.6);//先转换为 double，再转换为 int
    cout << "n =  "<<n<<endl;
    
    
    return 0;
}

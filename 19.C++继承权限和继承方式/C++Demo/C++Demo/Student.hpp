//
//  Student.hpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include "People.hpp"


class StudenA:public People{

public:
    void setscore(float score);
protected:
    float m_score;
    
};

//
//改变访问权限
//使用 using 关键字可以改变基类成员在派生类中的访问权限，例如将 public 改为 private、将 private 改为 public。
//
//using 关键字使用示例：

class StudenB:public People{

public:
    void learning();
public:
    using People::m_name; // 基类的proteted 改为public
    using People::m_age; // 基类的proteted 改为public
//    using People::m_hobby; // 基类的private 没法改为public
    
protected:
//    using People::m_hobby; // 基类的private 没法改为protected;

private:
    using People::show;// 基类的pubic 改为private；
    
};


class StudenC:private People{

};

// 创建一个继承于 studentA 的类
class GirlStudent:public StudenA{

public:
    void setranking(int ranking);
    void display();
private:
    int m_ranking;
   
    
    
};



#endif /* Student_hpp */

//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 17/5/9.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "ObjectClass.hpp"
#include "ObjectClass1.hpp"

int main(int argc, const char * argv[]) {
  
    People *p  = new People("oliver",123);
    
    p -> display();
    
    p = new Teacher("oliver lee",34,7000);
    p -> display();
    
//    我们直观上认为，如果指针指向了派生类对象，那么就应该使用派生类的成员变量和成员函数，这符合人们的思维习惯。但是本例的运行结果却告诉我们，当基类指针 p 指向派生类 Teacher 的对象时，虽然使用了 Teacher 的成员变量，但是却没有使用它的成员函数，导致输出结果不伦不类（赵宏佳本来是一名老师，输出结果却显示人家是个无业游民），不符合我们的预期。
//    
//    换句话说，通过基类指针只能访问派生类的成员变量，但是不能访问派生类的成员函数。
//    
//    为了消除这种尴尬，让基类指针能够访问派生类的成员函数，C++ 增加了虚函数（Virtual Function）。使用虚函数非常简单，只需要在函数声明前面增加 virtual 关键字。
//    更改上面的代码，将 display() 声明为虚函数：

    
//    oliver今年123岁了，是个无业游民。
//    oliver lee今年34岁了，是一名教师，每月有7000元的收入。
    
    
//    和前面的例子相比，本例仅仅是在 display() 函数声明前加了一个virtual关键字，将成员函数声明为了虚函数（Virtual Function），这样就可以通过 p 指针调用 Teacher 类的成员函数了，运行结果也证明了这一点（赵宏佳已经是一名老师了，不再是无业游民了）。
//    
//    有了虚函数，基类指针指向基类对象时就使用基类的成员（包括成员函数和成员变量），指向派生类对象时就使用派生类的成员。换句话说，基类指针可以按照基类的方式来做事，也可以按照派生类的方式来做事，它有多种形态，或者说有多种表现方式，我们将这种现象称为多态（Polymorphism）。
    
//    上面的代码中，同样是p->display();这条语句，当 p 指向不同的对象时，它执行的操作是不一样的。同一条语句可以执行不同的操作，看起来有不同表现方式，这就是多态。
//    
//    多态是面向对象编程的主要特征之一，C++中虚函数的唯一用处就是构成多态。
    
    
    cout << "-------------------------"<<endl;
//    借助引用也可以实现多态
//    
//    引用在本质上是通过指针的方式实现的，这一点已在《引用在本质上是什么，它和指针到底有什么区别》中进行了讲解，既然借助指针可以实现多态，那么我们就有理由推断：借助引用也可以实现多态。
//    
//    修改上例中 main() 函数内部的代码，用引用取代指针：
    
    People pp("王志刚", 23);
    Teacher t("赵宏佳", 45, 8200);
    
    People &rp = pp;
    People &rt = t;
    
    rp.display();
    rt.display();
    
    
    
    Troops *Q = new Troops;
    Q ->fight();
    //陆军
    Q = new Army;
    Q ->fight();
    Q = new _99A;
    Q -> fight();
    Q = new WZ_10;
    Q -> fight();
    Q = new CJ_10;
    Q -> fight();
    //空军
    Q = new AirForce;
    Q -> fight();
    Q = new J_20;
    Q -> fight();
    Q = new CH_5;
    Q -> fight();
    Q = new H_6K;
    Q -> fight();
    
//    strike back!
//    --Army is fighting!
//    ----99A(Tank) is fighting!
//    ----WZ-10(Helicopter) is fighting!
//    ----CJ-10(Missile) is fighting!
//    --AirForce is fighting!
//    ----J-20(Fighter Plane) is fighting!
//    ----CH-5(UAV) is fighting!
//    ----H-6K(Bomber) is fighting!
    
//    这个例子中的派生类比较多，如果不使用多态，那么就需要定义多个指针变量，很容易造成混乱；而有了多态，只需要一个指针变量 p 就可以调用所有派生类的虚函数。
//    
//    从这个例子中也可以发现，对于具有复杂继承关系的大中型程序，多态可以增加其灵活性，让代码更具有表现力。
    
    
    
    
    return 0;
}

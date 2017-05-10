//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 17/5/10.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include "ObjectClass.hpp"

int main(int argc, const char * argv[]) {
   
    
    Line *p = new Cuboid(10, 20, 30);
    cout<<"The area of Cuboid is "<<p->area()<<endl;
    cout<<"The volume of Cuboid is "<<p->volume()<<endl;
    
    p = new Cube(15);
    cout<<"The area of Cube is "<<p->area()<<endl;
    cout<<"The volume of Cube is "<<p->volume()<<endl;
    
    
//    The area of Cuboid is 2200
//    The volume of Cuboid is 6000
//    The area of Cube is 1350
//    The volume of Cube is 3375
    
//    本例中定义了四个类，它们的继承关系为：Line --> Rec --> Cuboid --> Cube。
//    
//    Line 是一个抽象类，也是最顶层的基类，在 Line 类中定义了两个纯虚函数 area() 和 volume()。
//    
//    在 Rec 类中，实现了 area() 函数；所谓实现，就是定义了纯虚函数的函数体。但这时 Rec 仍不能被实例化，因为它没有实现继承来的 volume() 函数，volume() 仍然是纯虚函数，所以 Rec 也仍然是抽象类。
//    
//    直到 Cuboid 类，才实现了 volume() 函数，才是一个完整的类，才可以被实例化。
//    
//    可以发现，Line 类表示“线”，没有面积和体积，但它仍然定义了 area() 和 volume() 两个纯虚函数。这样的用意很明显：Line 类不需要被实例化，但是它为派生类提供了“约束条件”，派生类必须要实现这两个函数，完成计算面积和体积的功能，否则就不能实例化。
//    
//    在实际开发中，你可以定义一个抽象基类，只完成部分功能，未完成的功能交给派生类去实现（谁派生谁实现）。这部分未完成的功能，往往是基类不需要的，或者在基类中无法实现的。虽然抽象基类没有完成，但是却强制要求派生类完成，这就是抽象基类的“霸王条款”。
//    
//    抽象基类除了约束派生类的功能，还可以实现多态。请注意第 51 行代码，指针 p 的类型是 Line，但是它却可以访问派生类中的 area() 和 volume() 函数，正是由于在 Line 类中将这两个函数定义为纯虚函数；如果不这样做，51 行后面的代码都是错误的。我想，这或许才是C++提供纯虚函数的主要目的。
//    关于纯虚函数的几点说明
//    
//    1) 一个纯虚函数就可以使类成为抽象基类，但是抽象基类中除了包含纯虚函数外，还可以包含其它的成员函数（虚函数或普通函数）和成员变量。
//    
//    2) 只有类中的虚函数才能被声明为纯虚函数，普通成员函数和顶层函数均不能声明为纯虚函数。如下例所示：
//    纯文本复制
//    //顶层函数不能被声明为纯虚函数
//    void fun() = 0;   //compile error
//    class base{
//        public :
//        //普通成员函数不能被声明为纯虚函数
//        void display() = 0;  //compile error
//    };
    
    
    return 0;
}

//
//  Base.cpp
//  C++Demo
//
//  Created by LiYang on 17/5/10.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include "Base.hpp"

void Base::func(){
    cout<<"void Base::func()"<<endl;

}
void Base::func(int a){
    cout<<"void Base::func(int)"<<endl;
}
void Derived::func(){
    cout<<"void Derived::func()"<<endl;
}
void Derived::func(char *str){
    cout<<"void Derived::func(char *)"<<endl;
}

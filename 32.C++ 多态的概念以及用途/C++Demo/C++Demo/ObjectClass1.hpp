//
//  ObjectClass1.hpp
//  C++Demo
//
//  Created by LiYang on 17/5/9.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#ifndef ObjectClass1_hpp
#define ObjectClass1_hpp
//多态的用途
//
//通过上面的例子读者可能还未发现多态的用途，不过确实也是，多态在小项目中鲜有有用武之地。
//
//接下来的例子中，我们假设你正在玩一款军事游戏，敌人突然发动了地面战争，于是你命令陆军、空军及其所有现役装备进入作战状态。具体的代码如下所示：
#include <stdio.h>

#include <iostream>
using namespace std;

class Troops{
public:
    virtual void fight(){
    
        cout << "strike back!"<<endl;
        
    }
    
};

// 陆军
class Army:public Troops{

public:
     void fight(){
    cout<<"--Army is fighting!"<<endl;
    }
};
class _99A:public Army{
public:
    void fight(){
    cout<<"----99A(Tank) is fighting!"<<endl;
    }
};
//武直10武装直升机
class WZ_10: public Army{
public:
    void fight(){ cout<<"----WZ-10(Helicopter) is fighting!"<<endl; }
};
//长剑10巡航导弹
class CJ_10: public Army{
public:
    void fight(){ cout<<"----CJ-10(Missile) is fighting!"<<endl; }
};



//空军
class AirForce: public Troops{
public:
    void fight(){ cout<<"--AirForce is fighting!"<<endl; }
};
//J-20隐形歼击机
class J_20: public AirForce{
public:
    void fight(){ cout<<"----J-20(Fighter Plane) is fighting!"<<endl; }
};
//CH5无人机
class CH_5: public AirForce{
public:
    void fight(){ cout<<"----CH-5(UAV) is fighting!"<<endl; }
};
//轰6K轰炸机
class H_6K: public AirForce{
public:
    void fight(){ cout<<"----H-6K(Bomber) is fighting!"<<endl; }
};

#endif /* ObjectClass1_hpp */

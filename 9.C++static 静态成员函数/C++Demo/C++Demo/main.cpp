//
//  main.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/3.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include <iostream>
#include "Student.cpp"

int   Student::m_total = 0;
float Student::m_points = 0.0;
int main(int argc, const char * argv[]) {
    
    
    (new Student("小明", 15, 90.6)) -> show();
    (new Student("李磊", 16, 80.5)) -> show();
    (new Student("张华", 16, 99.0)) -> show();
    (new Student("王康", 14, 60.8)) -> show();
    Student stu = Student("oliver", 100, 100);
    
    
    
    
    int total    = stu.getTotal();
    float points = stu.getPoints();
    
    
    cout<<"当前共有"<<total<<"名学生，总成绩是"<<points<<"，平均分是"<<points/total<<endl;

    
    return 0;
}

//
//  Student.cpp
//  C++Demo
//
//  Created by MacBook on 2017/5/5.
//  Copyright © 2017年 Oliver. All rights reserved.
//

#include "Student.hpp"

void StudenA::setscore(float score){

    this -> m_score = score;
}

void GirlStudent::setranking(int ranking){

    this -> m_ranking = ranking;
}
void GirlStudent::display(){

    cout<<m_name<<"的年龄是"<<m_age<<"，考试成绩为"<<m_score<<"分，班级排名第"<<m_ranking<<"，TA喜欢"<<gethobby()<<"。"<<endl;
}
void StudenB::learning(){

    cout<<"我是"<<m_name<<"，今年"<<m_age<<"岁，这次考了"<<"分！"<<endl;
    this -> show();
    
}

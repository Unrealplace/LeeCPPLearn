//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/7.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;


void save_to_file(){

    ofstream outfile("/Users/liyang/Desktop/test.rtf");
    if (!outfile) {
        cerr<<"open f2.dat error!"<<endl;
        exit(1);
    }
    char c[80];
    cin.getline(c, 80);//
    for (int i =0; c[i]!= 0; i++) {
        if((c[i]>=65 && c[i]<=90)||(c[i]>=97 && c[i]<=122))  //如果是字母字符
        {
            outfile.put(c[i]);  //将字母字符存入磁盘文件f2.dat
            cout<<c[i];  //同时送显示器显示
        }
        cout<<endl;
    }
    outfile.close();  //关闭f2.dat

}
//从磁盘文件f2.dat读入字母字符,将其中的小写字母改为大写字母,再存入f3.dat
void get_from_file(){

    char ch;
    //定义输入文件流outfile,以输入方式打开磁盘文件f2.dat
    ifstream infile("/Users/liyang/Desktop/test.rtf",ios::in);
    if(!infile){
        cerr<<"open f2.dat error!"<<endl;
        exit(1);
    }
    ofstream outfile("/Users/liyang/Desktop/test 2.rtf");
    //定义输出文件流outfile,以输出方式打开磁盘文件f3.dat
    if(!outfile){
        cerr<<"open f3.dat error!"<<endl;
        exit(1);
    }
    while(infile.get(ch))  //当读取字符成功时执行下面的复合语句
    {
        if(ch>=97 && ch<=122)  //判断ch是否为小写字母
            ch=ch-32;  //将小写字母变为大写字母
        outfile.put(ch);  //将该大写字母存入磁盘文件f3.dat
        cout<<ch;  //同时在显示器输出
    }
    cout<<endl;
    infile.close();  //关闭磁盘文件f2.dat
    outfile.close();  //关闭磁盘文件f3.dat
}
void display_file(char * filename){

    ifstream infile(filename,ios::in);
    if(!infile)
    {
        cerr<<"open error!"<<endl;
        exit(1);
    }
    char ch;
    while(infile.get(ch))
        cout.put(ch);
    cout<<endl;
    infile.close();
}



int main(int argc, const char * argv[]) {
  
//    int aa[10];
//    ofstream outfile("/Users/liyang/Desktop/test.rtf",ios::out);//定义文件流对象，打开文件
//    if (!outfile) {
//        cerr<<"open error!"<<endl;
//        exit(1);
//    }
//    cout<<"enter 10 integer numbers:"<<endl;
//    
//    for (int i =0; i<10; i++) {
//        cin>>aa[i];
//        outfile<<aa[i]<<" ";//向文件输出数据
//    }
//    outfile.close();//
    
    
    
//    int a[10],max,i,order;
//    //定义输入文件流对象,以输入方式打开磁盘文件f1.dat
//    ifstream infile("/Users/liyang/Desktop/test.rtf",ios::in );
//    if(!infile)
//    {
//        cerr<<"open error!"<<endl;
//        exit(1);
//    }
//    for(i=0;i<10;i++)
//    {
//        infile>>a[i];  //从磁盘文件读入10个整数,顺序存放在a数组中
//        cout<<a[i]<<" ";  //在显示器上顺序显示10个数
//    }
//    cout<<endl;
//    max=a[0];
//    order=0;
//    for(i=1;i<10;i++)
//        if(a[i]>max){
//            max=a[i];  //将当前最大值放在max中
//            order=i;  //将当前最大值的元素序号放在order中
//        }
//    cout<<"max="<<max<<endl<<"order="<<order<<endl;
//    infile.close();
    
    
//    可以看到：文件f1.dat在例13.11中作为输出文件，在例13.12中作为输入文件。 一个磁盘文件可以在一个程序中作为输入文件，而在另一个程序中作为输出文件，在不同 的程序中可以有不同的工作方式。甚至在同一个程序中先后以不同方式打开，如先以输出方式打开，接收从程序输出的数据，然后关闭它，再以输入方式打开，程序可以从中读取数据。
    
    

    
    save_to_file();
    get_from_file();
    display_file("/Users/liyang/Desktop/test.rtf");
    
    
    return 0;
}







//
//  main.cpp
//  C++Demo
//
//  Created by LiYang on 2017/6/7.
//  Copyright © 2017年 LiYang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
  
    
    
//    这里讲一下如何打开和关闭磁盘上的文件，其他外设（U盘、光盘等）上的文件与此相同。
//    打开文件
//    
//    所谓打开(open)文件是一种形象的说法，如同打开房门就可以进入房间活动一样。 打开文件是指在文件读写之前做必要的准备工作，包括：
//    为文件流对象和指定的磁盘文件建立关联，以便使文件流流向指定的磁盘文件。
//    指定文件的工作方式，如，该文件是作为输入文件还是输出文件，是ASCII文件还是二进制文件等。
//    
//    以上工作可以通过两种不同的方法实现。
//    
//    1) 调用文件流的成员函数open。如
//    ofstream outfile;  //定义ofstream类(输出文件流类)对象outfile
//    outfile.open("f1.dat",ios::out);  //使文件流与f1.dat文件建立关联
//    第2行是调用输出文件流的成员函数open打开磁盘文件f1.dat，并指定它为输出文件， 文件流对象outfile将向磁盘文件f1.dat输出数据。ios::out是I/O模式的一种，表示以输出方式打开一个文件。或者简单地说，此时f1.dat是一个输出文件，接收从内存输出的数据。
//    
//    调用成员函数open的一般形式为：
//    文件流对象.open(磁盘文件名, 输入输出方式);
//    磁盘文件名可以包括路径，如"c:\new\\f1.dat"，如缺省路径，则默认为当前目录下的文件。
//    
//    2) 在定义文件流对象时指定参数
//    在声明文件流类时定义了带参数的构造函数，其中包含了打开磁盘文件的功能。因此，可以在定义文件流对象时指定参数，调用文件流类的构造函数来实现打开文件的功能。如
//    ostream outfile("f1.dat",ios::out);
//    一般多用此形式，比较方便。作用与open函数相同。
//
    
    
    
//    输入输出方式是在ios类中定义的，它们是枚举常量，有多种选择，见表13.6。
//    表13.6 文件输入输出方式设置值
//    方 式	作用
//    ios::in	以输入方式打开文件
//    ios::out	以输出方式打开文件（这是默认方式），如果已有此名字的文件，则将其原有内容全部清除
//    ios::app	以输出方式打开文件，写入的数据添加在文件末尾
//    ios::ate	打开一个已有的文件，文件指针指向文件末尾
//ios: :trunc	打开一个文件，如果文件已存在，则删除其中全部数据，如文件不存在，则建立新文件。如已指定了 ios::out 方式，而未指定ios: :app，ios::ate，ios: :in，则同时默认此方式
//    ios:: binary	以二进制方式打开一个文件，如不指定此方式则默认为ASCII方式
//    ios::nocreate	打开一个已有的文件，如文件不存在，则打开失败。nocrcate的意思是不建立新文件
//    ios:: noreplace	如果文件不存在则建立新文件，如果文件已存在则操作失败，replace 的意思是不更新原有文件
//    ios::in l ios::out	以输入和输出方式打开文件，文件可读可写
//    ios:: out | ios::binary	以二进制方式打开一个输出文件
//    ios::in l ios::binar	以二进制方式打开一个输入文件
    
    
    
    
//    几点说明：
//    1) 新版本的I/O类库中不提供ios::nocreate和ios::noreplace。
//    
//    2) 每一个打开的文件都有一个文件指针，该指针的初始位置由I/O方式指定，每次读写都从文件指针的当前位置开始。每读入一个字节，指针就后移一个字节。当文件指针移到最后，就会遇到文件结束EOF（文件结束符也占一个字节，其值为-1)，此时流对象的成员函数eof的值为非0值(一般设为1)，表示文件结束了。
//    
//    3) 可以用“位或”运算符“|”对输入输出方式进行组合，如表13.6中最后3行所示那样。还可以举出下面一些例子：
    
//    ios::in | ios:: noreplace  //打开一个输入文件，若文件不存在则返回打开失败的信息
//    ios::app | ios::nocreate  //打开一个输出文件，在文件尾接着写数据，若文件不存在，则返回打开失败的信息
//    ios::out l ios::noreplace  //打开一个新文件作为输出文件，如果文件已存在则返回打开失败的信息
//    ios::in l ios::out I ios::binary  //打开一个二进制文件，可读可写
//    
//    但不能组合互相排斥的方式，如 ios::nocreate l ios::noreplace。
//    
//    4) 如果打开操作失败，open函数的返回值为0(假)，如果是用调用构造函数的方式打开文件的，则流对象的值为0。可以据此测试打开是否成功。如
//    if(outfile.open("f1.bat", ios::app) ==0)
//        cout <<"open error";
//    或
//    if( !outfile.open("f1.bat", ios::app) )
//        cout <<"open error";
//    关闭磁盘文件
//    
//    在对已打开的磁盘文件的读写操作完成后，应关闭该文件。关闭文件用成员函数close。如
//    outfile.close( );  //将输出文件流所关联的磁盘文件关闭
//    所谓关闭，实际上是解除该磁盘文件与文件流的关联，原来设置的工作方式也失效，这样，就不能再通过文件流对该文件进行输入或输出。此时可以将文件流与其他磁盘文件建立关联，通过文件流对新的文件进行输入或输出。如
//    outfile.open("f2.dat",ios::app|ios::nocreate);
//    此时文件流outfile与f2.dat建立关联，并指定了f2.dat的工作方式。
    
    return 0;
}

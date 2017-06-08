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

struct student{

    char name[20];
    int num;
    int age;
    char sex;
    
};
struct NewStudent{
    int num;
    char name[20];
    float score;
};

void get_2_4_student(){

    NewStudent stud[5]={1001,"Li",85,1002,"Fun",97.5,1004,"Wang",54,1006,"Tan",76.5,1010,"ling",96};
    fstream iofile("/Users/liyang/Desktop/test.rtf",ios::in|ios::out|ios::binary);
    //用fstream类定义输入输出二进制文件流对象iofile
    if(!iofile)
    {
        cerr<<"open error!"<<endl;
        abort( );
    }
    for(int i=0;i<5;i++)  //向磁盘文件输出个学生的数据
        iofile.write((char *)&stud[i],sizeof(stud[i]));
    NewStudent stud1[5];  //用来存放从磁盘文件读入的数据
    for(int i=0;i<5;i=i+2)
    {
        iofile.seekg(i*sizeof(stud[i]),ios::beg);  //定位于第,2,4学生数据开头
        //先后读入个学生的数据,存放在stud1[0],stud[1]和stud[2]中
        iofile.read((char *)&stud1[i/2],sizeof(stud1[0]));
        //输出stud1[0],stud[1]和stud[2]各成员的值
        cout<<stud1[i/2].num<<" "<<stud1[i/2].name<<" "<<stud1[i/2].score<<endl;
    }
    cout<<endl;
    stud[2].num=1012;  //修改第个学生(序号为)的数据
    strcpy(stud[2].name,"Wu");
    stud[2].score=60;
    iofile.seekp(2*sizeof(stud[0]),ios::beg);  //定位于第个学生数据的开头
    iofile.write((char *)&stud[2],sizeof(stud[2]));  //更新第个学生数据
    iofile.seekg(0,ios::beg);  //重新定位于文件开头
    for(int i=0;i<5;i++)
    {
        iofile.read((char *)&stud[i],sizeof(stud[i]));  //读入个学生的数据
        cout<<stud[i].num<<" "<<stud[i].name<<" "<<stud[i].score<<endl;
    }
    iofile.close( );
}

int main(int argc, const char * argv[]) {
    
//    二进制文件不是以ASCII代码存放数据的，它将内存中数据存储形式不加转换地传送到磁盘文件，因此它又称为内存数据的映像文件。因为文件中的信息不是字符数据，而是字节中的二进制形式的信息，因此它又称为字节文件。
//    
//    对二进制文件的操作也需要先打开文件，用完后要关闭文件。在打开时要用ios::binary指定为以二进制形式传送和存储。二进制文件除了可以作为输入文件或输出文件外,还可以是既能输入又能输出的文件。这是和ASCII文件不同的地方。
//    用成员函数read和write读写二进制文件
//    
//    对二进制文件的读写主要用istream类的成员函数read和write来实现。这两个成员函数的原型为
//    istream& read(char *buffer,int len);
//    ostream& write(const char * buffer,int len);
//    字符指针buffer指向内存中一段存储空间。len是读写的字节数。调用的方式为：
//    a. write(p1,50);
//    b. read(p2,30);
//    上面第一行中的a是输出文件流对象，write函数将字符指针p1所给出的地址开始的50个字节的内容不加转换地写到磁盘文件中。在第二行中，b是输入文件流对象，read 函数从b所关联的磁盘文件中，读入30个字节(或遇EOF结束），存放在字符指针p2所指的一段空间内。

    
    student stud[3]={"Li",1001,18,'f',"Fun",1002,19,'m',"Wang",1004,17,'f'};

    ofstream outfile("/Users/liyang/Desktop/test.rtf",ios::binary);
    if(!outfile)
    {
        cerr<<"open error!"<<endl;
        abort( );//退出程序
    }
    
    for(int i=0;i<3;i++)
        outfile.write((char*)&stud[i],sizeof(stud[i]));
    outfile.close( );
    
//    用成员函数write向stud.dat输出数据，从前面给出的write函数的原型可以看出： 第1个形参是指向char型常变量的指针变量buffer，之所以用const声明，是因为不允许通过指针改变其指向数据的值。形参要求相应的实参是字符指针或字符串的首地址。现在要将结构体数组的一个元素（包含4个成员）一次输出到磁盘文件stud.dat。&tud[i] 是结构体数组第i个元素的首地址，但这是指向结构体的指针，与形参类型不匹配。因此 要用(char *)把它强制转换为字符指针。第2个参数是指定一次输出的字节数。sizeof (stud[i])的值是结构体数组的一个元素的字节数。调用一次write函数，就将从&tud[i]开始的结构体数组的一个元素输出到磁盘文件中，执行3次循环输出结构体数组的3个元素。
//    
//    其实可以一次输出结构体数组的个元素，将for循环的两行改为以下一行：
//        outfile.write((char*)&stud[0],sizeof(stud));
//    执行一次write函数即输出了结构体数组的全部数据。
//    
//    abort函数的作用是退出程序，与exit作用相同。
//    
//    可以看到，用这种方法一次可以输出一批数据，效率较高。在输出的数据之间不必加入空格，在一次输出之后也不必加回车换行符。在以后从该文件读入数据时不是靠空格作为数据的间隔，而是用字节数来控制。
    
    
    
    student studd[3];
    int i;
    ifstream infile("/Users/liyang/Desktop/test.rtf",ios::binary);
    if(!infile)
    {
        cerr<<"open error!"<<endl;
        abort( );
    }
    for(i=0;i<3;i++)
        infile.read((char*)&studd[i],sizeof(studd[i]));
    infile.close( );
    for(i=0;i<3;i++)
    {
        cout<<"NO."<<i+1<<endl;
        cout<<"name:"<<studd[i].name<<endl;
        cout<<"num:"<<studd[i].num<<endl;;
        cout<<"age:"<<studd[i].age<<endl;
        cout<<"sex:"<<studd[i].sex<<endl<<endl;
    }
    
    
//    请思考，能否一次读入文件中的全部数据，如：
//    infile.read((char*)&stud[0],sizeof(stud));
//    答案是可以的，将指定数目的字节读入内存，依次存放在以地址&tud[0]开始的存储空间中。要注意读入的数据的格式要与存放它的空间的格式匹配。由于磁盘文件中的数据是从内存中结构体数组元素得来的，因此它仍然保留结构体元素的数据格式。现在再读入内存，存放在同样的结构体数组中，这必然是匹配的。如果把它放到一个整型数组中，就不匹配了，会出错
    
    
    
    cout <<"**************************"<<endl;
//    与文件指针有关的流成员函数
//    
//    在磁盘文件中有一个文件指针，用来指明当前应进行读写的位置。在输入时每读入 一个宇节，指针就向后移动一个字节。在输出时每向文件输出一个字节，指针就向后移动 一个字节，随着输出文件中字节不断增加，指针不断后移。对于二进制文件，允许对指针进行控制，使它按用户的意图移动到所需的位置，以便在该位置上进行读写。文件流提供 一些有关文件指针的成员函数。为了查阅方便，将它们归纳为表13.7，并作必要的说明。
//    
//    表13.7 文件流与文件指针有关的成员函数
//    成员函数	作 用
//    gcount()	返回最后一次输入所读入的字节数
//    tellg()	返回输入文件指针的当前位置
//    seekg(文件中的位置）	将输入文件中指针移到指定的位置
//    seekg(位移量, 参照位置）	以参照位置为基础移动若干字节
//    tellp()	返回输出文件指针当前的位置
//    seekp(文件中的位置）	将输出文件中指针移到指定的位置
//    seekp(位移量, 参照位置）	以参照位置为基础移动若干字节
//                            几点说明：
//                            1) 这些函数名的第一个字母或最后一个字母不是g就是p。带 g的是用于输入的函数（g是get的第一个字母，以g作为输入的标识，容易理解和记忆）， 带p的是用于输出的函数（P是put的第一个字母，以P作为输出的标识）。例如有两个 tell 函数，tellg用于输入文件，tellp用于输出文件。同样，seekg用于输入文件，seekp用于输出文件。以上函数见名知意，一看就明白，不必死记。
//                      
//                      如果是既可输入又可输出的文件，则任意用seekg或seekp。
//                      
//                      2) 函数参数中的“文件中的位置”和“位移量”已被指定为long型整数，以字节为单位。“参照位置”可以是下面三者之一：
//                ios::beg  文件开头(beg是begin的缩写)，这是默认值。
//                ios::cur  指针当前的位置(cur是current的缩写)。
//                ios::end  文件末尾。
//                它们是在ios类中定义的枚举常量。举例如下：
//                infile.seekg(100);  //输入文件中的指针向前移到字节位置
//                infile.seekg(-50,ios::cur);  //输入文件中的指针从当前位置后移字节
//                outfile.seekp(-75,ios::end);  //输出文件中的指针从文件尾后移字节
//                随机访问二进制数据文件
//                
//                一般情况下读写是顺序进行的,即逐个字节进行读写。但是对于二进制数据文件来说,可以利用上面的成员函数移动指针,随机地访问文件中任一位置上的数据,还可以修改文件中的内容。
//                
//                [例13.16] 有个学生的数据,要求:
//                把它们存到磁盘文件中;
//                将磁盘文件中的第,3,5个学生数据读入程序,并显示出来;
//                将第个学生的数据修改后存回磁盘文件中的原有位置。
//                从磁盘文件读入修改后的个学生的数据并显示出来。
//                
//                要实现以上要求,需要解决个问题：
//                由于同一磁盘文件在程序中需要频繁地进行输入和输出，因此可将文件的工作方式指定为输入输出文件，即ios::in|ios::out|ios::binary。
//                正确计算好每次访问时指针的定位，即正确使用seekg或seekp函数。
//                正确进行文件中数据的重写(更新)。
//                
//                可写出以下程序：
    
    
    
    get_2_4_student();
    
    
    
    return 0;
}

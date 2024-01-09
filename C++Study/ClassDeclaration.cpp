#include <iostream>
#include <cstring>
using namespace std;

class Student{
public:                 //默认访问限定符为private
    char name[50];
    int num;
    int age;
    char sex;
    /**
     * 类似于全局变量，不实例化类也占用空间
     * 需要在类外声明或声明并初始化
     * 不能用构造函数的参数初始化表的形式对静态变量进行初始化操作
     */
    static char master[50];
    static int year;
    Student(){
        cout<<"hello"<<endl;
    };
    Student(int num){
        memset(name,'\0',49); //内存49字节赋值为'\0' 
        this->num = num;
        age = 20;
        sex = 'f';
    }
    Student(char* t_name,char t_sex,int t_num,int t_age):sex(t_sex),age(t_age),num(t_num){
        strcpy(name,t_name);        // 用参数初始化表初始化赋值
    }
    Student(Student& s):sex(s.sex),age(s.age),num(s.num){       //拷贝构造函数
        strcpy(name,s.name);
    }

    /**
     * 析构函数：
     * 对象声明周期结束时调用
     * 无参数无返回值，不能被重载，只能有一个析构函数
     */
    ~Student(){
        cout<<"调用析构函数"<<endl;
    }

    Student& operator=(const Student& stud){    //等号运算符的重载，stud不可修改 ，引用常量 
	    if (this == &stud) // 自赋值判断
		{
		    return *this;
		}
        this->sex = stud.sex;
        this->num = 77;
        this->age = stud.age;
   		return *this;
    }
    void set_sex(char ch){  //在类体中定义的函数，C++会默认将其作为inline函数来处理
        sex = ch;
    }
    void set_age(int age){
        this->age= age;
    }
    void print_age(){
        cout<<"age = "<<age<<endl;
    }
    void print_age(int age){        //函数重载
        cout<<"age = "<<age<<endl;
    }
    static void show_month(){       //静态成员函数不能调用本类的非静态成员变量，在类内实现 
        cout<<month<<endl;
    }
    
    static void show();       //静态函数的声明，但在类外部实现
	       
    const void print_name();   //函数的声明，但在类外部实现
private:
    static int month;



};

//在类外定义的函数C++会将其作为普通的类的成员函数来处理
const void Student::print_name() {
    cout<<"name = "<<this->name<<endl;   //this指针可写可不写
}

void Student::show() {           //在类外实现静态函数 ,不需要加static 
    cout<<"name = "<<endl;  
}

char Student::master[] = {0};       //在类外声明一定要加类型char , 函数内改变的时候不用加 
int Student::year=20;                //必须是static才能这样写，一般成员函数不可以 
int Student::month = 7;  //声明并初始化  month 之前已经定义才行 

/**
 * 子类继承父类时，也将父类私有成员变量继承了过来，只是对子类不可见，不可操作。
 *
 * C++中，父类存在共有或保护函数对其私有成员变量进行操作时,
 * 子类可继承其函数对同样继承自父类的私有成员变量进行操作。
 */
class XiaoStudent:public Student{  //公有继承：保留原有访问限定符
public:
    XiaoStudent():Student(){    //调用父类构造函数

    }
    XiaoStudent(int a):XiaoStudent(){   //调用本类其他已直接或间接调用父类构造函数的的构造函数
        cout<<"小"<<endl;
    }
    int yuwen_score;
    int shuxue_score;               //默认调用父类析构函数

    /**
     * 虚函数：使用基类的指针，指向派生类的对象，调用虚函数的时候，最后调用的是派生类的函数
     * 在父类声明  virtual
     */
    virtual void shangke(){
        cout<<"小学生上课"<<endl;
    }
};

class ZhongStudent:public XiaoStudent{
public:
    void shangke(){
        cout<<"中学生上课"<<endl;
    }
    int wuli_score;
    int huaxue_score;

};
int main() {
    Student stu;                    //调用无参构造
    Student stu1(11111);       //调用有参构造
    stu = stu1;                 //对象的赋值，=重写 
    Student stu2(stu1);         //用拷贝构造函数对对象赋值
    cout<<(int*)stu.name<<endl;    //赋值后变量的值改变了，地址没改变
    cout<<(int*)stu1.name<<endl;
    Student* pstu = new Student(2021);
    pstu->age = 19;             //用指针的方式调用成员变量

    cout<<Student::year<<endl;

    ZhongStudent zhong;
    XiaoStudent xiao = zhong;    //子类向父类转换,只是将子类中的父类属性部分赋值给了父类对象，方法还是父类方法。
    xiao.shangke();          //小学生上课

    XiaoStudent* x = &zhong;     //子类指针向父类指针转换,只是指针类型变了，指针内容并没变
    // “指针类型”会教导编译器如何解析某个特定地址中的内存内容及其大小。
    x->shangke();               //调用虚函数,中学生上课

    XiaoStudent*xx = new ZhongStudent();
    xx->shangke();              //调用虚函数,中学生上课

    /**
     * 由x所指的内存中的虚函数表的shangke()的位置已经被ZhongStudent::shangke()函数地址所取代
     */

    /**
     *  对象名： 通过对象名访问虚函数的时候，此时采用的是静态联编。调用哪个类的函数取决于定义对象名的类型。对象类型是基类时，就调用基类的函数；对象类型是子类时，就调用子类的函数。
        指针： 通过指针访问虚函数的时候，编译器根据指针所指对象的类型来决定要调用哪个函数（动态联编），而与指针本身的类型无关
        引用： 与指针访问虚函数类似。不同之处在于，引用一经声明后，引用变量本身无论如何改变，其调用的函数就不会在改变，始终指向其开始定义时的函数。引用在一定程度上提高了代码的安全性，可以将引用理解为一种“受限制的指针”。
     */
//    Student stu1 = {"jack",1001,18,'m'};  //类的初始化赋值

    return 0;
}

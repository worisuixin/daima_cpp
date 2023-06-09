#include<iostream>//输入输出流库，输出结果
using namespace std;//声明使用标准命名空间，使用std命名空间标准库
class Complex{//定义复数类 
 private:
     double real; //实部
     double imag; //虚部  私有成员实部和虚部

 public: //构造函数，初始化实部和虚部
    Complex(double r=0,double i=0):real(r),imag(i){}

    Complex add(const Complex& other)const{//加法运算add，返回一个新的复数
        Complex result;
        result.real=this->real+other.real; //this->是用来访问当前对象变量的指针
        result.imag=this->imag+other.imag;
        return result;
    }

    void show()const{//显示复数
        cout<<this->real<<"+"<<this->imag<<"i"<<endl;
    }

    Complex operator+(const Complex& other)const{//重新加载运算符，使两个复数直接相加
        return this->add(other);
    }

    Complex& operator=(double val){//重新加载运算符，一个复数直接赋实数
        this->real=val;
        this->imag=0;
        return *this;//this 指针的解引用
    }
};
int main(){//主函数
    Complex c1(3,5);//复数初始化
    Complex c2=4.5;//实数初始化
    c1=c1+c2; //相加，结果保留c1中
    c1.show();//输出结果
    return 0;
}
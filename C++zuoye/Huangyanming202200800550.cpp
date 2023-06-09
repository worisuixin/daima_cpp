#include<iostream>
using namespace std;

class Rectangle{
private:
    double x;
    double y;
    double length;
    double width;
public:
    Rectangle(double x=0,double y=0,double length=0,double width=0);
    double getX();
    double getY();
    double getLength();
    double getWidth();
    double area();
};

Rectangle::Rectangle(double x,double y,double length,double width){
this->x=x;
this->y=y;
this->length=length;
this->width=width;
}

double Rectangle::getX(){
return this->x;
}

double Rectangle::getY(){
return this->y;
}

double Rectangle::getLength(){
return this->length;
}

double Rectangle::getWidth(){
return this->width;
}

double Rectangle::area(){
return this->length*this->width;
}

bool cross(Rectangle r1,Rectangle r2){
if((r1.getX()<=r2.getX()+r2.getLength())&&(r1.getY()<=r2.getY()+r2.getWidth())&&
(r1.getX()+r1.getLength()>=r2.getX())&&(r1.getY()+r1.getWidth()>=r2.getY()))
    return true;
else
    return false;
}

double area(Rectangle r1,Rectangle r2){
double x1=max(r1.getX(),r2.getX());
double y1=max(r1.getY(),r2.getY());
double x2=min(r1.getX()+r1.getLength(),r2.getX()+r2.getLength());
double y2=min(r1.getY()+r1.getWidth(),r2.getY()+r2.getWidth());
if((x1>=x2)||(y1>=y2))
    return 0.0;
else
    return (x2-x1)*(y2-y1);
}

int main(){
    Rectangle r1,r2,r3,r4,r5;
    double x,y,length,width;

    cout<<"请依次输入矩形1的左下角坐标(x,y)、长度和宽度:"<<endl;
    cin>>x>>y>>length>>width;
    r1=Rectangle(x,y,length,width);

    cout<<"请依次输入矩形2的左下角坐标(x,y)、长度和宽度:"<<endl;
    cin>>x>>y>>length>>width;
    r2=Rectangle(x,y,length,width);

    if(cross(r1,r2)){
        cout<<"两个矩形相交!"<<endl;
        cout<<"相交面积为:"<<area(r1,r2)<<endl;
    }
    else
        cout<<"两个矩形不相交!"<<endl;

    cout<<"请依次输入矩形3的左下角坐标(x,y)、长度和宽度:"<<endl;
    cin>>x>>y>>length>>width;
    r3=Rectangle(x,y,length,width);

    cout<<"请依次输入矩形4的左下角坐标(x,y)、长度和宽度:"<<endl;
    cin>>x>>y>>length>>width;
    r4=Rectangle(x,y,length,width);

    cout<<"请依次输入矩形5的左下角坐标(x,y)、长度和宽度:"<<endl;
    cin>>x>>y>>length>>width;
    r5=Rectangle(x,y,length,width);

    Rectangle rects[]={r1,r2,r3,r4,r5};
    int min;
    for(int i=0;i<4;i++){
        min=i;
        for(int j=i+1;j<5;j++){
            if(rects[j].area()<rects[min].area())
                min=j;
        }
        if(min!=i)
            swap(rects[i],rects[min]);
    }
    for(int i=0;i<5;i++){
        cout<<"矩形"<<i+1<<"的左下角坐标为("<<rects[i].getX()<<","<<rects[i].getY()<<")，长为"
            <<rects[i].getLength()<<"，宽为"<<rects[i].getWidth()<<"，面积为"<<rects[i].area()<<endl;
    }
    return 0;
}
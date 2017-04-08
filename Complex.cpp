#include<iostream>

using namespace std;

class Complex{
int x,y;
public:
friend ostream &operator<<(ostream &dout,const Complex c);
friend istream &operator>>(istream &in,Complex &c);
Complex operator+(Complex c);
Complex operator-(Complex c);
Complex operator-();
Complex operator++();
Complex operator++(int);
void operator=(Complex);
};
/*Overloading insertion(<<) operator using operator overloading*/
ostream &operator<<(ostream &dout,const Complex c)
{
if(c.y >0){
dout<<"The Complex Number is:"<<c.x<<"+i"<<c.y;

}

else{

dout<<"The Complex Number is:"<<c.x<<"-i"<<(-c.y);


}

return dout;
}
/*Overloading extraction(>>) operator using operator overloading*/

istream &operator>>(istream &in,Complex &c){
cout<<"Enter the Complex Number:\n";
cout<<"----------------------------\n";
cout<<"The Real Part:";
in>>c.x;
cout<<"The Imaginary Part:";
in>>c.y;
cout<<"----------------------------\n";
return in;
}
Complex Complex::operator+(Complex c){
Complex temp;
temp.x=c.x+x;
temp.y=c.y+y;
return temp;

}
Complex Complex::operator-(Complex c){
Complex temp;
temp.x=x-c.x;
temp.y=y-c.y;
return temp;

}
Complex Complex::operator-(){
Complex temp;
temp.x=-x;
temp.y=-y;
return temp;

}

Complex Complex::operator++(){
Complex temp;
temp.x=++x;
temp.y=++y;
return temp;
}
Complex Complex::operator++(int){
Complex temp;
temp.x=x++;
temp.y=y++;
return temp;
}
void Complex::operator=(Complex c){
x=c.x;
y=c.y;


}
int main(void){
Complex c,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
cin>>c;
cin>>c1;
cout<<"Compelex number addition\n";
c2=c+c1;
cout<<"Compelex number substraction\n";
c3=c-c1;
cout<<"Compelex number negation\n";
c4=-c;
c5=-c1;
c6=++c;
c7=++c1;
c8=c++;
c9=c1++;
c10=c;
cout<<c<<endl;
cout<<c1<<endl;
cout<<c2<<endl;
cout<<c3<<endl;
cout<<c4<<endl;
cout<<c5<<endl;
cout<<c6<<endl;
cout<<c7<<endl;
cout<<c8<<endl;
cout<<c9<<endl;
cout<<c10<<endl;
}

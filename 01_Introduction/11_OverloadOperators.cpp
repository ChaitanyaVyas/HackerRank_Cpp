//Operator Overloading

#include<iostream>
#include <complex>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator+ (Complex& left, Complex& right){
    Complex out;
    out.a = left.a + right.a;
    out.b = left.b + right.b;
    return out;
}

ostream& operator<< (ostream& stream, Complex& complex){
    std::string real = std::to_string(complex.a);
    std::string immaginary = std::to_string(complex.b);
    stream.write(real.c_str(), real.size());
    stream.write("+i", 2);
    stream.write(immaginary.c_str(), immaginary.size());

    return stream;
}

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
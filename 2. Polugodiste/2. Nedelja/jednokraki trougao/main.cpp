#include <cmath>
#include <iostream>
using namespace std;

class jednokokrakiTrougao {
    private:
        double a;
        double b;


    public:

        jednokokrakiTrougao() { a = 3; b = 4; }

        jednokokrakiTrougao(double aa, double bb){
            a=aa;
            b=bb;
        }
        void setA(double aa) { a = aa; }
        void setB(double bb) { b = bb; }

        double getA()  { return a; }
        double getB() { return b; }

        double getO() const{ return a + 2*b; }
        double getP() const {
            double s = (a + 2*b)/ 2;
            return sqrt(s*(s-a)*(s-b)*(s-b));
        }

};

int main(){

    jednokokrakiTrougao t1;
    jednokokrakiTrougao t2(5.5,4.2);

    cout<<t1.getA()<<endl;
    t1.setA(2.4);
    cout<<t1.getA()<<endl;

    cout << "Duzina stranice a: " << t1.getA() << endl;
    cout << "Duzina stranice b: " << t1.getB() << endl;
    cout << "Obim: " << t1.getO() << endl;
    cout << "Povrsina: " << t1.getP() << endl << endl;

    t1.setA(6);
    t1.setB(8);

    cout << "Duzina stranice a: " << t1.getA() << endl;
    cout << "Duzina stranice b: " << t1.getB() << endl;
    cout << "Obim: " << t1.getO() << endl;
    cout << "Povrsina: " << t1.getP() << endl;


    return 0;
}

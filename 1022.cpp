#include <iostream>
#include <cmath>
 
using namespace std;
 
int mdc(int a, int b) {
    if (b == 0)
        return a;
    return mdc(b, a % b);
}
 
class Racional {
    int num;
    int den;
    char sinal;
    public:
        Racional() { sinal = ' '; }
        Racional(int n, int d) {
            num = n;
            den = d;
            sinal = ' ';
        }
        static Racional soma(Racional n1, Racional n2) {
            Racional res;
            res.num = n1.num * n2.den + n2.num * n1.den;
            res.den = n1.den * n2.den;
            return res;
        }
 
        static Racional sub(Racional n1, Racional n2) {
            Racional res;
            res.num = n1.num * n2.den - n2.num * n1.den;
            res.den = n1.den * n2.den;
            if(res.num < 0 || res.den < 0) {
                res.num = abs(res.num);
                res.den = abs(res.den);
                res.sinal = '-';
            }
            return res;
        }
        static Racional mult(Racional n1, Racional n2) {
            Racional res;
            res.num = n1.num * n2.num;
            res.den = n1.den * n2.den;
            return res;
        }
        static Racional div(Racional n1, Racional n2) {
            Racional res;
            res.num = n1.num * n2.den;
            res.den = n2.num * n1.den;
            return res;
        }
        void simplifica() {
            int x = mdc(num, den);
            num /= x;
            den /= x;
        }
        void imprimi() {
            if(sinal != ' ')
                cout << sinal << num << "/" << den;
            else
                cout << num << "/" << den;
        }
};
 
void operacao(Racional n1, Racional n2, char op) {
    Racional res;
    switch(op) {
        case '+':
            res = Racional::soma(n1, n2);
            break;
        case '-':
            res = Racional::sub(n1, n2);
            break;
        case '*':
            res = Racional::mult(n1, n2);
            break;
        case '/':
            res = Racional::div(n1, n2);
            break;
    }
    res.imprimi(); cout << " = ";
    res.simplifica();
    res.imprimi(); cout << endl;
}
 
int main(){
 
    int qtd, n, d;
    char aux, op;
     
    cin >> qtd;
    while(qtd){
        cin >> n;
        cin >> aux;
        cin >> d;
        Racional n1(n,d);
 
        cin >> op;
 
        cin >> n;
        cin >> aux;
        cin >> d;
        Racional n2(n,d);
 
        operacao(n1, n2, op);
 
        qtd--;
    }
 
 
}

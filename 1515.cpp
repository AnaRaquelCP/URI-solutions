#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main()
{
    int aux,num;
     
    string nome, nome_ant;
    int A, T;
    cin >> num;
 
    do{
        int ant=2114;
        aux = num;
        while(aux--){
            cin >> nome >> A >> T;
            if ((A-T) < ant){
                ant = A - T;
                nome_ant = nome;
            }
        }
        cout << nome_ant << endl;
        cin >> num;
    }while(num!=0);
 
    return 0;
}

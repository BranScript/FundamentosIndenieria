#include<iostream>
#include"funcionFactorial.cpp"
using namespace std;

void factorial(){
    int num, factor = 1;  
    cout << "Ingrese Numero: ";
    cin >> num;
    cout << "El factorial de " << num << " es: " << funcionFactorial(num) << endl;
    
    
}


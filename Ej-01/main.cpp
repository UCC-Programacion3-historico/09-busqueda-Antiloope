#include <iostream>

void fn(int x, int v[], int ini, int fin, int pos, bool retorno);

void fn(int v[],int pos,int fin,int x);

int main() {
    std::cout << "Ejercicio 09/01\n" << std::endl;
    return 0;
}

void fn(int v[],int pos,int fin,int x){
    if(pos >= fin || v[pos] == x) return;
    fn(v,pos+1,fin,x);
}

void fn(int x, int v[], int ini, int fin, int pos, bool retorno) {
    pos = ini;
    retorno = false;
    while ((pos <= fin) && (!retorno)) {
        if (v[pos] == x) {
            retorno = true;
        } else
            ++pos;
    }
}

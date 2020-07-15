/*
Deseo recuperar solo los numeros y los caracteres del alfabeto
Eliminando los caracteres extraños
*/

/*
Funciones extrar :
isalnum : funcion que verifica que el argumento sea un numero o un elemento del alfabeto
metodo erase : metodo para eliminar/borrar elementos
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
string str;

// Entrada (input) de la informacion
cout<< "Ingresa una cadena " << endl;
getline(cin, str);

int i = 0 ; // usada como conjunto de indices
int len = str.length(); // numero de elementos de la cadena ingresada por teclado

while(i < len){
    // eliminamos los elementos que no sean numeros o caracteres del alfabeto
    // y tambien eliminaremos los espacios en blanco
    if( !isalnum(str[i]) || str[i] == ' '){
        str.erase(i,1);
        len = len -1 ;
    }
    else{
        i = i+1 ;
    }
} // fin del while
cout<< "La cadena limpia es : " << str << endl;



















}























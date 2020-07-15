/*
Conteo de la cantidad de letras (las que estan en el alfabeto)
getline para almacenar la cadena
*/
#include<iostream>
#include<string>
using namespace std;
int main(){

string str;

// Entrada (input) de la informacion
cout<< "Ingresa una cadena " << endl;
getline(cin, str);

/*
Funciones extras :
strlen : funcion que cuente la cantidad de elementos en una variable string
isalpha : dado un caracter, esta funcion debe verificar que dicho caracter pertenece al alfabeto
*/

/*
cout << "La cadena ingresada es : " << str << endl;
cout << "Numero de elementos : " << str.length() << endl;

str : variable de tipo string (objeto)
length : es un metodo de este objeto (string)

str.lenght : aplicar el metodo lenght al objeto str
*/

int num = 0 ;// num sirve para contar los elementos ( de mi variable str ) que pertenecen al alfacebo

// Operaciones :
for(int i = 0 ; i <= str.length() ; i++){
    if(isalpha(str[i])){
        num = num +1 ;
    }
}

// mostramos la salida
cout << "La cadena ingresada es : " << str << endl;
cout << "La cantidad de elementos del alfabeto es : " << num << endl;

















system("pause");
return 1;
}































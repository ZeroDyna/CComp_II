#include <iostream>
#include <string>

using namespace std;


string convertirNumero(int numero) {

    string unidades[] = { "", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve" };
    string decenas[] = { "", "diez" ,"veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa" };
    string centenas_diferentes[] = { "quin","sete", "nove" };
    string especiales[] = { "diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve" };

    if (numero > 0 && numero <= 9) {
        return unidades[numero];
    }
    if (numero > 9 && numero <= 19) {
        return especiales[numero - 10];
    }
    if (numero == 20) {
        return "veinte";
    }
    if (numero > 20 && numero <= 29) {
        int decena = numero / 10;
        int unidad = numero % 10;
        if (unidad == 0) {
            return decenas[decena];
        }
        else {
            return decenas[decena] + unidades[unidad];
        }
    }
    if (numero > 29 && numero <= 99) {
        int decena = numero / 10;
        int unidad = numero % 10;
        if (unidad == 0) {
            return decenas[decena];
        }
        else {
            return decenas[decena] + " y " + unidades[unidad];
        }
    }
    if (numero > 99 && numero <= 199) {
        int centena = numero / 100;
        int resto = numero % 100;
        if (resto == 0) {
            return unidades[centena] + "cien";
        }
        else {
            return "ciento " + convertirNumero(resto);
        }
    }
    if (numero > 199 && numero <= 499) {
        int centena = numero / 100;
        int resto = numero % 100;
        if (resto == 0) {
            return unidades[centena] + "cientos";
        }
        else {
            return unidades[centena] + "cientos " + convertirNumero(resto);
        }
    }
    if (numero > 499 && numero <= 599) {
        int centena = numero / 100;
        int resto = numero % 100;
        if (resto == 0) {
            return centenas_diferentes[0] + "ientos";
        }
        else {
            return centenas_diferentes[0] + "ientos " + convertirNumero(resto);
        }
    }
    if (numero > 599 && numero <= 699) {
        int centena = numero / 100;
        int resto = numero % 100;
        if (resto == 0) {
            return unidades[centena] + "cientos";
        }
        else {
            return unidades[centena] + "cientos " + convertirNumero(resto);
        }
    }
    if (numero > 699 && numero <= 799) {
        int centena = numero / 100;
        int resto = numero % 100;
        if (resto == 0) {
            return centenas_diferentes[1] + "cientos";
        }
        else {
            return centenas_diferentes[1] + "cientos " + convertirNumero(resto);
        }
        }
    if (numero > 899 && numero <= 999) {
        int centena = numero / 100;
        int resto = numero % 100;
        if (resto == 0) {
            return centenas_diferentes[2] + "cientos";
        }
        else {
            return centenas_diferentes[2] + "cientos " + convertirNumero(resto);
        }
    }

        if (numero >= 1000 && numero <= 999999) {
            int millar = numero / 1000;
            int resto = numero % 1000;
            if (resto == 0) {
                return convertirNumero(millar) + " mil";
            }
            else {
                return convertirNumero(millar) + " mil " + convertirNumero(resto);
            }
        }
        if (numero == 1000000) {
            return "un millon";
        }
        else {
            return "Numero fuera de rango";
        }
    }


int main() {
    int ocion;
    int numero;
    while (1) {
        cout << "ingrese la opcion que desea realizar: \n 1. Convertir numeros \n 2. salir \n";
        cin >> ocion;
        if (ocion == 1) {
            cout << "Ingrese un numero entre 1 y 1,000,000: ";
            cin >> numero;

            if (numero >= 1 && numero <= 1000000) {
                string numeroEnLetras = convertirNumero(numero);
                cout << "El numero en letras es: " << numeroEnLetras <<" \n "<< endl;
            }
            else {
                cout << "Numero fuera de rango. \n" << endl;
            }

        }
        else {
            break;
        }
     
    }

    return 0;
}

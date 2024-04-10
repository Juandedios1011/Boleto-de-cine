#include <stdio.h>
#include <stdlib.h>
//Crea un boleto de cine
//Creamos primero una funcion que nos imprima lo que seria el formato del boleto
void Boleto(const char* nombre, const char* apellido, const char* cedula,
                 const char* sala, const char* puesto, const char* horafuncion,
                 const char* pelicula) {
    // Formato del boleto
    const char* boleto = "----------------------------------------------\n"
                         "      CINEMESSI - BOLETO CAMPEON DEL MUNDO\n"
                         "----------------------------------------------\n"
                         "Pelicula: %s\n"
                         "Sala: %s\n"
                         "Hora de la funcion: %s\n"
                         "Asiento: %s\n"
                         "----------------------------------------------\n"
                         "Nombre: %s %s\n"
                         "Cedula: %s\n"
                         "----------------------------------------------\n"
                         "¡Disfrute su pelicula. Feliz noche!\n"
                         "----------------------------------------------\n";

    //Creamos lo que seria el archivo donde va a estar guardado el boleto
    FILE* archivo = fopen("boleto_cine.txt", "w");
    if (archivo) {
        fprintf(archivo, boleto, pelicula, sala, horafuncion, puesto, nombre,
                apellido, cedula);
        fclose(archivo);
        printf("boleto_cine.txt\n");
    } else {
        printf("No se creo\n");
    }
}

int main() {
    Boleto("Juan", "Quevedo", "31343576", "Sala 5", "Fila B, Asiento 12",
                "12:30", "LAS CRONICAS DE MESSI");
    return 0;
}

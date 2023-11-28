#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct libro
{
    char titulo[50];
    char autor[50];
    char editorial[50];
    int numero_ejemplares;
    time_t anio_publicacion;
} libro;

typedef struct usuarios
{
    char nombre[40];
    char apellido[40];
    int id_usuario;
    int libros_prestados;
    time_t fecha_nac;
} usuarios;

typedef struct prestamos_devoluciones
{
    struct libro *libro_prestado; // puntero al libro prestado
    struct usuarios *usuario;     // puntero al usuario que tiene el libro prestado
    time_t fecha_prestamo;        // fecha de prestamo (puede ser un timestamp)
    time_t fecha_devolucion;      // fecha de devolucion (puede ser un timestamp)

} prestamos_devoluciones;

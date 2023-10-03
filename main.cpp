using namespace std;
#include <iostream>
#include <vector>
#include "clases.h"

int main() {
    //Listado libros
    Libro libro1("1984", "George Orwell", 1949, "Ficción");
    Libro libro2("Cien años de soledad", "Gabriel García Márquez", 1967, "Ficción");
    Libro libro3("Matar un ruiseñor", "Harper Lee", 1960, "Ficción");
    Libro libro4("El Gran Gatsby", "F. Scott Fitzgerald", 1925, "Ficción");
    Libro libro5("Don Quijote de la Mancha", "Miguel de Cervantes", 1605, "Clásico");
    Libro libro6("El Hobbit", "J.R.R. Tolkien", 1937, "Fantasía");
    Libro libro7("Harry Potter y la piedra filosofal", "J.K. Rowling", 1997, "Fantasía");
    Libro libro8("Crimen y castigo", "Fyodor Dostoevsky", 1866, "Ficción");
    Libro libro9("Las aventuras de Sherlock Holmes", "Arthur Conan Doyle", 1892, "Misterio");
    Libro libro10("Moby-Dick", "Herman Melville", 1851, "Aventura");
    Libro libro11("Canción de hielo y fuego", "George R.R. Martin", 1996, "Fantasía");
    Libro libro12("Orgullo y prejuicio", "Jane Austen", 1813, "Clásico");
    Libro libro13("En busca del tiempo perdido", "Marcel Proust", 1913, "Clásico");
    Libro libro14("Los juegos del hambre", "Suzanne Collins", 2008, "Ciencia ficción");
    Libro libro15("El Señor de los Anillos", "J.R.R. Tolkien", 1954, "Fantasía");
    Libro libro16("Los pilares de la Tierra", "Ken Follett", 1989, "Histórica");

    //Listado usuarios
    Usuario usuario1("Juan", "Pérez", "12345678A", libro1);
    Usuario usuario2("María", "González", "87654321B", libro2);
    Usuario usuario3("Pedro", "Rodríguez", "23456789C", libro3);
    Usuario usuario4("Laura", "Fernández", "76543210D", libro4);
    Usuario usuario5("Carlos", "López", "34567890E", libro5);

    return 0;
}
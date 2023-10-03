//
// Created by Diego on 10/3/2023.
//

#ifndef ACTIVIDAD_COLABORATIVA_01_CLASES_H
#define ACTIVIDAD_COLABORATIVA_01_CLASES_H

using namespace std;
#include <iostream>
#include <vector>

void comprobarLibrosDisp(vector <class Libro> ListadoLibros) {
     for (int i=0;i<ListadoLibros.size();i++) {
        if (ListadoLibros[i].getCogido()==true) {
            cout << "Libro Disponible: " << ListadoLibros[i].getNombre() << endl;
        }
     }
}



class Libro{
private:
    string nombre;
    string autor;
    int anio;
    string categoria;
    bool cogido;
public:
    Libro() : nombre(""), autor(""), anio(0), categoria(""), cogido(false) {}

    Libro(string _nombre, string _autor, int _anio, string _categoria){     // Constructor
        nombre = _nombre;
        autor = _autor;
        anio = _anio;
        categoria = _categoria;
    }
    void imprimirLibro(){
        cout << nombre << " - " << autor << " - " << anio << " - " << categoria << endl;
    }
    bool getCogido(){
    return cogido;
    }
    void setCogido(bool t){
        cogido = t;
    }
    string getNombre(){
        return nombre;
    }

    string getNombre() {
        return nombre;
    }
    
};

class Usuario{
private:
    string nombre;
    string apellido;
    string dni;
    class Libro libro;
    vector<class Libro> historial;
public:
    Usuario(string _nombre, string _apellido, string _dni, class Libro _libro){}
    void addLibroAHistorial(class Libro libro){

        historial.push_back(libro);
    }
    bool enPosesionDeLibro(){
        bool enPosesion = false;
        for(int i = 0; i < historial.size(); i++){
            if(historial[i].getCogido()){
                enPosesion = true;
            }
        }
    return enPosesion;
    }
    void imprimirUsuario(){
        cout << "Nombre: " << nombre << "\nApellido: " << apellido << "\nDNI: " << dni << endl;
        if (historial.size() == 0){cout << "Libro: Vacio";}
        else {libro.imprimirLibro();}
        cout << endl << endl;
    }
    class Libro getLibroEnPosesion(){
        for(int i = 0; i < historial.size(); i++){
            if(historial[i].getCogido()){
                historial[i].setCogido(false);     
            }
            return historial[i];
        }
       
    }

};

class Biblioteca{
private:
    vector <class Usuario> vecUsuarios;
    vector <class Libro> vecLibros;
public:
    Biblioteca(){}      // Constructor
    void agregarUsuarios(class Usuario nuevoUsuario){
        vecUsuarios.push_back(nuevoUsuario);
    }
    void imprimirUsuarios(){
        cout << "- - - - - - USUARIOS - - - - - -\n";
        for (int i = 0; i < vecUsuarios.size(); i++){
            vecUsuarios[i].imprimirUsuario();
        }
    }
    void imprimirLibros(){
        cout << "- - - - - - LIBROS - - - - - -\n";
        for (int i = 0; i < vecLibros.size(); i++){
            vecLibros[i].imprimirLibro();
        }
    }


    class Libro findLibro(string n){
        bool found = false;
        int ub = -1;
        for(int i = 0; i < vecLibros.size(); i++){
            if(vecLibros[i].getNombre() == n){
                if(!vecLibros[i].getCogido){
                vecLibros[i].setCogido(true);
                ub = i;
                i = vecLibros.size();
                found = true;
                }
            }
        }

        if(found){
            return vecLibros[ub];
        }else{
            cout << "Libro no encontrado o prestado" << endl;
        }
    }

    void sacarLibro(string nombre, class Usuario u){
        u.addLibroAHistorial(findLibro());
    }

    void devolverLibro(class Usuario u){
        string nombre = "";
        if(u.enPosesionDeLibro()){
           nombre = u.getLibroEnPosesion().getNombre();
        }

        for(int i = 0; i < vecLibros.size(); i++){
            if(vecLibros[i].getNombre() == nombre){
                vecLibros[i].setCogido(false);
            }
        }

    }


};

#endif //ACTIVIDAD_COLABORATIVA_01_CLASES_H
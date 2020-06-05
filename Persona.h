
class Persona{

private:
    string Nombre;
    int Edad;

public:

    Persona(string, int);
    string GetNombre();
    int GetEdad();
};

Persona::Persona(string Nombre, int Edad){
    this -> Nombre = Nombre;
    this -> Edad = Edad;
}

string Persona::GetNombre(){
    return(this -> Nombre);
}

int Persona::GetEdad(){
    return(this -> Edad);
}

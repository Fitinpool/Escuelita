
class Funcionario : public Persona{

private:

    int AnioIncorporacion;
    string Identificacion;
    int Sueldo;

public:

    Funcionario(string, int, int, string, int);

    int GetAnioIncorporacion();
    string GetIndentificacion();
    int GetSueldo();
};

Funcionario::Funcionario(string Nombre, int Edad, int AnioIncorporacion, string Identificacion, int Sueldo) : Persona(Nombre, Edad){

    this -> AnioIncorporacion = AnioIncorporacion;
    this -> Identificacion = Identificacion;
    this -> Sueldo = Sueldo;
}

int Funcionario::GetAnioIncorporacion(){
    return(this -> AnioIncorporacion);
}

string Funcionario::GetIndentificacion(){
    return(this -> Identificacion);
}

int Funcionario::GetSueldo(){
    return(this -> Sueldo);
}

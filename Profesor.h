
class Profesor : public Funcionario{

private:
    string Asignatura;

public:

    Profesor(string, int, int, string, int, string);

    string GetAsignatura();

};

Profesor::Profesor(string Nombre, int Edad, int AnioIncorporacion, string Identificacion, int Sueldo, string Asignatura) : Funcionario(Nombre, Edad, AnioIncorporacion, Identificacion, Sueldo){
    this -> Asignatura = Asignatura;
}

string Profesor::GetAsignatura(){
    return(this -> Asignatura);
}

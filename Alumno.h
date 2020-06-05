
class Alumno : public Persona{

private:

    string Curso;
    int NumeroMatricula;

public:

    Alumno(string, int, string, int);

    string GetCurso();
    int GetNumeroMatricula();
};

Alumno::Alumno(string Nombre, int Edad, string Curso, int NumeroMatricula) : Persona(Nombre, Edad){

    this -> Curso = Curso;
    this -> NumeroMatricula = NumeroMatricula;
}

string Alumno::GetCurso(){
    return(this -> Curso);
}

int Alumno::GetNumeroMatricula(){
    return(this -> NumeroMatricula);
}


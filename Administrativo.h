
class Administrativo : public Funcionario{

private:
    string Servicio;

public:

    Administrativo(string, int, int, string, int, string);

    string GetServicio();
};

Administrativo::Administrativo(string Nombre, int Edad, int AnioIncorporacion, string Identificacion, int Sueldo, string Servicio) : Funcionario(Nombre, Edad, AnioIncorporacion, Identificacion, Sueldo){
    this -> Servicio = Servicio;
}

string Administrativo::GetServicio(){
    return(this -> Servicio);
}

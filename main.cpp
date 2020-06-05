#include <iostream>

using namespace std;

#include "Persona.h"
#include "Funcionario.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Administrativo.h"

int main(){

    Alumno Pepe("Pepe Alcachofa", 17, "4-E", 432905802);
    Profesor Alberto("Alberto Stark", 42, 2000, "FSH293JS", 1000000, "Programacion");
    Administrativo Felipe("Felipe Messi", 34, 2010, "SKJ3SL43", 500000, "Aseo");

    cout << "\nEstudiante:"
         << "\n\tNombre: " << Pepe.GetNombre()
         << "\n\tEdad: " << Pepe.GetEdad()
         << "\n\tCurso: " << Pepe.GetCurso()
         << "\n\tNumero de matricula: " << Pepe.GetNumeroMatricula()
         << endl;

    cout << "\nProfesor:"
         << "\n\tNombre: " << Alberto.GetNombre()
         << "\n\tEdad: " << Alberto.GetEdad()
         << "\n\tAnio incorporacion: " << Alberto.GetAnioIncorporacion()
         << "\n\tNumero de identificacion: " << Alberto.GetIndentificacion()
         << "\n\tSueldo: $" << Alberto.GetSueldo()
         << "\n\tAsignatura: " << Alberto.GetAsignatura()
         << endl;

    cout << "\nAdministrativo: "
         << "\n\tNombre: " << Felipe.GetNombre()
         << "\n\tEdad: " << Felipe.GetEdad()
         << "\n\tAnio incorporacion: " << Felipe.GetAnioIncorporacion()
         << "\n\tNumero de identificacion: " << Felipe.GetIndentificacion()
         << "\n\tSueldo: $" << Felipe.GetSueldo()
         << "\n\tServicio: " << Felipe.GetServicio()
         << endl;


}

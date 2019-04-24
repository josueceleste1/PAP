#include <iostream>
#include "catraca.h"


int main()
{
    Aluno *aluno = new Aluno();
    Professor *prof = new Professor();

    prof->darFaltas(aluno, 2);
    prof->darFaltas(aluno, 2);
    prof->darFaltas(aluno, 7);
    aluno->verFaltas();

    prof->darNotas(aluno, 4.1);
    prof->darNotas(aluno, 7.5);
    aluno->verNotas();


    return 0;
}

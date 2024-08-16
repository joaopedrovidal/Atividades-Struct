// Escreva um programa que utilize um vetor de no máximo 50 alunos, contendo matrícula  e nome,
// que faça a leitura dos dados e os apresente em seguida na tela.
// O aluno deve ser determinado através de um struct e seu nome deve ter no máximo 100 caracteres.

#include <iostream>
using namespace std;

struct Aluno {
    char vetNomeAluno [100];
    int numeroMatricula = 0;
};

Aluno cadastroAluno(){
    Aluno aluno;
    cout << "Digite seu nome: " << endl;
    fflush(stdin);
    cin.getline(aluno.vetNomeAluno, 100);
    cout << "Digite o numero da sua matricula: ";
    fflush(stdin);
    cin >> aluno.numeroMatricula;
    return aluno;
}

// Falta imprimir os alunos

void retornaCadastro(){
    for (int i = 0; i < 50 ; i++) {
        vetNomeAluno[i]
    }
}

int main(){
    Aluno aluno;
    char vetCadastro[3];
    for (int i = 0; i < 3; i++) {
        fflush(stdin);
        cadastroAluno();
        vetCadastro[i];
        cout << vetCadastro[i] << endl;
    }
    retornaCadastro();
    return  0;
}


#include <list>

using namespace std;

class Pessoa{

    private:
        string nome;
        string matricula;
        string cpf;
        int idade;

    public:
        string getNome(){
            return nome;
        }
        void setNome(string n){
            nome = n;
        }

        string getMatricula(){
            return matricula;
        }
        void setMatricula(string m){
            matricula = m;
        }

        string getCpf(){
            return cpf;
        }
        void setCpf(string c){
            cpf = c;
        }

        int getIdade(){
            return idade;
        }
        void setIdade(int i){
            idade = i;
        }

};

class Aluno : public Pessoa{

    private:
        int faltas = 0;
        list<float> notas;

    public:
        int getFaltas(){
            return faltas;
        }
        void setFaltas(int f){
            faltas += f;
        }

        list<float> getNotas(){
            return notas;
        }
        void setNotas(float n){
            notas.push_back(n);
        }

        void verNotas(){
            int cont = 0;
            list<float> aux = getNotas();

            for(int i=0; i<notas.size(); i++){
                cont++;
                cout << "P"<< cont << ": " << aux.front() << endl;
                aux.pop_front();
            }
        }

        void verFaltas(){
            cout << "Faltas: "<< getFaltas() << endl;
            cout << "\n";
        }
};

class Professor : public Pessoa{

    public:

        void darNotas(Aluno* aluno, float nota){
            aluno->setNotas(nota);
        }

        void darFaltas(Aluno *aluno, int falta){
            aluno->setFaltas(falta);
        }
};

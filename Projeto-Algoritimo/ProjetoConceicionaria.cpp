#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    int valOpcao,contTrioEletrico, contArCondicionado, contDirecaoHidraulica, contCompleto, contNenhumComplemento;
    int valOpcaoInicio;
    double valCarro, valCarroExtras, valCarroIPI, valCarroResultado;

    contNenhumComplemento = 0;
    contTrioEletrico = 0;
    contArCondicionado = 0;
    contDirecaoHidraulica = 0;
    contCompleto = 0;

    cout << "Bem vindo a aplicação que irá calcular o valor do veículo que deseja comprar! \n";

    do{
        cout << "Por favor, digite o valor do veículo desejado: \n";
        cin >> valCarro;

        if(valCarro <= 0){
            while (valCarro <= 0)
            {
                cout << "Por favor digite um valor valido para o veículo! \n";
                cin >> valCarro;
            }
        }
        valCarroIPI = valCarro * 1.08;

        cout.precision(10);
        cout << "\n";
        cout << "valor atual do veículo: "<< valCarro <<  "\n \n";
        cout <<"------------------------------------\n \n";

        cout <<"Escolha qual dos complementos deseja para o veículo digitando o valor correspondente abaixo ou digite '0' para nenhum complemento: \n \n";

        cout <<"0- Nenhum opcional \n";
        cout <<"1- Trio elétrico (alarme, vidro e tranca elétrica) \n";
        cout <<"2- Ar condicionado \n";
        cout <<"3- Direção hidráulica \n";
        cout <<"4- Completo (trio-E, Ar e direção) \n \n";

        cin >> valOpcao;

        if(valOpcao < 0 && valOpcao > 4){
            while (valOpcao > 0 && valOpcao > 4)
            {
                cout << "Por favor digite um valor valido de adicional! \n \n";
                cout <<"0- Nenhum opcional \n";
                cout <<"1- Trio elétrico (alarme, vidro e tranca elétrica) \n";
                cout <<"2- Ar condicionado \n";
                cout <<"3- Direção hidráulica \n";
                cout <<"4- Completo (trio-E, Ar e direção) \n";
                cin >> valOpcao;
            }
        }

        switch (valOpcao)
        {
        case 1:
            valCarroResultado = valCarroIPI + (valCarroIPI * 0.02);
            contTrioEletrico += 1;
            break;

        case 2:
            valCarroResultado = valCarroIPI + (valCarro * 0.02);
            contArCondicionado += 1;
            break;

        case 3:
            valCarroResultado = valCarroIPI + (valCarro * 0.02);
            contDirecaoHidraulica += 1;
            break;

        case 4:
            valCarroResultado = valCarroIPI + (valCarroIPI * 0.02) + (valCarro * 0.02) + (valCarro * 0.02);
            valCarroResultado = valCarroResultado - (valCarroResultado * 0.035);
            contCompleto += 1;
            break;

        case 0:
            valCarroResultado = valCarroIPI;
            contNenhumComplemento += 1;
            break;

        default:
            
            cout << "\n";
            break;
        }
        
        cout << "Valor total do veículo com o IPI e adicional desejado: "<< valCarroResultado << "\n \n";
        cout << "Deseja realizar uma nova operação? \n";
        cout << "Digite '1' para sim e '0'para encerrar o programa: ";
        cin >> valOpcaoInicio;
        cout << "\n";
        
        if(valOpcaoInicio != 1 && valOpcaoInicio != 0){
            while(valOpcaoInicio != 1 && valOpcaoInicio != 0){
                cout << "Por favor digite uma opção válida! \n";
                cout << "Digite '1' para sim e '0'para encerrar o programa: ";
                cin >> valOpcaoInicio;
                cout << "\n";
            }
        }
        

    }while(valOpcaoInicio != 0);

    cout << "Vezes em que a opção 'Nenhuma' foi selecionada: " <<contNenhumComplemento <<"\n";
    cout << "Vezes em que a opção 'Trio elétrico' foi selecionada: " <<contTrioEletrico <<"\n";
    cout << "Vezes em que a opção 'Ar condicionado' foi selecionada: " <<contArCondicionado <<"\n";
    cout << "Vezes em que a opção 'Direção hidráulica' foi selecionada: " <<contDirecaoHidraulica <<"\n";
    cout << "Vezes em que a opção 'Completo' foi selecionada: " <<contCompleto <<"\n";
}
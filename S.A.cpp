#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    
    float valor;
    int horas;
    
    cout << "Insira o valor das horas trabalhadas: ";
    cin >> valor;
    
    cout << "Horas trabalhadas do funcionário: ";
    cin >> horas;
    
    float salario = valor * horas;
    float inss = 0.10;
    float fgts = 0.11;
    
    system("clear");
    cout << "\tFolha de Pagamento\n";
    
    cout << "\nSalário Bruto: (" << valor << " * " << horas << ")  : R$ " << salario;
    
    int IR, INSS2, FGTS2; // Variaveis que receberão descontos aplicados
    
    ;
    
    if(salario <= 900){
        cout << "\n(-) IR (isento):    : R$ 0";
        IR = 0; // não recebe desconto nessa condição
        
    } else if (salario > 900 && salario <= 1500){
        cout << "\n(-) IR (5%)      : R$ " << 0.05 * salario;
        IR = 0.05 * salario; // IR recebe o desconto de 5% nessa condição
        
    } else if(salario > 1500 && salario <= 2500){
        cout << "\n(-) IR (10%)      : R$ " << 0.1 * salario;
        IR = 0.1 * salario; // IR recebe o desconto de 10% nessa condição
        
    } else if(salario > 2500){
        cout << "\n(-) IR (20%)      : R$ " << 0.2 * salario;
        IR = 0.2 * salario; // IR recebe o desconto de 20% nessa condição
    }
    
    cout << "\n(-) INSS (10%)   : R$ " << inss * salario;
    INSS2 = inss * salario; // inss recebe o desconto de 10% atribuindo para INSS2
    
    cout << "\nFGTS (11%)       : R$ " << fgts * salario << "\n";
    FGTS2 = fgts * salario; // fgts recebe o desconto de 11% atribuindo para FGTS2
    
    cout << "\nTotal de descontos   : R$ " << IR + INSS2; 
    
    int desconto;
    desconto = salario - IR - INSS2; // calcula o salario liquido
    
    cout << "\nSalário Liquido      : R$ " << desconto;
    
    return 0;
}
#ifndef __FUNCIONARIO_HPP
#define __FUNCIONARIO_HPP
#include <vector>
#include <string>
using namespace std;

class Funcionario
{
	private:
		
		string departamento, data_de_entrada, rg;
		double salario=0, aumento_salario=0, reajuste=0, ganho_anual=0;
		int identificador;
		 
	public:
		
		void setDepartamento(string departamento);
		string getDepartamento();
		
		void setData_de_Entrada(string data_de_entrada);
		string getData_de_Entrada();
		
		void setRG(string rg);
		string getRG();
		
		void setSalario(double salario);
		double getSalario();
		
		void setIdentificador(int identificador);
		int getIdentificador();
		
		void RecebeAumento(double aumento_salario, double *salario, vector <Funcionario> vetFuncionario, int i);
		void calculaGanhoAnual(double ganho_anual, vector <Funcionario> vetFuncionario, int i,  double *salario);
};

#endif

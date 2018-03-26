#include <iostream>

using namespace std;

class Matriz4x4{
	private:
		int tam;
		double mat[4][4];
	public:

		Matriz4x4(){
			this->tam = 4;

			for (int i = 0; i < this->tam; ++i){
				for (int j = 0; j < this->tam; ++j){
					this->mat[i][j] = 0;
				}
			}
		}

		Matriz4x4(double mat2[][4]){
			this->tam = 4;

			for (int i = 0; i < this->tam; ++i){
				for (int j = 0; j < this->tam; ++j){
					this->mat[i][j] = mat2[i][j];
				}
			}
		}

		void imprimirMatriz(){
			for (int i = 0; i < this->tam; ++i){
				for (int j = 0; j < this->tam; ++j){
					cout << this->mat[i][j] << " ";
				}
				cout << endl;
			}
		}

		Matriz4x4 operator* (const Matriz4x4 mat2){
			Matriz4x4 matResultado;

			for (int i = 0; i < this->tam; ++i){
				for (int j = 0; j < this->tam; ++j){
					for (int c = 0; c < this->tam; ++c){
						matResultado.mat[i][j]  += this->mat[i][c] * mat2.mat[c][j];
					}
				}
			}
			return matResultado;
		}

		void operator= (const Matriz4x4 mat2){
			for (int i = 0; i < this->tam; ++i){
				for (int j = 0; j < this->tam; ++j){
					this->mat[i][j] = mat2.mat[i][j];
				}
			}
		}

		Matriz4x4 operator+ (const Matriz4x4 mat2 ){
			Matriz4x4 resultado;
			for (int i = 0; i < this->tam; ++i){
				for (int j = 0; j < this->tam; ++j){
					resultado.mat[i][j]  = this->mat[i][j]  + mat2.mat[i][j];
				}
			}
			return resultado;
		}

		Matriz4x4 operator- (const Matriz4x4 mat2 ){
			Matriz4x4 resultado;
			for (int i = 0; i < this->tam; ++i){
				for (int j = 0; j < this->tam; ++j){
					resultado.mat[i][j]  = this->mat[i][j]  - mat2.mat[i][j];
				}
			}
			return resultado;
		}

		double calcularDeterminante(){
			/* code*/
		}
};

int main(int argc, char **argv){
	double matriz1[4][4] = {{0.10, 0.20, 0.30, 0.40}, {0.50, 0.60, 0.70, 0.80}, {0.90, 1.00, 1.10, 1.20}, {1.30, 1.40, 1.50, 1.60}};
	double matriz2[4][4] = {{15, 10, 10, 10},{10, 14, 10, 10},{10, 10, 13, 10},{10, 10, 10, 12}};

	cout << "----------------Mat 1----------------" << endl;
	Matriz4x4 mat1(matriz1);
	mat1.imprimirMatriz();
	cout << "----------------Mat 2----------------" << endl;
	Matriz4x4 mat2(matriz2);
	mat2.imprimirMatriz();
	cout << "-----------------------------------------" << endl;
	cout << "-----soma para resultado-----" << endl;
	Matriz4x4 matResultado;
	matResultado = mat1 * mat2;
	matResultado.imprimirMatriz();

	cout << mat2.calcularDeterminante();
	return 0;
}

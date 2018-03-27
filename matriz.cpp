#include <iostream>

using namespace std;

class Matriz{
	private:
		int lin;
		int col;
		int **mat;
	public:
		Matriz(){
			mat = new int*[4];

			for (int i = 0; i < 4; ++i){
				mat[i] = new int[5];
			}
		}
};



int main(){

	int **mat;

	mat = new int*[4];

	for (int i = 0; i < 4; ++i){
		mat[i] = new int[5];
	}

	for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 5; ++j){
			mat[i][j] = 0;
		}
	}

	for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 5; ++j){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

#include <iostream>

using namespace std;
//12 Voltear un array
void voltear(int arr[], int tam){
	for(int i = 0; i < tam/2; i++){
		int temp;
		temp = arr[i];
		arr[i] = arr[tam -1 -i];
		arr[tam-i-1] = temp;
	}
}
//Imprimir array opcional
void impri_arr(int arr[], int tam){
	for( int i = 0; i < tam; i++){
		cout << arr[i] << endl;
	}
}
//Formar un array opcional
void formar(int arr[],int tam){
	cout << "Ingrese los valores de tu array: "<< endl;
	for(int i = 0; i < tam; i++){
	cin >> arr[i];
	}
}
int main()
{
    int tama;
    cout << "Ingrese el tamanio de su array: "<< endl;
	cin >> tama;
	int ararb[tama];

	formar(ararb, tama);
	cout << "Su array antes del volteo es: " << endl;
	impri_arr(ararb, tama);
	voltear(ararb,tama);
	cout << " Su array despues del volteo es: "<< endl;
	impri_arr(ararb, tama);
}

#include<iostream>//entrada y salida de datos
using namespace std;
int main(){
    int mes;//declaro como entero el numero de mes
    
    do{
     cout<<"Digite el numero de mes[1-12] "<<endl;//Imprime
     cin>>mes;//ingreso de datos	
	}while(mes<1 || mes >12);
    
     
    switch(mes){//condicional multiple y el numero de mes
        case 1:
        cout<<"Enero"<<endl;
        break;
        case 2:
        cout<<"Febrero"<<endl;
        break;
        case 3:
        cout<<"Marzo"<<endl;
        break;
        case 4:
        cout<<"Abril"<<endl;
        break;
        case 5:
        cout<<"Mayo"<<endl;
        break;
        case 6:
        cout<<"Junio"<<endl;
        break;
        case 7:
        cout<<"Julio"<<endl;
        break;
        case 8:
        cout<<"Agosto"<<endl;
        break;
        case 9:
       cout<<"Septiembre"<<endl;
        break;
        case 10:
        cout<<"Octubre"<<endl;
        break;
        case 11:
        cout<<"Noviembre"<<endl;
        break;
        case 12:
        cout<<"Diciembre"<<endl;
        break;
    }
    return 0;
}
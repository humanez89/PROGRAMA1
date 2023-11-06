#include <iostream>
using namespace std;

int main() {
	int var = 8;
	int* pointvar;
	pointvar = &var;
	cout<<"var = "<<var<<endl;
	cout<<"Direccion de la varibale var (&var) = "<<&var<<endl<<endl;
	cout<<"apuntador pointvar = "<<pointvar<<endl<<endl;
	cout<<"cambia el valor igual a 10: "<<endl<<endl;
	var= 10;
	cout<<"var = "<<var<<endl<<endl;
	cout<<"pointvar = "<<*pointvar<<endl<<endl;
	cout<<"cambia el valor de *pointvar a 32: "<<endl;
	*pointvar = 32;
	cout<<"var = "<<var<<endl<<endl;
	cout<<"apuntador pointvar = "<<pointvar<<endl;
	cout<<"*pointvar = "<<*pointvar<<endl;
	cout<<"var = "<<var<<endl<<endl;
	
	return 0;
}


#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
float tcompras,tfactura,tdescuento;
	cout <<"Digite el valor total de compras en dolares US$";
	cin >>tcompras;
	tfactura=tcompras*1.12;
	cout << "resultado" <<tfactura;
	if (tfactura<100){tdescuento=tfactura/1.01;
	cout << "el total de su compra con descuento es $" <<tdescuento;
	}else if ((tfactura>=100)&&(tfactura<=500)){tdescuento=tfactura-((tfactura*5)/100);
	cout << "el total de su compra con descuento es $" <<tdescuento;
	}else if (tfactura>500){tdescuento=tfactura-((tfactura*10)/100);
	cout << "el total de su compra con descuento es $" <<tdescuento;
	}
		
	return 0;
}

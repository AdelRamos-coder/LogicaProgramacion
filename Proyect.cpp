#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

float OpcionesNivel1,OpcionesNivel2, OpcionesNivel3, OpcionesNivel4, OpcionesNivel5, OpcionRepetir;
float Area, Volumen, Radio, Generatriz, Largo, Ancho, Altura;
float Numero1, Numero2, Numero3;
int Numero1Entero, Numero2Entero, Numero3Entero, NumeroInverso;
int Contador, Contador2;
int c;
float LimiteI, LimiteF, Multiplo;
int LimiteIEntero, LimiteFEntero, MultiploEntero;
int Valor;
int N1, N2, N3, N4, NTemp;
int PisoActual;
int PisoFinal, Opcion;
float Inmueble, InmuebleInicial;
int OpcionInmueble, OpcionInmueble2;
float Trabajador, PagoTemprano, ImpuestoPredialO;

int HorasPorSemana;
float ValorHora;
float ImpuestoTasa, SalarioSemanal, SalarioMensual, Bonus, Total, TotalNeto;

float Nota1, Nota2, Nota3;





int LimpiarBuffer() {
while ((c = getchar()) != '\n' && c!=EOF) {}
return 0;
}

int LeerOpcionMenu() {
int c;
int valor = -1;

while ((c = getchar()) == '\n');

if (!isdigit(c)) {
while ((c = getchar()) != '\n' && c != EOF);
return -1;
}

valor = c - '0';

c = getchar();
if (c != '\n' && c != EOF) {
while ((c = getchar()) != '\n' && c != EOF);
return -1;
}

return valor;
}
float LeerFlotanteSeguro() {
int c;
int signo = 1;
int tienePunto = 0;
float valor = 0;
float decimal = 0.1;

do {
c = getchar();
} while (c == ' ' || c == '\n' || c == '\t');

if (c == '-') {
signo = -1;
c = getchar();
}

if (!isdigit(c) && c != '.') {
while ((c = getchar()) != '\n' && c != EOF);
return -999999;
}

while (isdigit(c)) {
valor = valor * 10 + (c - '0');
c = getchar();
}
if (c == '.') {
tienePunto = 1;
c = getchar();

while (isdigit(c)) {
valor = valor + (decimal * (c - '0'));
decimal *= 0.1;
c = getchar();
}
}

if (c != '\n' && c != EOF) {
while ((c = getchar()) != '\n' && c != EOF);
return -999999;
}

return valor * signo;
}

float LeerEnteroSeguro() {
float valor = LeerFlotanteSeguro();
if (valor == -999999) return -999999;

if (valor != (int)valor) return -999999;

return valor;
}

int RepetirOContinuar() {
printf("Digite 1: para repetir el proceso\n");
printf("Digite 2: para salir\n");
OpcionRepetir = LeerOpcionMenu();
while (OpcionRepetir != 1 && OpcionRepetir != 2)
{
printf("Digite una opcion valida ciervo: ");
OpcionRepetir = LeerOpcionMenu();
}
return 0;
}
int Menu() {
system("cls");
printf("-------------MENU-----------------------\n");
printf("Menu de opciones:\n");
printf("1: Operaciones basicas\n");
printf("2: Estructuras repetitivas\n");
printf("3: Pagos e impuestos\n");
printf("4: Salir\n");
printf("-------------MENU-----------------------\n");

OpcionesNivel1 = LeerOpcionMenu();

while (OpcionesNivel1 != 1 && OpcionesNivel1 != 2 && OpcionesNivel1 != 3 && OpcionesNivel1 != 4)
{
printf("Digite una opcion valida ciervo: ");
OpcionesNivel1 = LeerOpcionMenu();
}
return 0;
}

int SubMenuOperaciones() {
system("cls");
printf("-------------SUB-MENU-OPERACIONES----------------------\n");
printf("Menu de opciones:\n");
printf("1: Area y volumen\n");
printf("2: Numeros inversos\n");
printf("3: Cifrar datos\n");
printf("4: Regresar\n");
printf("-------------SUB-MENU-OPERACIONES----------------------\n");
OpcionesNivel2 = LeerOpcionMenu();

while (OpcionesNivel2 != 1 && OpcionesNivel2 != 2 && OpcionesNivel2 != 3 && OpcionesNivel2 != 4)
{
printf("Digite una opcion valida ciervo: ");
OpcionesNivel2 = LeerOpcionMenu();
}
return 0;
}



int MenuAreaVolumen() {
printf("Digite lo que quiere sacar: \n");
printf("1:Area\n");
printf("2:Volumen\n");
OpcionesNivel4 = LeerOpcionMenu();
while (OpcionesNivel4 != 1 && OpcionesNivel4 != 2)
{
printf("Digite una opcion valida ciervo: ");
OpcionesNivel4 = LeerOpcionMenu();
}

if (OpcionesNivel4 == 1)
{
printf("Digite la figura geometica que quiere sacar: \n");
printf("1:Cono\n");
printf("2:Prisma Rectangular\n");
printf("3:Cilindro\n");
OpcionesNivel5 = LeerOpcionMenu();
while (OpcionesNivel5 != 1 && OpcionesNivel5 != 2 && OpcionesNivel5 != 3)
{
printf("Digite una opcion valida ciervo: ");
OpcionesNivel5 = LeerOpcionMenu();
}
if (OpcionesNivel5 == 1)
{
printf("Digite el radio de su cono: ");
Radio = LeerFlotanteSeguro();
while (Radio == -999999 || Radio < 0) {
printf("Valor invalido: ");
Radio = LeerFlotanteSeguro();
}
printf("Digite la generatriz de su cono: ");
Generatriz = LeerFlotanteSeguro();
while (Generatriz == -999999 || Generatriz < 0) {
printf("Valor invalido: ");
Generatriz = LeerFlotanteSeguro();
}
Area = 3.14 * Radio * (Radio + Generatriz);
printf("El area de su cono es de: %f\n", Area);
}
if (OpcionesNivel5 == 2)
{
printf("Digite el largo de su primsa rectangular: ");
Largo = LeerFlotanteSeguro();
while (Largo == -999999 || Largo < 0) {
printf("Valor invalido: ");
Largo = LeerFlotanteSeguro();
}
printf("Digite la altura de su primsa rectangular: ");
Altura = LeerFlotanteSeguro();
while (Altura == -999999 || Altura < 0) {
printf("Valor invalido: ");
Altura = LeerFlotanteSeguro();
}
printf("Digite lo ancho de su primsa rectangular: ");
Ancho = LeerFlotanteSeguro();
while (Ancho == -999999 || Ancho < 0) {
printf("Valor invalido: ");
Ancho = LeerFlotanteSeguro();
}
Area = 2*((Largo*Altura) + (Largo*Ancho) + (Altura*Ancho));
printf("El area de su prisma rectangular es de: %f\n", Area);
}
if (OpcionesNivel5 == 3)
{
printf("Digite el radio de su cilindro: ");
Radio = LeerFlotanteSeguro();
while (Radio == -999999 || Radio < 0) {
printf("Valor invalido: ");
Radio = LeerFlotanteSeguro();
}
printf("Digite la altura de su cilindro: ");
Altura = LeerFlotanteSeguro();
while (Altura == -999999 || Altura < 0) {
printf("Valor invalido: ");
Altura = LeerFlotanteSeguro();
}
Area = 2 * 3.14 * Radio * (Radio + Altura);
printf("El area de su cilindro es de: %f\n", Area);
}
}
if (OpcionesNivel4 == 2)
{
printf("Digite la figura geometica que quiere sacar: \n");
printf("1:Cono\n");
printf("2:Primsa Rectangular\n");
printf("3:Cilindro\n");
OpcionesNivel5 = LeerOpcionMenu();
while (OpcionesNivel5 != 1 && OpcionesNivel5 != 2 && OpcionesNivel5 != 3)
{
printf("Digite una opcion valida ciervo: ");
OpcionesNivel5 = LeerOpcionMenu();
}
if (OpcionesNivel5 == 1)
{
printf("Digite el radio de su cono: ");
Radio = LeerFlotanteSeguro();
while (Radio == -999999 || Radio < 0) {
printf("Valor invalido: ");
Radio = LeerFlotanteSeguro();
}
printf("Digite la altura de su cono: ");
Altura = LeerFlotanteSeguro();
while (Altura == -999999 || Altura < 0) {
printf("Valor invalido: ");
Altura = LeerFlotanteSeguro();
}
Volumen = (1.0 / 3.0) * 3.14 * (Radio * Radio) * Altura;
printf("El volumen de su cono es de: %f\n", Volumen);
}
if (OpcionesNivel5 == 2)
{
printf("Digite el largo de su primsa rectangular: ");
Largo = LeerFlotanteSeguro();
while (Largo == -999999 || Largo < 0) {
printf("Valor invalido: ");
Largo = LeerFlotanteSeguro();
}
printf("Digite la altura de su primsa rectangular: ");
Altura = LeerFlotanteSeguro();
while (Altura == -999999 || Altura < 0) {
printf("Valor invalido: ");
Altura = LeerFlotanteSeguro();
}
printf("Digite lo ancho de su primsa rectangular: ");
Ancho = LeerFlotanteSeguro();
while (Ancho == -999999 || Ancho < 0) {
printf("Valor invalido: ");
Ancho = LeerFlotanteSeguro();
}
Volumen = Largo * Ancho * Altura;
printf("El volumen de su prisma rectangular es de: %f\n", Volumen);
}
if (OpcionesNivel5 == 3)
{
printf("Digite el radio de su cilindro: ");
Radio = LeerFlotanteSeguro();
while (Radio == -999999 || Radio < 0) {
printf("Valor invalido: ");
Radio = LeerFlotanteSeguro();
}
printf("Digite la altura de su cilindro: ");
Altura = LeerFlotanteSeguro();
while (Altura == -999999 || Altura < 0) {
printf("Valor invalido: ");
Altura = LeerFlotanteSeguro();
}
Volumen = 3.14 * (Radio * Radio) * Altura;
printf("El volumen  de su cilindro es de: %f\n", Volumen);
}
}
return 0;
}

int NumerosInversos(int X) {
NumeroInverso = 0;
while (X > 0)
{
NumeroInverso = (NumeroInverso * 10) + (X%10);
X = X / 10;
}
return NumeroInverso;
}

int MenuNumerosInversos() {
printf("Digite un numero: ");
Numero1 = LeerEnteroSeguro();
while (Numero1 == -999999 || Numero1 < 0) {
printf("Digite un numero valido: ");
Numero1 = LeerEnteroSeguro();
}
Numero1Entero = Numero1;

printf("Digite un numero: ");
Numero2 = LeerEnteroSeguro();
while (Numero2 == -999999 || Numero2 < 0) {
printf("Digite un numero valido: ");
Numero2 = LeerEnteroSeguro();
}
Numero2Entero = Numero2;

printf("Digite un numero: ");
Numero3 = LeerEnteroSeguro();
while (Numero3 == -999999 || Numero3 < 0) {
printf("Digite un numero valido: ");
Numero3 = LeerEnteroSeguro();
}
Numero3Entero = Numero3;

Numero1Entero = NumerosInversos(Numero1Entero);
Numero2Entero = NumerosInversos(Numero2Entero);
Numero3Entero = NumerosInversos(Numero3Entero);

printf("Digite: \n");
printf("1:Sumar \n");
printf("2:Restar \n");
printf("3:Multiplicar \n");
printf("4:Dividir \n");
if (scanf_s("%f", &OpcionesNivel5) != 1)
{
LimpiarBuffer();
OpcionesNivel5 = 0;
}
while (OpcionesNivel5 != 1 && OpcionesNivel5 != 2 && OpcionesNivel5 != 3 && OpcionesNivel5 != 4)
{
printf("Digite una opcion valida ciervo: ");
scanf_s("%f", &OpcionesNivel5);
LimpiarBuffer();
}

if (OpcionesNivel5 == 1)
{
printf("La suma es: %d\n", Numero1Entero + Numero2Entero + Numero3Entero);
}
if (OpcionesNivel5 == 2)
{
printf("La resta es: %d\n", Numero1Entero - Numero2Entero - Numero3Entero);
}
if (OpcionesNivel5 == 3)
{
printf("La multiplicacion es: %d\n", Numero1Entero * Numero2Entero * Numero3Entero);
}
if (OpcionesNivel5 == 4)
{
if (Numero2Entero == 0 || Numero3Entero == 0)
{
printf("No se puede dividir por cero \n");
}
else
{
printf("La division es: %f\n", (Numero1Entero * 1.0) / Numero2Entero / Numero3Entero);
}
}
return 0;
}


int MenuCifrar() {
printf("Digite un valor: ");
Valor = LeerEnteroSeguro();

while (Valor < 0 || Valor > 9999) {
printf("INVALIDO: ");
Valor = LeerEnteroSeguro();
}
N4 = fmod(Valor, 10);
N3 = fmod((Valor / 10), 10);
N2 = fmod(((Valor / 10) / 10), 10);
N1 = (((Valor / 10) / 10) / 10);

N4 = (N4 + 7) % 10;
N3 = (N3 + 7) % 10;
N2 = (N2 + 7) % 10;
N1 = (N1 + 7) % 10;

NTemp = N4;
N4 = N1;
N1 = NTemp;
NTemp = N2;
N2 = N3;
N3 = NTemp;

printf("Este es su numero cifrado: %d%d%d%d\n", N1, N2, N3, N4);

N1 = (N1 + 3) % 10;
N2 = (N2 + 3) % 10;
N3 = (N3 + 3) % 10;
N4 = (N4 + 3) % 10;

printf("Este es su numero cifrado: %d%d%d%d\n", N4, N3, N2, N1);
return 0;
}


int SubMenuEstructuras() {
system("cls");
printf("-------------SUB-MENU-ESTRUCTURAS-REPETITIVAS--------------------\n");
printf("Menu de opciones:\n");
printf("1: Tablas de multiplicar\n");
printf("2: Multiplos de un numero dado en un rango determinado\n");
printf("3: Elevador\n");
printf("4: Fecha de nacimiento\n");
printf("5: Regresar\n");
printf("-------------SUB-MENU-ESTRUCTURAS-REPETITIVAS--------------------\n");
OpcionesNivel2 = LeerOpcionMenu();
while (OpcionesNivel2 != 1 && OpcionesNivel2 != 2 && OpcionesNivel2 != 3 && OpcionesNivel2 != 4 && OpcionesNivel2 != 5)
{
printf("Digite una opcion valida ciervo: ");
OpcionesNivel2 = LeerOpcionMenu();
}
return 0;
}

int TablasDeMultiplicar() {
Contador = 1;
Contador2 = 1;
while (Contador <= 10)
{
while (Contador2 <= 10)
{
printf("%d x %d = %d\n", Contador, Contador2, Contador * Contador2);
Contador2 = Contador2 + 1;
}
printf("\n");
Contador2 = 1;
Contador = Contador + 1;
}
return 0;
}

int MultiplosRango() {
printf("Digite un limite inicial: ");
LimiteI = LeerEnteroSeguro();
while (LimiteI == -999999) {
printf("Digite un limite inicial valido: ");
LimiteI = LeerEnteroSeguro();
}

printf("Digite un limite final: ");
LimiteF = LeerEnteroSeguro();
while (LimiteF == -999999) {
printf("Digite un limite final valido: ");
LimiteF = LeerEnteroSeguro();
}

printf("Digite los multiplos que quiere sacar: ");
Multiplo = LeerEnteroSeguro();
while (Multiplo == -999999) {
printf("Digite un multiplo valido: ");
Multiplo = LeerEnteroSeguro();
}


if (LimiteI >= LimiteF)
{
printf("Invalido, intente de nuevo: \n");
}
else
{
printf("Los multiplos son: \n");
while (LimiteI <= LimiteF)
{


if (fmod(LimiteI, Multiplo) == 0)
{
printf("%f\n", LimiteI);
}
LimiteI = LimiteI + 1;
}
}
return 0;

}

int ElevadorMenu() {
PisoActual = 1;
do {
printf("Piso actual: %d\n", PisoActual);
printf("Digite:\n1: Subir\n2: Bajar\n3: Salir\n");
printf("Digite un numero: ");
Opcion = LeerEnteroSeguro();

while (Opcion != 1 && Opcion != 2 && Opcion != 3)
{
printf("Digite un piso valido: ");
Opcion = LeerEnteroSeguro();
}

if (Opcion == 1) {
printf("A que piso quiere subir: ");
PisoFinal = LeerEnteroSeguro();

while (PisoFinal < PisoActual || PisoFinal > 25) {
printf("Destino invalido. Debe ser mayor que %d y maximo 25: ", PisoActual);
PisoFinal = LeerEnteroSeguro();
}

while (PisoActual < PisoFinal) {
PisoActual = PisoActual + 1;
printf("Piso actual: %d\n", PisoActual);
}
}

else if (Opcion == 2) {
printf("A que piso quiere bajar: ");
PisoFinal = LeerEnteroSeguro();

while (PisoFinal > PisoActual || PisoFinal < 1) {
printf("Destino invalido. Debe ser menor que %d y minimo 1: ", PisoActual);
PisoFinal = LeerEnteroSeguro();
}

while (PisoActual > PisoFinal) {
PisoActual = PisoActual - 1;
printf("Piso actual: %d\n", PisoActual);
}
}

} while (Opcion != 3);

printf("Saliendo\n");

return 0;

}


int SubMenuPagosEImpuestos() {
system("cls");
printf("-------------PAGOS-E-IMPUESTOS--------------------\n");
printf("Menu de opciones:\n");
printf("1: Pago del impuesto predial de un inmueble\n");
printf("2: Pago mensual de un trabajador.\n");
printf("3: Calcular la nota que necesitan cinco estudiantes en su nota final\n");
printf("4: Regresar\n");
printf("-------------PAGOS-E-IMPUESTOS--------------------\n");
OpcionesNivel2 = LeerOpcionMenu();
while (OpcionesNivel2 != 1 && OpcionesNivel2 != 2 && OpcionesNivel2 != 3 && OpcionesNivel2 != 4)
{
printf("Digite una opcion valida ciervo: ");
OpcionesNivel2 = LeerOpcionMenu();
}
return 0;
}

int ImpuestoPredial() {
printf("Digite el valor de su inmueble: ");
Inmueble = LeerFlotanteSeguro();
while (Inmueble <= 0)
{
printf("El inmueble no puede valer menos o igual de 0: ");
Inmueble = LeerFlotanteSeguro();
}
printf("Usted pago a tiempo: \n");
printf("1:Si \n");
printf("2:No \n");
OpcionInmueble = LeerEnteroSeguro();
while (OpcionInmueble != 1 && OpcionInmueble != 2)
{
printf("Digite una opcion valida: ");
OpcionInmueble = LeerEnteroSeguro();
}
InmuebleInicial = Inmueble;
ImpuestoPredialO = Inmueble * 0.15;

if (OpcionInmueble == 1)
{
PagoTemprano = ImpuestoPredialO * 0.12;
}
else
{
PagoTemprano = 0;
}
printf("Usted es trabajador oficial: \n");
printf("1:Si \n");
printf("2:No \n");
OpcionInmueble2 = LeerEnteroSeguro();
while (OpcionInmueble2 != 1 && OpcionInmueble2 != 2)
{
printf("Digite una opcion valida: ");
OpcionInmueble2 = LeerEnteroSeguro();
}
if (OpcionInmueble2 == 1)
{
Trabajador = ImpuestoPredialO * 0.06;
}
else
{
Trabajador = 0;
}
Inmueble = ImpuestoPredialO - PagoTemprano - Trabajador;
printf("El precio inicial del inmueble es de: %f \n", InmuebleInicial);
printf("Impuesto Predial %f \n", ImpuestoPredialO);
printf("Descuento por pago temprano %f \n", PagoTemprano);
printf("Descuento por trabajador oficial %f \n", Trabajador);
printf("Pago Final %f \n", Inmueble);
return 0;
}

int PagoMensual() {
printf("Ingrese el numero de horas trabajadas por semana: ");
HorasPorSemana = LeerEnteroSeguro();

while (HorasPorSemana < 0 || HorasPorSemana > 144)
{
printf("INVALIDO: ");
HorasPorSemana = LeerEnteroSeguro();
}

printf("Ingrese el valor por hora: ");
ValorHora = LeerFlotanteSeguro();

while (ValorHora < 0)
{
printf("INVALIDO: ");
ValorHora = LeerFlotanteSeguro();
}

printf("Ingrese la tasa de impuestos en porcentaje: ");
ImpuestoTasa = LeerFlotanteSeguro();
while (ImpuestoTasa < 0 || ImpuestoTasa  > 100)
{
printf("INVALIDO: ");
ImpuestoTasa = LeerFlotanteSeguro();
}
SalarioSemanal = ValorHora * HorasPorSemana;
SalarioMensual = SalarioSemanal * 4;

if (SalarioMensual > 2000000) {
Bonus = 0;
}
else if (SalarioMensual >= 1500000 && SalarioMensual <= 2000000) {
Bonus = SalarioMensual * 0.12;
}
else {
Bonus = SalarioMensual * 0.17;
}

Total = SalarioMensual + Bonus;
ImpuestoTasa = ImpuestoTasa / 100.0;
TotalNeto = Total - (ImpuestoTasa * Total);
ImpuestoTasa = ImpuestoTasa * 100;
printf("Total a pagar semanal bruto: %f\n", SalarioSemanal);
printf("Total a pagar mensual bruto: %f\n", SalarioMensual);
printf("Bonus aplicado del: %f\n", Bonus);
printf("Total a pagar mensual con bonus: %f\n", Total);
printf("El impuesto en porcentaje fue de: %f\n", ImpuestoTasa);
printf("Total Neto de todo: %f\n", TotalNeto);
return 0;
}

int NotaNesaria() {
printf("Digite primera nota: ");
Nota1 = LeerFlotanteSeguro();
while (Nota1<0 || Nota1>5)
{
printf("INVALIDO: ");
Nota1 = LeerFlotanteSeguro();
}
printf("Digite primera nota: ");
Nota2 = LeerFlotanteSeguro();
while (Nota2 < 0 || Nota2>5)
{
printf("INVALIDO: ");
Nota2 = LeerFlotanteSeguro();
}
Nota1 = Nota1 * 0.30;
Nota2 = Nota2 * 0.30;
Nota3 = Nota1 + Nota2;
Nota3 = 3 - Nota3;
Nota3 = Nota3 / 0.40;

if (Nota3 == 0)
{
printf("Ya ganastes\n");
}
else
{
if (Nota3 > 5)
{
printf("Llorinder, ni sacando 5 ganas la materia\n");
}
else
{
printf("Tienes que sacar %f para ganar la materia\n", Nota3);
}
}

return 0;
}
int main() {

do
{
Menu();

if (OpcionesNivel1 == 1)
{
do
{
SubMenuOperaciones();
if (OpcionesNivel2 == 1)
{
do
{
MenuAreaVolumen();
RepetirOContinuar();
} while (OpcionRepetir != 2);

}
if (OpcionesNivel2 == 2)
{
do
{
MenuNumerosInversos();
RepetirOContinuar();
} while (OpcionRepetir !=2);
}
if (OpcionesNivel2 == 3)
{
do
{
MenuCifrar();
RepetirOContinuar();
} while (OpcionRepetir != 2);
}


} while (OpcionesNivel2 != 4);

}

if (OpcionesNivel1 == 2)
{
do
{
SubMenuEstructuras();
if (OpcionesNivel2 == 1)
{
do
{
TablasDeMultiplicar();
RepetirOContinuar();
} while (OpcionRepetir != 2);

}

if (OpcionesNivel2 == 2)
{
do
{
MultiplosRango();
RepetirOContinuar();
} while (OpcionRepetir != 2);

}
if (OpcionesNivel2 == 3)
{
do
{
ElevadorMenu();
RepetirOContinuar();
} while (OpcionRepetir != 2);
}
if (OpcionesNivel2 == 4)
{
RepetirOContinuar();
}
} while (OpcionesNivel2 != 5);
}

if (OpcionesNivel1 == 3)
{
do
{
SubMenuPagosEImpuestos();
if (OpcionesNivel2 == 1)
{
do
{
ImpuestoPredial();
RepetirOContinuar();
} while (OpcionRepetir != 2);

}
if (OpcionesNivel2 == 2)
{
do
{
PagoMensual();
RepetirOContinuar();
} while (OpcionRepetir != 2);

}
if (OpcionesNivel2 == 3)
{
do
{
NotaNesaria();
RepetirOContinuar();

} while (OpcionRepetir != 2);
}
} while (OpcionesNivel2 != 4);

}

if (OpcionesNivel1 == 4)
{
printf("----------PROGRAMA-----------\n");
printf("-----------ACABADO-----------\n");
}

} while (OpcionesNivel1 != 4);

}

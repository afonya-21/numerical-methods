#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
double PI = 3.1415926535;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	chislmetlab1komanda4::MyForm form; 
	Application::Run(% form);
}

//тестовая
double chislmetlab1komanda4::calculateTest(double Vi, double hi)
{
    double k1, k2, k3, k4;

    k1 = 2 * Vi;
    k2 = 2 * (Vi + k1 * hi / 4);
    k3 = 2 * (Vi + k2 * hi / 2);
    k4 = 2 * (Vi + hi * (k1 - 2 * k2 + 2 * k3));

    return k1 + 4 * k3 + k4;
}


//Основная №1
double chislmetlab1komanda4::calculateOSN_1(double x, double V, double h)
{
    double k1, k2, k3, k4;

    k1 = supportOSN_1(x, V); 

    k2 = supportOSN_1(x+h/4, V + (h/4)*k1); 

    k3 = supportOSN_1(x + h / 2, V + (h / 2) * k2);

    k4 = supportOSN_1(x + h, V + h * (k1 - 2 * k2 + 2 * k3));

    return (k1 + 4*k3 + k4);
}

double chislmetlab1komanda4::supportOSN_1(double x, double V)
{
    return (pow(x,3)+1) / (pow(x, 5) + 1) * pow(V, 2) + V - pow(V, 3) * sin(10*x);
}




//Основная №2
double chislmetlab1komanda4::calculateOSN_2(double a, double b, double c, double Vi, double Vi_pr, double hi)
{
    double k1, k2, k3, k4;

    k1 = supportOSN_2(a, b, c, Vi, Vi_pr);

    k2 = supportOSN_2(a, b, c, Vi+(hi/4)*k1, Vi_pr + (hi / 4) * k1);

    k3 = supportOSN_2(a, b, c, Vi + (hi / 2) * k2, Vi_pr + (hi / 2) * k2);

    k4 = supportOSN_2(a, b, c, Vi + hi*(k1-2*k2+2*k3), Vi_pr + hi * (k1 - 2 * k2 + 2 * k3));

    return (k1 + 4 * k3 + k4);
}

double chislmetlab1komanda4::calculateOSN_2_pr(double Vi, double hi)
{
    double k1, k2, k3, k4;

    k1 = supportOSN_2_pr(Vi);

    k2 = supportOSN_2_pr(Vi+(hi/4)*k1);

    k3 = supportOSN_2_pr(Vi + (hi / 2) * k2);

    k4 = supportOSN_2_pr(Vi + hi*(k1-2*k2+2*k3));

    return (k1 + 4 * k3 + k4);
}

double chislmetlab1komanda4::supportOSN_2(double a, double b, double c, double Vi, double Vi_pr)
{
    return -1*a*Vi*abs(Vi)-b*Vi-c*Vi_pr;
}

double chislmetlab1komanda4::supportOSN_2_pr(double Vi)
{
    return Vi;
}



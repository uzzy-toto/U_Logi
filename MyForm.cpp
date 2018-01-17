#include "MyForm.h"

using namespace Project2;

[STAThreadAttribute]
int main() {
	U_Logi ^fm = gcnew U_Logi();
	fm->ShowDialog();
	return 0;
}
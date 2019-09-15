#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project8::MyForm f;
	Application::Run(% f);
	
	return 0;

}
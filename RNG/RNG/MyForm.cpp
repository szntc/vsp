#include "MyForm.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	RNG::MyForm form;
	Application::Run(%form);
}

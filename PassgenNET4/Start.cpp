#include "Start.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PassgenNET4::Start form;
	Application::Run(%form);
} 



/* using namespace PassgenNET4;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);

// Создание главного окна и его запуск
Application::Run(gcnew Start());
return 0;
}
*/
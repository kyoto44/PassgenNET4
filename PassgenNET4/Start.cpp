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
// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);

// �������� �������� ���� � ��� ������
Application::Run(gcnew Start());
return 0;
}
*/
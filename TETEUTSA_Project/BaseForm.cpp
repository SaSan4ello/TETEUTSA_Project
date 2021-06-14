#include "BaseForm.h"
#include "TursForm.h"

using namespace System;
using namespace System::Windows::Forms;

namespace TETEUTSAProject {
	System::Void BaseForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		tursForm = gcnew TursForm();
		tursForm->Show();
		this->Hide();
	}
}

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TETEUTSAProject::BaseForm form;
	Application::Run(% form);
}
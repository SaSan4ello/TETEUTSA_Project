#include "TursForm.h"
#include "BaseForm.h"
#include "BronForm.h"

namespace TETEUTSAProject {
	System::Void TursForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
		parentForm = gcnew BaseForm();
		parentForm->Show();
		this->Hide();
	}
	System::Void TursForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		bronForm = gcnew BronForm();
		bronForm->Show();
		this->Hide();
	}
}

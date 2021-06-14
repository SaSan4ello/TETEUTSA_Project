#include "BronForm.h"
#include "TursForm.h"
#include "BronForm.h"

namespace TETEUTSAProject {
	System::Void BronForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
		tursForm = gcnew TursForm();
		tursForm->Show();
		this->Hide();
	}
}
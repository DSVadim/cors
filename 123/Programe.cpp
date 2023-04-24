#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	while (true) {
		my123::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.switchToRegister) {
			//show the register form
			my123::RegisterForm registerForm;
			registerForm.ShowDialog();

			if (registerForm.switchToLogin) {
				continue;
			}

		}

	}


}

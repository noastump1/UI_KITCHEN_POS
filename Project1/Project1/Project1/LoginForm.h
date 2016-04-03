#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_enter;
	private: System::Windows::Forms::Label^  lb_user;
	private: System::Windows::Forms::Label^  lb_pass;
	private: System::Windows::Forms::TextBox^  txtbox_User;
	private: System::Windows::Forms::TextBox^  txtbox_Pass;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel1;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel2;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;




	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_enter = (gcnew System::Windows::Forms::Button());
			this->lb_user = (gcnew System::Windows::Forms::Label());
			this->lb_pass = (gcnew System::Windows::Forms::Label());
			this->txtbox_User = (gcnew System::Windows::Forms::TextBox());
			this->txtbox_Pass = (gcnew System::Windows::Forms::TextBox());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_enter
			// 
			this->btn_enter->Location = System::Drawing::Point(172, 185);
			this->btn_enter->Name = L"btn_enter";
			this->btn_enter->Size = System::Drawing::Size(75, 23);
			this->btn_enter->TabIndex = 0;
			this->btn_enter->Text = L"Enter";
			this->btn_enter->UseVisualStyleBackColor = true;
			this->btn_enter->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lb_user
			// 
			this->lb_user->AutoSize = true;
			this->lb_user->Location = System::Drawing::Point(75, 69);
			this->lb_user->Name = L"lb_user";
			this->lb_user->Size = System::Drawing::Size(58, 13);
			this->lb_user->TabIndex = 1;
			this->lb_user->Text = L"Username:";
			// 
			// lb_pass
			// 
			this->lb_pass->AutoSize = true;
			this->lb_pass->Location = System::Drawing::Point(77, 129);
			this->lb_pass->Name = L"lb_pass";
			this->lb_pass->Size = System::Drawing::Size(56, 13);
			this->lb_pass->TabIndex = 2;
			this->lb_pass->Text = L"Password:";
			// 
			// txtbox_User
			// 
			this->txtbox_User->Location = System::Drawing::Point(162, 66);
			this->txtbox_User->Name = L"txtbox_User";
			this->txtbox_User->Size = System::Drawing::Size(100, 20);
			this->txtbox_User->TabIndex = 3;
			// 
			// txtbox_Pass
			// 
			this->txtbox_Pass->Location = System::Drawing::Point(162, 126);
			this->txtbox_Pass->Name = L"txtbox_Pass";
			this->txtbox_Pass->Size = System::Drawing::Size(100, 20);
			this->txtbox_Pass->TabIndex = 4;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripLabel1,
					this->toolStripButton1, this->toolStripSeparator1, this->toolStripLabel2, this->toolStripButton2, this->toolStripSeparator2,
					this->toolStripLabel3, this->toolStripButton3
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(407, 25);
			this->toolStrip1->TabIndex = 5;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(23, 22);
			this->toolStripButton1->Text = L"TOOOOOl";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(86, 22);
			this->toolStripLabel1->Text = L"toolStripLabel1";
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->Name = L"toolStripLabel2";
			this->toolStripLabel2->Size = System::Drawing::Size(86, 22);
			this->toolStripLabel2->Text = L"toolStripLabel2";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			// 
			// toolStripLabel3
			// 
			this->toolStripLabel3->Name = L"toolStripLabel3";
			this->toolStripLabel3->Size = System::Drawing::Size(86, 22);
			this->toolStripLabel3->Text = L"toolStripLabel3";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 357);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->txtbox_Pass);
			this->Controls->Add(this->txtbox_User);
			this->Controls->Add(this->lb_pass);
			this->Controls->Add(this->lb_user);
			this->Controls->Add(this->btn_enter);
			this->Name = L"MyForm";
			this->Text = L"Login";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

}

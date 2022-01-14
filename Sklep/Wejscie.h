#pragma once
#include "DzialSpozywczy.h"
#include "Logowanie.h"
namespace Sklep {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Wejscie
	/// </summary>
	public ref class Wejscie : public System::Windows::Forms::Form
	{
	public:
		Wejscie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Wejscie()
		{
			if (components)
			{
				delete components;
			}
		}
		DzialSpozywczy^ Spozywcze;
		Logowanie^ Sprawdzenie;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 88);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Pracownik";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Wejscie::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(395, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 88);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Klient";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Wejscie::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(205, 146);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 34);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Witaj w naszym sklepie";
			// 
			// Wejscie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 525);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Wejscie";
			this->Text = L"Wejscie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Sprawdzenie = gcnew Logowanie;
		Sprawdzenie->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Spozywcze = gcnew DzialSpozywczy;
		Spozywcze->ShowDialog();
	}
	};
}

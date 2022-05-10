#pragma once
#include<stdlib.h>
#include<time.h>
#define SWAP(x,y,t) (t=x,x=y,y=t)
#define SIZE 100000

int data[SIZE];
int original_data[SIZE];
double SelectionTime[100];
double BubbleTime[100];
double QuickTime[100];
double InsertionTime[100];

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
		   //private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(31, 17);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(107, 25);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"10";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(58, 48);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(107, 25);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"3000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"n=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"range=";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 91);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Generate Random Numbers";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(11, 135);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(218, 274);
			this->listBox1->TabIndex = 5;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(234, 135);
			this->listBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(192, 274);
			this->listBox2->TabIndex = 6;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 15;
			this->listBox3->Location = System::Drawing::Point(431, 135);
			this->listBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(192, 274);
			this->listBox3->TabIndex = 7;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 15;
			this->listBox4->Location = System::Drawing::Point(628, 135);
			this->listBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(192, 274);
			this->listBox4->TabIndex = 8;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(352, 15);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(90, 19);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Echo Print";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(348, 52);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(91, 19);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"Self Check";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 91);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 39);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Selection Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(460, 91);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 39);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Bubble Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(655, 88);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 42);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Quick Sort";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 15;
			this->listBox5->Location = System::Drawing::Point(826, 135);
			this->listBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(192, 274);
			this->listBox5->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(863, 89);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(126, 42);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Insertion Sort";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(484, 43);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(139, 42);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Binary Search";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(524, 14);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(107, 25);
			this->textBox3->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(467, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 15);
			this->label3->TabIndex = 18;
			this->label3->Text = L"target=";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 15;
			this->listBox6->Location = System::Drawing::Point(650, 15);
			this->listBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(276, 64);
			this->listBox6->TabIndex = 19;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(931, 32);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(82, 34);
			this->button7->TabIndex = 20;
			this->button7->Text = L"clear";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(234, 17);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(107, 25);
			this->textBox4->TabIndex = 22;
			this->textBox4->Text = L"1";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(234, 48);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(107, 25);
			this->textBox5->TabIndex = 23;
			this->textBox5->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(147, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 15);
			this->label4->TabIndex = 24;
			this->label4->Text = L"repeatition=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(188, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 15);
			this->label5->TabIndex = 25;
			this->label5->Text = L"step=";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1049, 449);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void printData(int data[], int n, int flag) {
			int i;
			switch (flag) {
			case 1:
				for (i = 0;i < n;i++)
					listBox1->Items->Add("data[" + i + "] = " + data[i]);
				break;
			case 2:
				for (i = 0; i < n; i++)
					listBox2->Items->Add("data[" + i + "] = " + data[i]);
				break;
			case 3:
				for (i = 0; i < n; i++)
					listBox3->Items->Add("data[" + i + "] = " + data[i]);
				break;
			case 4:
				for (i = 0; i < n; i++)
					listBox4->Items->Add("data[" + i + "] = " + data[i]);
				break;
			case 5:
				for (i = 0; i < n; i++)
					listBox5->Items->Add("data[" + i + "] = " + data[i]);
				break;

			}
		}
		void getdata(int data[], int original_data[], int n) {
			for (int i = 0; i < n; i++)
				data[i] = original_data[i];
		}
		bool CHECK(int data[], int n) {
			for (int i = 1; i < n; i++) {
				if (data[i] < data[i - 1]) {
					return 0;
					break;
				}
			}
			return 1;
		}
		void checkdata(int data[], int n, int flag) {
			int i;
			for (i = 0; i < n - 1; i++) {
				if (data[i] < data[i - 1])
					break;
			}
			switch (flag) {
			case 2:
				if (i == n - 1)
					listBox2->Items->Add("Correctly Sorted");
				else
					listBox2->Items->Add("Sort Incorrect");
				break;
			case 3:
				if (i == n - 1)
					listBox3->Items->Add("Correctly Sorted");
				else
					listBox3->Items->Add("Sort Incorrect");
				break;
			case 4:
				if (i == n - 1)
					listBox4->Items->Add("Correctly Sorted");
				else
					listBox4->Items->Add("Sort Incorrect");
				break;
			case 5:
				if (i == n - 1)
					listBox5->Items->Add("Correctly Sorted");
				else
					listBox5->Items->Add("Sort Incorrect");
				break;
			}
		}
		void SelectionSort(int data[], int n) {
			int i, j, min, temp;
			for (i = 0; i < n; i++) {
				min = i;
				for (j = i + 1; j < n; j++) {
					if (data[j] < data[min])
						min = j;
				}
				temp = data[i];
				data[i] = data[min];
				data[min] = temp;
			}
		}
		void BubbleSort(int data[], int n) {
			int temp;
			for (int i = n - 1; i > 0; i--) {
				for (int j = 1; j <= i; j++) {
					if (data[j - 1] > data[j])
						SWAP(data[j - 1], data[j], temp);
				}
			}
		}
		void QuickSort(int data[], int left, int right) {
			int i, j, target;
			int temp;
			if (left < right) {
				i = left + 1;
				j = right;
				target = data[left];
				do {
					while (data[i] < target && i <= j)
						i++;
					while (data[j] >= target && i <= j)
						j--;
					if (i < j)
						SWAP(data[i], data[j], temp);
				} while (i < j);
				if (left < j)
					SWAP(data[left], data[j], temp);
				QuickSort(data, left, j - 1);
				QuickSort(data, j + 1, right);
			}
		}
		void InsertionSort(int data[], int n) {
			int i, j, target;
			for (i = 1; i < n; i++) {
				target = data[i];
				j = i;
				while ((data[j - 1] > target) && (j > 0)) {
					data[j] = data[j - 1];
					j--;
				}
				data[j] = target;
			}
		}
		int BinarySearch(int data[], int n, int target) {
			int mid;
			int left = 0, right = n;
			while (left <= right) {
				mid = (left + right) / 2;
				if (target < data[mid])
					right = mid - 1;
				else if (target == data[mid])
					return mid;
				else
					left = mid + 1;
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = int::Parse(textBox1->Text);
		int i;
		int range = int::Parse(textBox2->Text);
		srand(time(NULL));
		for (i = 0; i < n; i++) {
			original_data[i] = rand() % range + 1;
		}
		if (checkBox1->Checked) printData(original_data, n, 1);
		listBox1->Items->Add(n + " numbers are generated.");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = int::Parse(textBox1->Text);
		int i;
		int repeatition = int::Parse(textBox4->Text);
		int step = int::Parse(textBox5->Text);
		clock_t start, end;
		double duration;
		for (i = 0; i < repeatition; i++) {
			getdata(data, original_data, n);
			start = clock();
			SelectionSort(data, n);
			end = clock();
			duration = (double)(end - start) / CLOCKS_PER_SEC;
			if (checkBox1->Checked) printData(data, n, 2);
			if (checkBox2->Checked) checkdata(data, n, 2);
			listBox2->Items->Add("Selection Sort: " + duration + "(sec.)");
			SelectionTime[i] = duration;
			n += step;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = int::Parse(textBox1->Text);
		int i;
		int repeatition = int::Parse(textBox4->Text);
		int step = int::Parse(textBox5->Text);
		clock_t start, end;
		double duration;
		for (i = 0; i < repeatition; i++) {
			getdata(data, original_data, n);
			start = clock();
			BubbleSort(data, n);
			end = clock();
			duration = (double)(end - start) / CLOCKS_PER_SEC;
			if (checkBox1->Checked) printData(data, n, 3);
			if (checkBox2->Checked) checkdata(data, n, 3);
			listBox3->Items->Add("Bubble Sort: " + duration + "(sec.)");
			BubbleTime[i] = duration;
			n += step;
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = int::Parse(textBox1->Text);
		int i;
		int repeatition = int::Parse(textBox4->Text);
		int step = int::Parse(textBox5->Text);
		clock_t start, end;
		double duration;
		for (i = 0; i < repeatition; i++) {
			getdata(data, original_data, n);
			start = clock();
			QuickSort(data, 0, n - 1);
			end = clock();
			duration = (double)(end - start) / CLOCKS_PER_SEC;
			if (checkBox1->Checked) printData(data, n, 4);
			if (checkBox2->Checked) checkdata(data, n, 4);
			listBox4->Items->Add("Quick Sort: " + duration + "(sec.)");
			QuickTime[i] = duration;
			n += step;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = int::Parse(textBox1->Text);
		int i;
		int repeatition = int::Parse(textBox4->Text);
		int step = int::Parse(textBox5->Text);
		clock_t start, end;
		double duration;
		for (i = 0; i < repeatition; i++) {
			getdata(data, original_data, n);
			start = clock();
			InsertionSort(data, n);
			end = clock();
			duration = (double)(end - start) / CLOCKS_PER_SEC;
			if (checkBox1->Checked) printData(data, n, 5);
			if (checkBox2->Checked) checkdata(data, n, 5);
			listBox5->Items->Add("Insertion Sort: " + duration + "(sec.)");
			InsertionTime[i] = duration;
			n += step;
		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int target = int::Parse(textBox3->Text);
		int n = int::Parse(textBox1->Text);
		getdata(data, original_data, n);
		QuickSort(data, 0, n - 1);
		int success = -1;
		success = BinarySearch(data, n, target);
		if (success >= 0 && success < n)
			listBox6->Items->Add(target + " has been found in data[" + BinarySearch(data, n, target) + "] !");
		else
			listBox6->Items->Add(target + " has not been found in this data !");

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		listBox2->Items->Clear();
		listBox3->Items->Clear();
		listBox4->Items->Clear();
		listBox5->Items->Clear();
		listBox6->Items->Clear();
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "1";
		textBox5->Text = "0";
		//chart1->Series->Clear();
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}/*
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series->Clear();
		chart1->Series->Add("Selection");
		chart1->Series->Add("Bubble");
		chart1->Series->Add("Quick");
		chart1->Series->Add("Insertion");
		int n = int::Parse(textBox1->Text);
		int i;
		int repeatition = int::Parse(textBox4->Text);
		int step = int::Parse(textBox5->Text);
		if (radioButton1->Checked) {
			chart1->Series["Selection"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
			chart1->Series["Bubble"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
			chart1->Series["Quick"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
			chart1->Series["Insertion"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		}
		if (radioButton2->Checked) {
			chart1->Series["Selection"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart1->Series["Bubble"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart1->Series["Quick"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart1->Series["Insertion"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
		}
		if (radioButton3->Checked) {
			chart1->Series["Selection"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			chart1->Series["Bubble"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			chart1->Series["Quick"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
			chart1->Series["Insertion"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
		}
		if (radioButton4->Checked) {
			chart1->Series["Selection"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			chart1->Series["Bubble"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			chart1->Series["Quick"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			chart1->Series["Insertion"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		}
		if (radioButton5->Checked) {
			chart1->Series["Selection"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			chart1->Series["Bubble"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			chart1->Series["Quick"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			chart1->Series["Insertion"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
		}
		for (i = 0; i < repeatition; i++) {
			chart1->Series["Selection"]->Points->AddXY(n, SelectionTime[i]);
			chart1->Series["Bubble"]->Points->AddXY(n, BubbleTime[i]);
			chart1->Series["Quick"]->Points->AddXY(n, QuickTime[i]);
			chart1->Series["Insertion"]->Points->AddXY(n, InsertionTime[i]);
			n += step;
		}
	}
	};*/
	};
}
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;

void after_login()
{
	int c,d,c1,c2,c3,c4,c5,e,f,g,h,i,j,k,l,m,n,count=0;
	char ch,b;
	fflush(stdin);
	system("cls");
	cout<<"\nCITIES";
	cout<<"\n\n1.BENGULURU\n2.MUMBAI\n3.KOLKATA\n4.GUWAHATI\n5.CHENNAI\n6.LUCKNOW\n7.CHANDIGARH\n8.PUNE\n";
	cout<<"\nENTER YOUR CHOICE....->\n";
	cin>>c;
	cout<<"\nSelect your Doctor\n";
	switch(c)
	{
		case 1:
			cout<<"\n----------------------------------------------------------------\n";
			cout<<"1.Dr. MD IMRAN KHAN"<<endl;
			cout<<"2.Dr. KRISH DUTTA"<<endl;
			cout<<"3.Dr. NEHA JAIN"<<endl;
			cout<<"4.Dr. ADI CHOPRA"<<endl;
			cout<<"5.Dr. KARAN NAIR"<<endl;
			cout<<"\nENTER YOUR CHOICE\n";
			cin>>c1;
			break;
		case 2:
			cout<<"\n----------------------------------------------------------------\n";
			cout<<"1.Dr. BK GHATKE"<<endl;
			cout<<"2.Dr. SAGAR CHAVAN"<<endl;
			cout<<"3.Dr. DARSHAN GHADPADE"<<endl;
			cout<<"4.Dr. KIRAN AGARWAL"<<endl;
			cout<<"5.Dr. SIMRAN JAISWAL"<<endl;
			cout<<"\nENTER YOUR CHOICE\n";
			cin>>c1;
			break;
		case 3:
			cout<<"\n----------------------------------------------------------------\n";
			cout<<"1.Dr. KC DAS"<<endl;
			cout<<"2.Dr. ARUN DAVE"<<endl;
			cout<<"3.Dr. SHIVAM RANA"<<endl;
			cout<<"4.Dr. SUMI SARKAR"<<endl;
			cout<<"5.Dr. J SUMAR"<<endl;
			cout<<"\nENTER YOUR CHOICE\n";
			cin>>c1;
			break;
		case 4:
			cout<<"\n----------------------------------------------------------------\n";
			cout<<"1.Dr. BD GOSWAMI"<<endl;
			cout<<"2.Dr. ARUN KALITA"<<endl;
			cout<<"3.Dr. CHINMAY KAUSHIK"<<endl;
			cout<<"4.Dr. ABHI SHARMA"<<endl;
			cout<<"5.Dr. NEHA DAS"<<endl;
			cout<<"\nENTER YOUR CHOICE\n";
			cin>>c1;
			break;
		case 5:
			cout<<"\n----------------------------------------------------------------\n";
			cout<<"1.Dr. K IYYER"<<endl;
			cout<<"2.Dr. K AGARWAL"<<endl;
			cout<<"3.Dr. BIPASHA JAIN"<<endl;
			cout<<"4.Dr. V TEJA"<<endl;
			cout<<"5.Dr. R SUBRAMNIAM"<<endl;
			cout<<"\nENTER YOUR CHOICE\n";
			cin>>c1;
			break;
		case 6:
			cout<<"\n----------------------------------------------------------------\n";
			cout<<"1.Dr. ALOK PANDY"<<endl;
			cout<<"2.Dr. SAURABH SINGH"<<endl;
			cout<<"3.Dr. PREETI VERMA"<<endl;
			cout<<"4.Dr. ABHINASH SINGH"<<endl;
			cout<<"5.Dr. MD JAVED KHAN"<<endl;
			cout<<"\nENTER YOUR CHOICE\n";
			cin>>c1;
			break;
		case 7:
			cout<<"\n----------------------------------------------------------------\n";
			cout<<"1.Dr. MAYANK SINGH"<<endl;
			cout<<"2.Dr. GURAMRIT MAAN SINGH"<<endl;
			cout<<"3.Dr. RAHUL SHARMA"<<endl;
			cout<<"4.Dr. GURPAL SINGH"<<endl;
			cout<<"5.Dr. KAPIL SHARMA"<<endl;
			cout<<"\nENTER YOUR CHOICE\n";
			cin>>c1;
			break;
		case 8:
			cout<<"\n----------------------------------------------------------------\n";
			cout<<"1.Dr. KB APTE"<<endl;
			cout<<"2.Dr. MK GUPTA"<<endl;
			cout<<"3.Dr. MD GULAM NABI"<<endl;
			cout<<"4.Dr. K AGARWAL"<<endl;
			cout<<"5.Dr. AKASH PANDEY"<<endl;
			cout<<"\nENTER YOUR CHOICE\n";
			cin>>c1;
			break;
	}
}
void doc_login()
{
	string doc_name,doc_pass;
    cout << "Please enter Username:" << endl;
    cin >> doc_name;
    cout << "Please enter your password:" << endl;
    cin >> doc_pass;
    if (doc_pass == "1234")
	{
        cout<<"You are sucessfully logged in"<<endl;
        getch();
        system("cls");
    }
    else
	{
        cout << "Sorry invalid" << endl;
        getch();
        system("cls");
    }
}
class patient
{
	public:
		string name,address,reg_no,pass,repass,mob_no;
		string d_id,d_name,d_address,d_no,d_loc,d_time;
		int age;
		int p_age;
		string p_name,p_no;
		//string ad_p_name;
		void booking();
		void show_patient();
		void doc_reg();
		void show_doc();
		void Login()
		{
			system("cls");
			cout<<"\t\t\t| WELCOME TO LOGIN PAGE  |\n\t\t\t\t\t\n\t\t\t  ---------------------------"<<endl;
			fflush(stdin);
			cout<<"\n\n\n     Login ID :        ";
			getline(cin,reg_no);
			fflush(stdin);
			cout<<"\n     Password :        ";
			getline(cin,pass);
			fflush(stdin);
			system("cls");
			after_login();
			fflush(stdin);
			system("cls");
		}
		void Register()
		{
			system("cls");
			cout<<"\t\t\t| WELCOME TO REGISTRATION PAGE  |\n\t\t\t\t\t\n\t\t\t  ---------------------------"<<endl;
			fflush(stdin);
        	cout<<"Complete your registration\n"<<endl;
        	cout<<"Name:        ";
        	getline(cin,name);
        	fflush(stdin);
        	cout<<endl<<"Reg No:        ";
        	getline(cin,reg_no);
        	fflush(stdin);
        	cout<<endl<<"Address:        ";
        	getline(cin,address);
        	fflush(stdin);
        	cout<<endl<<"Age:        ";
        	cin>>age;
        	fflush(stdin);
        	cout<<endl<<"Mobile No:        ";
        	getline(cin,mob_no);
        	fflush(stdin);
        	cout<<endl<<"Enter Password:        ";
        	getline(cin,pass);
        	fflush(stdin);
        	cout<<endl<<"Confirm Password:        ";
        	getline(cin,repass);
        	fflush(stdin);
        	if(pass==repass)
        	{

			}
			else
			{
				cout<<endl<<"Password Not Matching";
				getch();
				system("cls");
				Register();
			}
		}
		void doc_list()
		{
			cout<<"Doctor Name: ";
			cout<<d_name;
		}
		void patient_list()
		{
			cout<<"Patient Name :  ";
			cout<<p_name;
		}
};
void patient::show_patient()
{
    system("cls");
    fflush(stdin);
    cout<<"Patient Details  \n";
    cout<<name<<endl;
    cout<<"Reg No:  ";
    cout<<reg_no<<endl;
    cout<<"Address:     ";
    cout<<address;
    cout<<endl<<"Age:   ";
    cout<<age;
    cout<<endl<<"Mobile No: ";
    cout<<mob_no;
}
void patient::booking()
{
	cout<<"\t\t\t| WELCOME TO BOOKING PAGE  |\n\t\t\t\t\t\n\t\t\t  -----------------------"<<endl;
	cout<<"Enter your name:		"<<endl;
	getline(cin,p_name);
    fflush(stdin);
    cout<<"Enter your age:		"<<endl;
    cin>>p_age;
    fflush(stdin);
    cout<<"Enter your phone number:		"<<endl;
    getline(cin,p_no);
    fflush(stdin);
    cout<<"************Appointment is Booked************"<<endl;
}
void patient::doc_reg()
{
        cout<<"\t\t\t| WELCOME TO REGISTRATION PAGE  |\n\t\t\t\t\t\n\t\t\t  ---------------------------"<<endl;
        fflush(stdin);
        cout<<"Enter your id:		"<<endl;
        getline(cin,d_id);
        fflush(stdin);
        cout<<"Enter your name:		"<<endl;
        getline(cin,d_name);
        fflush(stdin);
        cout<<"Enter your address:		"<<endl;
        getline(cin,d_address);
        fflush(stdin);
        cout<<"Enter your phone number:		"<<endl;
        getline(cin,d_no);
        fflush(stdin);
        cout<<"Enter your location:		"<<endl;
        getline(cin,d_loc);
        fflush(stdin);
        cout<<"Enter your Opening and closing time:		"<<endl;
        getline(cin,d_time);
        fflush(stdin);
}
void patient::show_doc()
{
    fflush(stdin);
    cout<<"Doctor Details"<<endl;
	cout<<"Id:	    ";
	cout<<d_id<<endl;
	cout<<"Name:    ";
	cout<<d_name<<endl;
    cout<<"Address: ";
    cout<<d_address<<endl;
    cout<<"Phone number: ";
    cout<<d_no<<endl;
    cout<<"Location:";
    cout<<d_loc<<endl;
    cout<<"Opening and  Closing time: ";
    cout<<d_time<<endl;
}
int main()
{
	int choice;
    int pat_choice;
    int doc_choice;
    int adm_choice;
    string adm_cit;
	patient obj1;
	system("color 3F");
	cout<<"\t\t\t\t\t| WELCOME TO DEV HOSPITAL  |\n\t\t\t\t\t|      FULLY AUTOMATIC     |\n\t\t\t\t\t---------------------------";
	cout<<"\n\n\n\t\t\t"<<endl;
	cout<<"1. Patient\t\t\t\t2.Doctor\t\t\t\t3.Admin\t\t\t\t4.EXIT"<<endl;
	cout<<"\n\n\n\t\t\t"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	if(choice == 1)
	{
		system("cls");
		cout<<"\t\t\t\t\t| WELCOME TO DEV HOSPITAL  |\n\t\t\t\t\t|     FULLY AUTOMATIC     |\n\t\t\t\t\t---------------------------";
	cout<<"\n\n\n\t\t\t"<<endl;
		cout<<"1. Login\t\t\t\t2. Registration"<<endl;
		cout<<"\n\n\n\t\t\t"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>pat_choice;
		if(pat_choice==1)
		{
			obj1.Login();
			ofstream FILE;
			FILE.open("Patient_Login.txt",ios::out);
            obj1.booking();
            FILE.write((char*)&obj1,sizeof(obj1));
            FILE.close();
		}
		else if(pat_choice==2)
		{
			ofstream FILE;
			FILE.open("Patient_Register.txt",ios::out);
            obj1.Register();
            FILE.write((char*)&obj1,sizeof(obj1));
            FILE.close();
		}
		else
		{
			cout<<"INVALID INPUT";
			getch();
			system("cls");
		}
	}
	else if(choice == 2)
	{
		system("cls");
		cout<<"\t\t\t\t\t| WELCOME TO DEV HOSPITAL  |\n\t\t\t\t\t|    FULLY AUTOMATIC     |\n\t\t\t\t\t---------------------------";
		cout<<"\n\n\n\t\t\t"<<endl;
		cout<<"1. Login\t\t\t\t2. Registration"<<endl;
		cout<<"\n\n\n\t\t\t"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>doc_choice;
		if(doc_choice==1)
        {
            doc_login();
        }
        else if(doc_choice==2)
        {
            ofstream FILE;
			FILE.open("Doc_Register.txt",ios::out);
            obj1.doc_reg();
            FILE.write((char*)&obj1,sizeof(obj1));
            FILE.close();
        }
        else
		{
			cout<<"INVALID INPUT";
			getch();
			system("cls");
		}
	}
	else if(choice == 3)
	{
		system("cls");
		cout<<"\t\t\t\t\t| WELCOME TO DEV HOSPITAL  |\n\t\t\t\t\t|    FULLY AUTOMATIC     |\n\t\t\t\t\t---------------------------";
		cout<<"\n\n\n\t\t\t"<<endl;
		cout<<"1. Doctor Registration\t2. Patient Registration\t3. Doctor List\t4. Patient List\t5. Add Cities"<<endl;
		cout<<"\n\n\n\t\t\t"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>adm_choice;
        if(adm_choice==1)
        {
            system("cls");
            fstream FILE;
            FILE.open("Doc_Register.txt",ios::in|ios::binary);
            FILE.read((char*)&obj1,sizeof(obj1));
            obj1.show_doc();
            FILE.close();
            cout<<"\n\nPRESS ENTER\n";
            getch();
            system("cls");
        }
        else if(adm_choice==2)
        {
            system("cls");
            fstream FILE;
            FILE.open("Patient_Register.txt",ios::in|ios::binary);
            FILE.read((char*)&obj1,sizeof(obj1));
            obj1.show_patient();
            FILE.close();
            cout<<"\n\nPRESS ENTER\n";
            getch();
            system("cls");
        }
        else if(adm_choice==3)
        {
            system("cls");
            fstream FILE;
            FILE.open("Doc_Register.txt",ios::in|ios::binary);
            FILE.read((char*)&obj1,sizeof(obj1));
            obj1.doc_list();
            FILE.close();
            cout<<"\n\nPRESS ENTER\n";
            getch();
            system("cls");
        }
        else if(adm_choice==4)
        {
            system("cls");
            fstream FILE;
            FILE.open("Patient_Login.txt",ios::in|ios::binary);
            FILE.read((char*)&obj1,sizeof(obj1));
            obj1.patient_list();
            FILE.close();
            cout<<"\n\nPRESS ENTER\n";
            getch();
            system("cls");
        }
        else if(adm_choice==5)
        {
        	cout<<"Enter cities:	"<<endl;
        	cin>>adm_cit;
        }
        else
		{
			cout<<"INVALID INPUT";
			getch();
			system("cls");
        }
	}
	else if(choice==4)
	{
		exit(1);
	}

	else
	{
		cout<<"INVALID INPUT";
		getch();
		system("cls");
	}
	system("cls");
	main();
}

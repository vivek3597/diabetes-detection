#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<unistd.h>
#include<time.h>
#include<iomanip>
using namespace std;
int wholecheck=0;
int counter1=0,counter;
fstream fin,fout,fturndoc,ftemp,fadmin,fcross,fsum;
class problems;
class Login;
class diabetes
{
        int id;
     	char name[200];
    	int age;
    	float height;
    	float weight;
	    char sex;
     	long long int phn;
     	public:
		friend class doctor;
		friend class problems;
		friend class Login;
		friend class adminstration;
		friend class patient;
		void twist();                                //after thinking a lot i decided;
		void welcome();
		void enterdata();
		void doctorlist();
		void test();
		void totaltest();
		void search();
		void deldata();
		void prereport();
		void aboutme();
		void admin();
		void reply();
		void setlock();
		void queries();
		int report();
		int display(int,int);
		void showqu();
		void update();
		void adminre();
	    void patientlogin();
		void treatrecord();//left
}mainobj;


class Login
{
	public:
		friend class doctors;
		friend class problems;
		friend class diabetes;
		void password();
}passo;


class doctor
{
	public:
		friend class diabetes;
		int id;
		int idofdoc;
		struct date
		{
			int d,m,y;
		}st;
}docp;


class problems
{
	public:
		friend class diabetes;
    int id,vision,thirst,hunger,furine;//furine=urine frequency//
    char bg[2];
	int headche,fatigue;
	char fam,weight;
	char food;
	float sugarlevel;
	float blpressurenum,blpressuredem;
	float bloodcount;
	float glucoselevel;	
	float glucose1;
}objp;
class bill
{
		friend class doctor;
		friend class problems;
		friend class Login;
		friend class adminstration;
		friend class patient;
	public:
    int id;	
    int billid;
	int sum;
	enum fee{Thakur=1000,Grover=1500,Chawla=1500,Joradan=2000,JazzyB=3000};
    void total();

}bobj;
class patient
{
	    public:
		friend class problems;
		friend class diabetes;
		friend class quick;
		friend class doctor;
		int buyid;
		void updatemine();
		void buy();
		void medicare();
		void diseaselevel();
		void seem();
		void complaints();
		void docchange();
		char comp[2000];
		char send[2000];
}pa;

class adminstration
{
	    private:
		int id;                    //patientid
		int stid;                  //staffid  
        char name[30];             //staffname
        char dname[30];            //doctorname   1st thought of in doctorlist but failed
        int  did;                  //doctor id
        long long int phna;
        char userid[30];           //staff user id
        char password[30];         //password staff
        public:
        int medid;                 //medicine id    
        char medicines[300];       //medicine name
        float medprice;              //price	
        char re[200];
        friend class problems;
		friend class diabetes;
		friend class doctor;
		friend class paitent;	
        void stpassword();
		void medi();               //medicine name provider along price
		void calcbill();           //along with medicines and doctor fees if no medi then only that	
		void adddoc();             //junior doctors
        void adminsi();
        void count();
        void duty();
        void complains();
        void msgs();
		//class risk
		//{
		//	public:
			
			
			
				
		//};
}admino;
class discuss
{
    public:
	friend class diabetes;
	friend class doctors;
	friend class patient;
	friend class problems;
	friend class adminstration;
	int id;
	char name[20];
	char reply[200000];
	char input[200000];	
}q;
class finalreport

{
	public:
	friend class diabetes;
	friend class doctors;
	friend class patient;
	friend class problems;
	int id;                         // to detect	
	char dbresult;                  //level		
}freport;
class quick
{
char name[300];
int gid;
int age;
float sugar;
float weight;
float bodytemp;
	int mchoice;
	void buy();
	public:
		friend class diabetes;
		friend class patient;
		quick()
		{
			char ch;
	system("cls");
 	char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	cout<<"\n\n Enter the name : ";
	fflush(stdin);
	gets(name);
	srand((time(NULL)));
	gid=rand()%1161400+200000;	
	cout<<"\n\n ID Generated : ";	
	cout<<gid;
	cout<<"\n\n Enter Age : ";
	cin>>age;	
	cout<<"\n\n Do you Symptons like becoming//having :\n\n 1>THIRSTY 2>Weight Loss 3>Fatigueness 4>Vision Problem 5>Frequent Urine 6>Increased Hunger ??\n\n";
	cout<<" Enter Y for Yes : ";
	cin>>ch;	
	if(ch=='y'||ch=='Y')
	cout<<"\n\n You may have the chances of diabetes, as Because these are the key symptons of it!!";
	else
	cout<<"\n\n You may not have the diabetes  but it is still not sure!!";	
	cout<<"\n\n Let the nurse take your blood sample  ";
    sleep(2);
	cout<<"\n\n Please Wait Taking Blood Sample  ";
	sleep(2);
	cout<<"\n\n Analyzing Blood Samples  ";
	sleep(2);
	cout<<"\n\n Thanks for being paitent ";
	sleep(2);
	cout<<"\n\n TEST INITIALIZED : ";
	cout<<"\n\n Enter the weight : ";
	cin>>weight;
	cout<<"\n\n Enter the glucometer readings : ";
	cin>>sugar;
	cout<<"\n\n Enter the body temperature : ";
	cin>>bodytemp;
	cout<<"\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t Generating Report ";
	cout<<"\n\n Analyzing Symtons ";
	sleep(1);
	cout<<"\n\n Analyzing Blood Sample ";
	sleep(1);
	cout<<"\n\n Analyzing Body temperature ";
	sleep(1);
    cout<<"\n\n Getting things done ";
    sleep(2);
    system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tREPORT";
	cout<<"\n\n Name : "<<name;
	cout<<"\n\n Age : "<<age;
	cout<<"\n\n Weight : "<<weight;
	cout<<"\n\n Body Temp : "<<bodytemp;
    cout<<"\n\n";
	int blood;
srand(time(NULL));
blood=rand()%1+7;
if(blood==1)
{
	cout<<" Blood Group : "<<" A+ ";
}
else if(blood==2)
{
	cout<<" Blood Group : "<<" A-"; 
}
else if(blood==3)
{
	cout<<" Blood Group : "<<" B+"; 
}
else if(blood==4)
{
	cout<<" Blood Group : "<<" B-"; 
}
else if(blood==5)
{
	cout<<" Blood Group : "<<" O+"; 
}
else if(blood==6)
{
	cout<<" Blood Group : "<<" O-"; 
}
else if(blood==7)
{
	cout<<" Blood Group : "<<" AB+"; 
}
else if(blood==8)
{
	cout<<" Blood Group : "<<" AB-"; 
}
else
{
    cout<<" Blood Group : "<<" O+"; 
}
float bloodcount;
srand(time(NULL));
bloodcount=rand()%4000+10000;
if(bloodcount<4500)
{
	cout<<"\n\n Blood Count : Low -> "<<bloodcount;
}
else if(bloodcount>=4500 && bloodcount<10000)
{
	cout<<"\n\n Blood Count : High -> "<<bloodcount;
}
float ha;
 srand(time(NULL));
 ha=rand()%10+9;
 if(ha>=12 && ha<16)
 cout<<"\n\n Hameogloblin level -> Normal : "<<ha<<" grams per deciliter";
  if(ha<12)
 cout<<"\n\n Hameogloblin level -> LOW : "<<ha<<" grams per deciliter";
  if(ha>16)
 cout<<"\n\n Hameogloblin level ->  : "<<ha<<" grams per deciliter";


float cholestrol;
srand(time(NULL));
cholestrol=rand()%25+100;
if(cholestrol<=100)
cout<<"\n\n Cholesrtrol -> IDEAL ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>100 && cholestrol<=129)
cout<<"\n\n Cholestrol -> Close to Ideal -> "<<cholestrol<<" mg/dl";
else if(cholestrol>=130 && cholestrol<=159)
cout<<"\n\n Cholesrtrol -> Borderline ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=160 && cholestrol<=189)
cout<<"\n\n Cholesrtrol ->  High ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=190 && cholestrol<=240)
cout<<"\n\n Cholesrtrol ->  Highly Dangerous ->  "<<cholestrol<<" mg/dl";

if(sugar>=5.00 && sugar<=7.5)	
cout<<"\n\n Normal Sugar Level : ->No signs of Diabetes till now ";
else if(sugar>7.5 && sugar<8.5)
cout<<"\n\n High Sugar Level : Diabetes Level 1 :->May led to heart stroke ";
else if(sugar>=8.5)
cout<<"\n\n High Sugar Level : Diabetes Level 2 :->Can led to heart attack ";
else
cout<<"\n\n Low Sugar Level : ";	
cout<<"\n\n This is on the basis of a simple test only please take appointment from doctor for much more and clear understanding and for complete treatment\n\n";		
cout<<"\n\n Generating Medicine Suggestions ";	
	sleep(5);
if(sugar>7.5 && sugar<8.5)	
{
    system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tMedicines";   
	cout<<"\n\n 1. NovoLog \n\n 2. Novolin \n\n 3. Humulin \n\n 4. Humalog \n\n 5. Apidra \n\n";
	srand(time(NULL));
	mchoice=rand()%4+1;
	cout<<"\n\n YOU CAN TAKE ANY OF THESE BUT ITS BETTER IF YOU TAKE OPTION : "<<mchoice;
	cout<<"\n\n Suggested Medicine : ";
	if(mchoice==1)
	cout<<"Novolog";
	else if(mchoice==2)
	cout<<"Novolin";
	else if(mchoice==3)
	cout<<"Humulin";
	else if(mchoice==4)
	cout<<"Humalog";
	else if(mchoice==5)
	cout<<"Apidra";
	cout<<"\n\n Take 2 tablets Per day after meal";
	cout<<" \n\n Before Buying We would like you to take full test ";
	cout<<" If you want to buy you can buy Press Y ";
	cout<<" Your Choice : ";
	char ch2;
	cin>>ch2;
	if(ch2=='Y'||ch=='y')
	buy();
	else 
	mainobj.twist();
}
else if(sugar>=8.5)
{
	system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tMedicines";   
	cout<<"\n\n 1. Precose \n\n 2. Miglitol \n\n 3. Kazano \n\n 4. Glucovance \n\n 5. Actoplus \n\n";
	srand(time(NULL));
	mchoice=rand()%4+1;
	cout<<"\n\n YOU CAN TAKE ANY OF THESE BUT ITS BETTER IF YOU TAKE OPTION : "<<mchoice;
	cout<<"\n\n Suggested Medicine : ";
	if(mchoice==1)
	cout<<"Precose";
	else if(mchoice==2)
	cout<<"Miglitol";
	else if(mchoice==3)
	cout<<"Kazano";
	else if(mchoice==4)
	cout<<"Glucovance";
	else if(mchoice==5)
	cout<<"Actoplus";
	cout<<"\n\n Take 2 tablets Per day after meal";
	cout<<" \n\n Before Buying We would like you to take full test ";
	cout<<" If you want to buy you can buy Press Y ";
	cout<<" Your Choice : ";
	char ch2;
	cin>>ch2;
	if(ch2=='Y'||ch=='y')
	buy();
	else 
	mainobj.twist();
}
else
{
	cout<<" No Medicine Required But keep Good Health and Diet";
}
	}
};

class diet
{
	public:
	diet()
	{
		system("cls");
 	char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	char name[300],ch;
	cout<<"\n\n Enter Your Name Please : ";
	fflush(stdin);
	gets(name);
	cout<<"\n\n Enter weather you have diabetes or not(Y/N) ? ";
	cout<<"\n\n Your Choice : ";
	cin>>ch;
	if(ch=='Y'||ch=='y')
	{
	cout<<" Special Diet is to be followed !!";
	cout<<"\n\n Here We Go";
	sleep(1);cout<<"\n\n1\t\t";sleep(1);cout<<"2\t\t";sleep(1);cout<<"3\t\t";
		system("cls");
  char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	 l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	
	cout<<"\n\n Healthy fats from nuts, olive oil, fish oils\n\n flax seeds, or avocados Fruits and vegetablesideally fresh\n\n the more colorful the better\n\n whole fruit rather than juices High-fiber cereals and breads made from whole grains or legumes Fish and shellfish\n\n organic chicken or turkey\n\n High-quality protein such as eggs, beans, low-fat dairy, and unsweetened yogurt";
	cout<<"\n\n";
	cout<<" Brown or wild rice, riced cauliflower\n\n Sweet potatoes, yams, cauliflower mash \n\n Whole-wheat pasta, spaghetti squash \n\n High-fiber, low-sugar cereal \n\n Steel-cut or rolled oats";
	cout<<"\n\n";
     }
     else
     {
     	cout<<"\n\n You can continue your normal diet : ";
	 }
	 sleep(8);
	 mainobj.twist();
	}	
};
void Login::password()
{
	system("cls");
	int i;
	char alogin[8],apassword[13];
	char login[]="tushar06";
	char pass[]="tusharamit06";
	char iot;
	iot=getch();
system("cls");
 	char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	char take[]={"\n\n Enter Login_id: "};
	int d1=strlen(take);
	for(kk=0;kk<d1;kk++)
	{
	Sleep(15);	
	cout<<take[kk];
    }
	char a;
		cin>>alogin;
	if(strcmp(alogin,login)==0)
	{
	
		char take1[]={"\n\n Enter Password: "};
	    d1=strlen(take1);
		for(kk=0;kk<=d1;kk++)
		{
			Sleep(15);
			cout<<take1[kk];
		}
		for(i=0;i<13;i++)
		{
			a=getch();
			if(a==13)
			break;
			else if(a==8)
		    {
			if(i>0)	
			cout<<"\b \b";
			i=i-2;
		    continue;
		    }
		    if(i<0)
		    i=0;
			else
			putchar('*');
			apassword[i]=a;
		}
		apassword[i]='\0';
    if(strcmp(apassword,pass)==0)
		{
			char re[]={"\n\n\n Login Successfull\n\n "};
			int rp=strlen(re);
			int u;
			for(u=0;u<rp;u++)
			{
				Sleep(14);
				cout<<re[u];
			}
			sleep(2);
			wholecheck=1;
		}
		else
		{
			wholecheck=2;
		 cout<<"\n\n Incorrect password";
		}
	}
	else
	{
		cout<<"\n\n Invalid Login_id\\Username\n\n";
	}
}
void diabetes::twist()
{
	system("cls");
	int ch;
		char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
    cout<<"\t\t\t\t\t\t\t\t\tChoose the operation \n\n\n 1-> PATIENT \n\n 2-> ADMIN \n\n 3-> QUERIES \n\n 4-> QUERIES REPLY \n\n 5-> Quick Checkup\n\n 6-> Diet Planner \n\n 7-> Log Out\n\n 8-> Exit";
    cout<<"\n\n Your Choice-> ";
    cin>>ch;
    switch(ch)
    {
    	case 1:
    	welcome();
    	break;
    	
    	case 2:
    	setlock();	
     	if(counter1!=0)
    	admin();
    	else
    	cout<<"\n\n\n Access Denied!! Terminating ";
    	sleep(3);
    	twist();
    	break;
    	case 3:
    	queries();
		break;
		case 4:
		showqu();
		break;
		case 5:
		quick();
		break;	
		case 6:
		diet();
		break;	
		case 7:
		cout<<"\n Logging Out.....\n\n";
		sleep(2);
		passo.password();
		break;
		case 8:
		cout<<"\n\n Exiting...\n\n";
		sleep(2);
		exit(0);
		break;	
		default:
		cout<<" You have entered wrong key \n\n";	
		break;	
	}
	void diabetes:: welcome()
{
	system("cls");
	
	cout<<"\n";
	int ch;
	char check;
	A:	
		char chwer[]={"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n"};
 	int l=strlen(chwer);
 	int kk;
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer[kk];
	}
	char chwer1[]={"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n"};	
     l=strlen(chwer1);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer1[kk];
	}
	
	char chwer2[]={"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n"};
 l=strlen(chwer2);
 	for(kk=0;kk<l;kk++)
 	{
 		Sleep(10);
 		cout<<chwer2[kk];
	}
	cout<<"\t\t\t\t\t\t\t\t   CHOOSE THE OPTIONS FROM MENU\n\n 1: ENTER DATA\n\n 2: GET\\TAKE APPOINTMENT\n\n 3: LIST OF PAITENTS\n\n 4: TEST\n\n 5: Pre-Report\n\n 6: FINAL REPORT\n\n 7: PATIENT-LOGIN\n\n 8: ABOUT DEVELOPER OF THIS CODE\n\n 9: EXIT\n\n";
    cout<<"\n YOUR CHOICE : ";
	cin>>ch;
    switch(ch)
    {
    	    case 1:
    		enterdata();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 2:
    		doctorlist();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }	
		    case 3:
    		display(10,20);
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 4:
    		test();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{   
			system("cls"); 
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;	
		    }
		    case 5:
		    prereport();
    		cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 6:
		    report(); 
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
			case 7:
			patientlogin();
			cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
				
		    case 8:
		    aboutme();
		    cout<<"\n Do You Want To Continue(y/n)\n";
    		cout<<" YOUR CHOICE: ";
    		cin>>check;
    		if(check=='y'||check=='Y')
    		{
    		system("cls");
    		goto A;
			}
			else
			{
			cout<<"\n\n\t\t\tThank You! Visit us Again\n";	
			break;
		    }
		    case 9:
		    cout<<" Exiting.... \n\n ";
			sleep(2);
			twist();
			exit(0);	
	}
}
void diabetes::enterdata()
{
	int i,num=0;
	fout.open("DIABETESDATA.txt",ios::app);
	system("cls");
	cout<<"\t\t\t\t\tWelcome!\n";
	cout<<"\n\t\t\tPLEASE FILL ALL THE REQUIRED DATA\n";
	cout<<"\n\n ";
	cout<<" Enter The no. of paitents : ";
	cin>>num;
	cout<<"\n\n ";
	for(i=0;i<num;i++)
	{
	system("cls");
 	cout<<"\t\t\t\t\t\t\t\t WELCOME TO THE DIABETES HEALTH CARE\t\t\n\t\t\t\t\t\t\t\t\tWe judge we understand!\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n";	
	cout<<"\t\t\t\t\t\t\t\t   ....Tusharamit Enterprise....\n\n";
    cout<<"_________________________________________________________________________________________________________________________________________________________________________\n\n\n";
    cout<<"\n\n ";
    cout<<" PLEASE ASK THE IDno. AND ENTER IT : ";
    cin>>id;
    cout<<"\n\n";
	cout<<" 1 : ENTER NAME : ";
	scanf("%s",name);
	fflush(stdin);
	cout<<"\n\n 2 : AGE : ";
	cin>>age;
	cout<<"\n\n 3 : SEX(M/F) : ";
	cin>>sex;
	cout<<"\n\n 4 : Height : ";
	cin>>height;
	cout<<"\n\n 5 : Weight : ";
	cin>>weight;
	cout<<"\n\n 6 : Phone number : ";
	cin>>phn;
	fout.write((char*)&mainobj,sizeof(mainobj));
    }
	fout.close();
}
int diabetes::display(int a,int b)
{
	fin.open("DIABETESDATA.txt",ios::in);
	system("cls");
	cout<<"\t\t\t\tHere's the Data of all paitents\n\n\n";
	
	
	cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
	{
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
    }
	fin.close();
}
void diabetes::search()
{
	system("cls");
	fin.open("DIABETESDATA.txt",ios::in|ios::out);
	int tempid,k=0;
	char check;
	cout<<"\t\t\t\tDiabetes Health Care\t\n";
	cout<<"\n Enter the id no. of patient : ";
	cin>>tempid;
while(fin.read((char*)&mainobj,sizeof(mainobj)))
{
if(tempid==mainobj.id)
{
	k++;
	break;
}
}	
if(mainobj.id==tempid)
{
			cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
cout<<"\n ";
}
else
{
	cout<<" YOU HAVE ENTERED THE INVALID ID PLEASE TRY AGAIN \n";
}
fin.close();
}
void diabetes::test()
{
	system("cls");
	int dd,mm,yyyy;
	cout<<"\t\t\t\tDIABETES HEALTH CARE!\n\n\n";
	fin.open("DIABETESDATA.txt",ios::in|ios::out);
	fout.open("problems.txt",ios::app);
	fturndoc.open("Doctors1.txt",ios::in);
	int tempid,k=0,count=0;
	char check;
	cout<<"\t\t\t\tDiabetes Health Care\t\n";
	cout<<"\n\n Enter the id no. of patient : ";
	cin>>tempid;
while(fin.read((char*)&mainobj,sizeof(mainobj)))
{
if(tempid==mainobj.id)
{
	k++;
	break;
}
}	
if(mainobj.id==tempid)
{
	cout<<"\n\n Enter today's date(dd/mm/yyyy) : ";
	cin>>dd>>mm>>yyyy;
	while(fturndoc.read((char*)&docp,sizeof(docp)))
	{
		if(dd==docp.st.d && docp.st.m==mm && docp.st.y==yyyy && tempid==docp.id)
		 {
		 	count=1;
		 	break;
		 }
		 else
		 count=0;
    }
	if(dd==docp.st.d && docp.st.m==mm && docp.st.y==yyyy && tempid==docp.id)
	{
	objp.id=tempid;
	cout<<"\n\n Please Answer The following Questions\n\n\n";
	cout<<" Patient name: ";
	cout<<mainobj.name;
	cout<<"\n\n\n";
	cout<<" 1:Are you getting thirsty frequently.Enter the data accordingly(3-highly yes||2-medium yes||1-low yes||0-no)? -> ";
	cin>>objp.thirst;
	cout<<"\n\n\n";
	cout<<" 2:Are you getting hungry fast.Enter the data accordingly(3-highly yes||2-medium yes||1-low yes||0-no)? -> ";
	cin>>objp.hunger;
    cout<<"\n\n\n";
	cout<<" 3:Are you getting urine frequently.Enter the data accordingly(3-highly yes||2-medium yes||1-low yes||0-no)? -> ";
	cin>>objp.furine;
	cout<<"\n\n\n";
	cout<<" 4:Do you get headches?Enter the level(3-high||2-medium||1-low||0-no)? -> ";
	cin>>objp.headche;
	cout<<"\n\n\n";
	cout<<" 5:Do you feel fatiguness?Enter the level(3-high||2-medium||1-low||0-no)? -> ";
	cin>>objp.fatigue;
	cout<<"\n\n\n";
	cout<<" 6:How is your vision?Enter the level(3-highly Blurred||2-Partially Blurred||1-Sometimes Blurred||0-no)? -> ";
	cin>>objp.vision;
	cout<<"\n\n 7.Was there anyy weight loss in your body in few days(y/n)?->";
	cin>>objp.weight;
	cout<<"\n\n\n";
	cout<<" 8.Has any body in your family had diabetes before?(y/n)?->";
	cin>>objp.fam;
	cout<<"\n\n";
	sleep(2);
	system("cls");
	cout<<"\n\n\n\t\t\t Thanks! Please Take the Test from doctor ";
	cout<<"\n\n Taking Blood Sample : ";
	cout<<"\n ";
	sleep(2);
	cout<<"\n\n Wait for some time \n ";
	sleep(2);
	cout<<"\n\n TESTING BLOOD \n ";
	sleep(2);
	cout<<"\n\n Please be patient and steady!! \n ";
	sleep(2);
	cout<<"\n\n Blood Test Complete\n ";
	sleep(2);
	cout<<"\n\n";
	cout<<" Had a Meal or not(y/n) for past three hours? : ";
	cin>>objp.food;
	cout<<"\n\n Enter Readings of Glucometer : ";
	cin>>objp.sugarlevel;
	cout<<"\n\n\n";
	cout<<" Enter the blood pressure(num) : ";
	cin>>objp.blpressurenum;
	cout<<" Enter the blood pressure(den) : ";
	cin>>objp.blpressuredem;
	cout<<"\n\n\n";
	cout<<"\n\n Enter the glucoselevel(sugar)(mg/dl)[This is Fasting Plasma Test(FPG)] -> : ";
	cin>>objp.glucoselevel;
	cout<<"\n\n Enter the glucoselevel(sugar1)(mg/dl)[This is Oral Glucose Tolerance Test(OGTT)] -> : ";
	cin>>objp.glucose1;
	sleep(2);
	cout<<"\n\n Test complete you may take the report at evening from reception.";
	cout<<"\n\n\n";
    fout.write((char*)&objp,sizeof(objp));
    }
    else
    {
    	cout<<"\n\n There's no appointment Booked for such person";
	}
}
else
{
	cout<<"\n\n Invalid id Please Check and try again ";
}
fout.close();
fin.close();
fturndoc.close();
}
int diabetes::report()
{
	float checkdb1=0,checkdb2=0,checkdb3=0;
	system("cls");
	cout<<"\t\t\t\tDIABETES HEALTH CARE!\n\n\n";
	fin.open("DIABETESDATA.txt",ios::in);
	fout.open("problems.txt",ios::in);
	int tempid,k=0;
	char check;
	cout<<"\t\t\t\tDiabetes Health Care\t\n";
	cout<<"\n Enter the id no. of patient : ";
	cin>>tempid;
    while(fin.read((char*)&mainobj,sizeof(mainobj)))
    {
	if(tempid==mainobj.id)
	{
	while(fout.read((char*)&objp,sizeof(objp)))
	{
    if(objp.id==tempid)
    {
	k++;
	break;
    }
    }
    break;
    }
}
if(mainobj.id==tempid )
{
		cout<<"|\t ID\t   |             NAME                 |  AGE    |   SEX   |   HEIGHT    |   WEIGHT      |\n";
	cout<<"|"<<setw(9)<<id<<setw(10)<<"|"<<setw(15)<<name<<setw(20)<<"|"<<setw(5)<<age<<setw(5)<<"|"<<setw(5)<<sex<<setw(5)<<"|"<<setw(7)<<height<<setw(7)<<"|"<<setw(7)<<weight<<setw(7)<<"\t|\n\n";
cout<<"\n\n";
cout<<" 1.Thirst Level : ";
if(objp.thirst==0)
cout<<" NO PROBLEM";
else if(objp.thirst==1)
cout<<" LOW";
else if(objp.thirst==2)
cout<<" MEDIUM";
else if(objp.thirst==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 2.Hunger Level: ";
if(objp.hunger==0)
cout<<" NO PROBLEM";
else if(objp.hunger==1)
cout<<" LOW";
else if(objp.hunger==2)
cout<<" MEDIUM";
else if(objp.hunger==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 3.Headche Level: ";
if(objp.headche==0)
cout<<" NO PROBLEM";
else if(objp.headche==1)
cout<<" LOW";
else if(objp.headche==2)
cout<<" MEDIUM";
else if(objp.headche==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 4.Fatigue Level: ";
if(objp.fatigue==0)
cout<<" NO PROBLEM";
else if(objp.fatigue==1)
cout<<" LOW";
else if(objp.fatigue==2)
cout<<" MEDIUM";
else if(objp.fatigue==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 5.Urine Frequency: ";
if(objp.furine==0)
cout<<" NO PROBLEM";
else if(objp.furine==1)
cout<<" LOW";
else if(objp.furine==2)
cout<<" MEDIUM";
else if(objp.furine==3)
cout<<" HIGH";
cout<<"\n\n";



cout<<" 6.Vision: ";
if(objp.furine==0)
cout<<" NO PROBLEM";
else if(objp.furine==1)
cout<<" LOW PROBLEM";
else if(objp.furine==2)
cout<<" MEDIUM PROBLEM";
else if(objp.furine==3)
cout<<" HIGH PROBLEM";
cout<<"\n\n";



cout<<" 7.BloodPressure :";
if(objp.blpressurenum>140)
{
	if(objp.blpressuredem>80)
    {
	cout<<"High Blood Pressure\n";
    }
	else
	cout<<"High Blood Pressure(cond(II))\n";
}
else if(objp.blpressurenum<=140 && objp.blpressurenum>=120)
{
	if(objp.blpressuredem>=80 && objp.blpressuredem<=100)
	cout<<" Normal Blood Pressure";
	else
	cout<<" Normal Blood Pressure(II)";
}
else
{
	cout<<" Low Blood Pressure ";
}
cout<<"\n\n\t\t\t\t\t\t\t\t Blood Report";
cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
int blood;
srand(time(NULL));
blood=rand()%1+8;
if(blood==1)
{
	cout<<" Blood Group : "<<" A+ ";
}
else if(blood==2)
{
	cout<<" Blood Group : "<<" A-"; 
}
else if(blood==3)
{
	cout<<" Blood Group : "<<" B+"; 
}
else if(blood==4)
{
	cout<<" Blood Group : "<<" B-"; 
}
else if(blood==5)
{
	cout<<" Blood Group : "<<" O+"; 
}
else if(blood==6)
{
	cout<<" Blood Group : "<<" O-"; 
}
else if(blood==7)
{
	cout<<" Blood Group : "<<" AB+"; 
}
else if(blood==8)
{
	cout<<" Blood Group : "<<" AB-"; 
}
else
{
    cout<<" Blood Group : "<<" O+"; 
}
float bloodcount;
srand(time(NULL));
bloodcount=rand()%4000+10000;
if(bloodcount<4500)
{
	cout<<"\n Blood Count : Low -> "<<bloodcount;
}
else if(bloodcount>=4500 && bloodcount<10000)
{
	cout<<"\n Blood Count : High -> "<<bloodcount;
}
float ha;
 srand(time(NULL));
 ha=rand()%10+9;
 if(ha>=12 && ha<16)
 cout<<"\n\n Hameogloblin level -> Normal : "<<ha<<" grams per deciliter";
  if(ha<12)
 cout<<"\n\n Hameogloblin level -> LOW : "<<ha<<" grams per deciliter";
  if(ha>16)
 cout<<"\n\n Hameogloblin level ->  : "<<ha<<" grams per deciliter";


float cholestrol;
srand(time(NULL));
cholestrol=rand()%90+200;
if(cholestrol<=100)
cout<<"\n\n Cholesrtrol -> IDEAL ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>100 && cholestrol<=129)
cout<<"\n\n Cholestrol -> Close to Ideal -> "<<cholestrol<<" mg/dl";
else if(cholestrol>=130 && cholestrol<=159)
cout<<"\n\n Cholesrtrol -> Borderline ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=160 && cholestrol<=189)
cout<<"\n\n Cholesrtrol ->  High ->  "<<cholestrol<<" mg/dl";
else if(cholestrol>=190 && cholestrol<=240)
cout<<"\n\n Cholesrtrol ->  Highly Dangerous ->  "<<cholestrol<<" mg/dl";

cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
cout<<"\n\n 8.Fasting Plasma Glucose Test(FPG) : ";
if(objp.glucoselevel<100.00)
{
	cout<<" Glucose Level : Normal -> "<<objp.glucoselevel<<" mg/dl";
    checkdb1++;
}
else if(objp.glucoselevel>=100.00 && objp.glucoselevel<=125.00)
{
	cout<<" Glucose Level : Pre-Diabetes-> "<<objp.glucoselevel<<" mg/dl";
    checkdb2++;
}
else if(objp.glucoselevel>=126.00)
{
	cout<<" Glucose Level : High -> Diabetes II "<<objp.glucoselevel<<" mg/dl";
     checkdb2++;
     checkdb3++;
}
cout<<"\n\n 9.Oral Glucose Tolerance Test(OGTT) :- ";
if(objp.glucose1<140.00)
{
	cout<<" Glucose Level : Normal -> "<<objp.glucose1<<" mg/dl";
	checkdb1++;
}
else if(objp.glucose1>=140.00 && objp.glucose1<=199.00)
{
	cout<<" Glucose Level : Higher than Normal (PRE-Diabetes)-> "<<objp.glucose1<<" mg/dl";
    checkdb2++;
}
else if(objp.glucose1>=200.00)
{
	cout<<" Glucose Level : High -> Diabetes II"<<objp.glucose1<<" mg/dl";
    checkdb2++;
    checkdb3++;
}


cout<<"\n\n 10.Sugar Level (Glucometer): ";
if(objp.food=='y'|| objp.food=='Y')
{
if(objp.sugarlevel>=9.0)
{
cout<<" High Sugar Level-II\n";
checkdb2++;
checkdb3++;
}
else if(objp.sugarlevel<9.0 && objp.sugarlevel>7.5)
{
cout<<" High Sugar Level\n";
checkdb2++;
}
else if(objp.sugarlevel>4.0 && objp.sugarlevel<7.4)
{
cout<<" Normal Sugar Level\n";
checkdb1++;
}
else
cout<<" Low Sugar Level\n";
}
else if( objp.food=='n'|| objp.food=='N')
{
if(objp.sugarlevel>7.0)
{
cout<<" High Sugar Level\n";
checkdb2++;
}
else if(objp.sugarlevel>4.0 && objp.sugarlevel<5.9 )
{
cout<<" Normal Sugar Level\n\n";
checkdb1++;
}
else
{
cout<<" Low Sugar Level\n\n";	
}
cout<<"\n\n During Taking test we have found that you hadn't ate something from last 2 - 3 hrs so here's a tip \n\n";	
cout<<" Health Tip 1 :";
cout<<" You should eat something in every 2 hours it is important for body\n\n";
sleep(1);	
}
cout<<"\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
if(checkdb1==3 && checkdb2<=1 && checkdb3==0)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Negative \n";
}
if(checkdb2==2 && checkdb3<=1)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Pre Diabetes(I) \n";
}
if(checkdb2<2 && checkdb3>1)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Pre Diabetes(II)\n";
}
if(checkdb3==2 || checkdb3==3)
{
	cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Level(II)\n";
}
if(checkdb3==2 && checkdb2==2)
{
    cout<<"\n\n\t\t\t\t\t\t\t\t Consult Doctor: For further Detailed Explanation!.";
	cout<<"\n\n\t\t\t\t\t\t\t\t Diabetes Test : Positive \n\t\t\t\t\t\t\t\t Diabetes Type : Level(I)\n";
}
else if(checkdb2==1 && checkdb1==1 && checkdb2==1)
{
	cout<<"\n\n\t\t\t\t\t\t\t Meet Doctor Again due to some complications in test";
}
else
{
	cout<<"\n\n\t\t\t\t\t\t\t Consult Doctor for More Help";
}
cout<<"\n +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
cout<<"\n\n\n\t\t\t\t\t\t\t\t Final Result :- ";
if(objp.glucose1<140.00)
{
	cout<<"Normal";
}
else if(objp.glucose1>=140.00 && objp.glucose1<=199.00)
{
	cout<<"PRE-Diabetes";
}
else if(objp.glucose1>=200.00)
{
	cout<<"Diabetes II";
}
}
else
{
	cout<<"\n\n Test Report has not been made\n\n";
}
fout.close();
fin.close();
}
void diabetes::doctorlist()
{
	system("cls");
	int date,month,year;
	cout<<"\t\t\tDiabetes Health Care!\n\n\n";
	fin.open("DIABETESDATA.txt",ios::in);
	fout.open("Temp.txt",ios::in);
	fturndoc.open("Doctors1.txt",ios::app|ios::in);
	while(fturndoc.read((char*)&docp,sizeof(docp)))
	{
		fout.write((char*)&docp,sizeof(docp));
	}
	fout.close();
	fturndoc.close();
	fout.open("Temp.txt",ios::in);
	fturndoc.open("Doctors1.txt",ios::app|ios::in);
	int choice;
	int tempid;
	cout<<"\n\n Enter the paitent id : ";
	cin>>tempid;
	while(fin.read((char*)&mainobj,sizeof(mainobj)))
    {	
    if(tempid==mainobj.id)
    {
    break;	
	}
    }
    if(tempid==mainobj.id)
    {
    	cout<<"\n\n Paitent Name : "<<mainobj.name;
    	cout<<"\n\n";
    	B:
    		int tt=0;
    		if(tt=1)
    		{
    	     system("cls");
    	    }
    	cout<<"\n\n\t\t\t\t\t\t\t\tDoctor's List\n\n";
    	cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n";
	cout<<"\tId\t|\t\tDoctor Name\t\t|   \t\tTimings\t\t\t |\tDays\t|\t\tFees\t\t|\n\n";
	cout<<"\t1\t|\t\tDr.D.K.Thakur\t\t|\t\t10:00am-12:00pm\t\t|\t Mon \t|\t\tRs 1000\t\t|\n\n";
	cout<<"\t2\t|\t\tDr.N.S.Grover\t\t|\t\t05:00pm-07:00pm\t\t|\t Tue \t|\t\tRs 1500\t\t|\n\n";
	cout<<"\t3\t|\t\tDr.D.S.Chawla\t\t|\t\t11:00am-01:00pm\t\t|\t Wed \t|\t\tRs 1500\t\t|\n\n";
	cout<<"\t4\t|\t\tDr.Jordan    \t\t|\t\t11:00am-02:00pm\t\t|\t Thurs\t|\t\tRs 2000\t\t|\n\n";
	cout<<"\t5\t|\t\tDr.JazzyB    \t\t|\t\t05:00pm-08:00pm\t\t|\t Fri \t|\t\tRs 3000\t\t|\n\n";
	cout<<" Enter your Choice of Doctor to Book your Appointment\n\n";
	cout<<"\n Your Choice : ";
	cin>>choice;
	docp.id=tempid;
	docp.idofdoc=choice;
	cout<<"\n\n Enter Date to Fix appointment(dd/mm/yyyy)\n\n";
	cout<<" Your input : ";
	cin>>date;
	cin>>month;
	cin>>year;
	cout<<"\n\n Wait! Checking For Appointments ";
	cout<<"\n\n ";
	fout.read((char*)&docp,sizeof(docp));
	{
	if(docp.st.d==date && docp.st.m==month &&  docp.st.y==year)
	{
		char check;
		cout<<"\n\n Sorry for inconvenience The date you selected is not available for appointment ";
		cout<<"\n\n Press Y to try again \n ";
		cout<<"Your Choice: ";cin>>check;
		if(check=='y'||check=='Y')
		{
			tt=1;
			goto B;
		}
	}
	else
	{
	    docp.st.d=date;
		docp.st.m=month;
		docp.st.y=year;
		cout<<"\n ";
		sleep(3);
		cout<<"\n\n Thanks! Appointment Fixed on "<<date<<"/"<<month<<"/"<<year;
		fturndoc.write((char*)&docp,sizeof(docp));	
	}
    }
    }
    else
    cout<<"\n\n Appointment Not Fixed";    
    cout<<"\n\n";
    fout.close();
    fturndoc.close();
    fin.close();
    remove("Temp.txt");
}	
	
	
	
main()
{
	int i=3;
	diabetes o;
	d:
	system("cls");
	passo.password();
		if(wholecheck==1)
	    {
	    mainobj.twist();	
        }
        else if(wholecheck==2)
        {
        cout<<"\n\n Server Crashed due to heavy traffic or You Entered Incorrect Password\n";	
        cout<<"\n\n Try Again in few seconds\n\n";
        char ch12[]={"\n\n Reloading in 5 seconds\n\n"};
        int kk,l;
		for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch12[kk];
		}
        char ch13[]={"\n\n Reloading in 4 seconds\n\n"};
        l=strlen(ch13);
        for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch13[kk];
		}
        char ch14[]={"\n\n Reloading in 3 seconds\n\n"};
        l=strlen(ch14);
        for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch14[kk];
		}
        char ch15[]={"\n\n Reloading in 2 seconds\n\n"};
        l=strlen(ch15);
        for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch15[kk];
		}
        char ch16[]={"\n\n Reloading in 1 seconds\n\n"};
        l=strlen(ch16);
        for(kk=0;kk<l;kk++)
        {
        	Sleep(15);
        	cout<<ch16[kk];
		}
        if(i>=1)
        {
        goto d;
        i--;
        }
        else
        cout<<"\n\n Interface Locked due to many invalid tries\n\n";
        }
}
}


#include <iostream>
#include <fstream>
using namespace std;

int main();
void main2();
void exsub();

class Who {
public:
	void locker(){
		cout << "select the items you want to lock: " << endl;

	}
	void unlocker(){
		cout << "select the items you want to unlock: " << endl;
	}
};

 void banner(){
	 system("bash $HOME/CatArrest/functions/banner.sh");
 }
 void menu(){
	cout << "1)Locker" << endl;
	cout << "2)Unlocker" << endl;
	cout << "3)Password Mangaer" << endl;
	cout << "4)Exit" << endl;
	cout << "select your choice:  " << endl;
}
void submenu(){
	cout << "1) images" << endl;
	cout << "2) videos" << endl;
	cout << "3) text documents" << endl;
	cout << "4) custom text; password etc." << endl;
	cout << "5) others" << endl;
	cout << "6) exit" << endl;
}

void locker(){
	submenu();
    Who who;
    who.locker();
    int choice;
    cin >> choice;

    switch (choice){
    case 1:
    	int achoice;
    	exsub();
    	cin >> achoice;
         switch (achoice){
         case 1:
        	 system("bash $HOME/CatArrest/functions/lockai.sh");
        	 break;
         case 2:
        	 system("bash $HOME/CatArrest/functions/lockoi.sh");
        	 break;
         default:
        	 cout << "wrong choice! try again" << endl;
        	 main();
         }
    	break;

    case 2:
      	int bchoice;
      	exsub();
      	cin >> bchoice;
      	switch (bchoice){
      	         case 1:
      	        	system("bash $HOME/CatArrest/functions/lockav.sh");
      	        	 break;
      	         case 2:
      	        	system("bash $HOME/CatArrest/functions/lockov.sh");
      	        	 break;
      	         default:
      	        	 cout << "wrong choice! try again" << endl;
      	        	 main();
      	         }
      break;

    case 3:
      	int cchoice;
      	exsub();
      	cin >> cchoice;
      	switch (cchoice){
      	         case 1:
      	        	system("bash $HOME/CatArrest/functions/lockad.sh");
      	        	 break;
      	         case 2:
      	        	system("bash $HOME/CatArrest/functions/lockod.sh");
      	        	 break;
      	         default:
      	        	 cout << "wrong choice! try again" << endl;
      	        	 main();
      	         }
      break;
    case 4:
      	int dchoice;
      	cin >> dchoice;
      	switch (dchoice){
      	         case 1:
      	        	system("bash $HOME/CatArrest/functions/lockat.sh");
      	        	 break;
      	         default:
      	        	 cout << "wrong choice! try again" << endl;
      	        	 main();
      	         }
      break;
    case 5:
      	int fchoice;
      	exsub();
      	cin >> fchoice;
      	switch (fchoice){
      	         case 1:
      	        	system("bash $HOME/CatArrest/functions/lockao.sh");
      	        	 break;
      	         case 2:
      	        	system("bash $HOME/CatArrest/functions/lockoo.sh");
      	        	 break;
      	         default:
      	        	 cout << "wrong choice! try again" << endl;
      	        	 main();
      	         }
      break;
    case 6:
      	exit(0);
      	break;
    default:
    	cout << "wrong choice! try again!" << endl;
    	main();
}
}
void unlocker(){
	submenu();
    Who who;
    who.unlocker();
    int choice;
    cin >> choice;

    switch (choice){
    case 1:
    	int achoice;
    	exsub();
    	cin >> achoice;
         switch (achoice){
         case 1:
        	 system("bash $HOME/CatArrest/functions/unlockai.sh");
        	 break;
         case 2:
        	 system("bash $HOME/CatArrest/functions/unlockoi.sh");
        	 break;
         default:
        	 cout << "wrong choice! try again" << endl;
        	 main();
         }
    	break;

    case 2:
      	int bchoice;
      	exsub();
      	cin >> bchoice;
      	switch (bchoice){
      	         case 1:
      	        	system("bash $HOME/CatArrest/functions/unlockav.sh");
      	        	 break;
      	         case 2:
      	        	system("bash $HOME/CatArrest/functions/unlockov.sh");
      	        	 break;
      	         default:
      	        	 cout << "wrong choice! try again" << endl;
      	        	 main();
      	         }
      break;

    case 3:
      	int cchoice;
      	exsub();
      	cin >> cchoice;
      	switch (cchoice){
      	         case 1:
      	        	system("bash $HOME/CatArrest/functions/unlockad.sh");
      	        	 break;
      	         case 2:
      	        	system("bash $HOME/CatArrest/functions/unlockod.sh");
      	        	 break;
      	         default:
      	        	 cout << "wrong choice! try again" << endl;
      	        	 main();
      	         }
      break;
    case 4:
      	int dchoice;
      	cin >> dchoice;
      	switch (dchoice){
      	         case 1:
      	        	system("bash $HOME/CatArrest/functions/unlockat.sh");
      	        	 break;
      	         default:
      	        	 cout << "wrong choice! try again" << endl;
      	        	 main();
      	         }
      break;
    case 5:
      	int fchoice;
      	exsub();
      	cin >> fchoice;
      	switch (fchoice){
      	         case 1:
      	        	system("bash $HOME/CatArrest/functions/unlockao.sh");
      	        	 break;
      	         case 2:
      	        	system("bash $HOME/CatArrest/functions/unlockoo.sh");
      	        	 break;
      	         default:
      	        	 cout << "wrong choice! try again" << endl;
      	        	 main();
      	         }
      break;
    case 6:
      	exit(0);
      	break;
    default:
    	cout << "wrong choice! try again!" << endl;
    	main();
}
}
void exsub(){


		cout << "1)select all" << endl;
	    cout << "2)select single" << endl;
	    cout << "3)exit" << endl;
	    cout << "select option:";

	}
void exit(){
	exit(0);
}

void submain(){
	menu();
		int uchoice;
		cin >> uchoice;

		switch (uchoice){
		 case 1:
			 locker();
			 break;
		 case 2:
			 unlocker();
			 break;
		 case 3:
		 	 main2();
		 	 break;
		 case 4:
			 exit(0);
			 break;
		 default:
			 cout << "wrong choice, try again" << endl;
			 main();
			 break;
		}
		system("sleep 3");
     main();


		}

void main2() {
	cout << "     PASSWORD MANAGER" << endl;
	cout << "want to change password?";
	string any;
	cin >> any;
	if (any == "y"){
		cout << "confirm your exsiting password:";
		string re, pa, pass1, pass2;
		cin >> pass1;

		ifstream passfile;
		passfile.open("/root/CatArrest/passtaker.txt");
		passfile >> pass2;
		passfile.close();
	if (pass1 == pass2){
		cout << "enter a new password:";
		cin >> pa;
		cout << "confirm new password:";
		cin >> re;

		if (pa == re){
			ofstream passaver;
			passaver.open("/root/CatArrest/passtaker.txt");
			passaver << pa;
			passaver.close();
			cout << "password updated successfully";

		}
		else {
			cout << "confirm password not matched!" << endl;
			main2();
		}
	}
	else{
		cout << "password incorrect! try again!" << endl;
		main2();
	}
	}
	else{
		cout << "ok! Exiting now!" << endl;
		main();
	}
}

int main() {
    system("clear");
	string pass;
	string epass;
	banner();
	cout << "enter password:";
	cin >> pass;
	ifstream reader;
	reader.open("/root/CatArrest/passtaker.txt");
    reader >> epass;
	reader.close();
	if (pass == epass){
		submain();
	}
	else{
		cout << "wrong password!";
		main();
		cout << endl;
	}
	return 0;
}


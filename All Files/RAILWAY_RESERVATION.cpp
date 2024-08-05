#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>
#include <mmsystem.h>
using namespace std;
// code to change text color
void textcolor(int color)
{
    static int BACKGROUND;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;

    GetConsoleScreenBufferInfo(h, &csbiInfo);
    //    WORD originalAttributes = csbiInfo.wAttributes;
    SetConsoleTextAttribute(h, color + (BACKGROUND << 4));

    //	  SetConsoleTextAttribute(h, BACKGROUND_BLUE | BACKGROUND_INTENSITY);

    // Print text with the new background color
    // cout << "This text has a blue background color." << endl;

    // Restore the original console attributes
    // SetConsoleTextAttribute(h, originalAttributes);

    // Print text with the original attributes
    //  cout << "This text has the original console attributes." << endl;
}

class decq
{
protected:
    string length;
public:
    // friend void textcolor(int color);
    void welcome()
    {
    	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~INSTRUCTIONS~~~~~~~~~~~~~~~~~~"<<endl;
    	cout<<"\n\t\t\t\t\t\t\t\tTHIS APPLICATION IS AVALIBLE FOR JUST TWO CITIES KARACHI AND LAHORE "<<endl;
    	cout<<"\n\t\t\t\t\t\t\t\tBUT THEIR ARE SOME OTHER RESTRICTIONS ARE THERE LIKE"<<endl;
    	cout<<"\n\t\t\t\t\t\t\t\tIF YOU ARE TRAVELING FROM KARACHI TO LAHORE THAN YOU HAVE"<<endl;
    	cout<<"\n\t\t\t\t\t\t\t\tonly TWO DAYS ONE IS THURSDAY AND THE SECOND ONE IS WEDNESDAY"<<endl;
    	cout<<"\n\t\t\t\t\t\t\t\tIN OTHER CASE IF YOUTRAVAL FROM LAHORE TO KARACHI THE REST OF DAYS ARE AVALIBLE\""<<endl;
        ifstream my("12q.txt");
        getch();
        system("cls");
        getch();
        sndPlaySound("W1.wav", SND_ASYNC);
        for (int i = 0; i <= 28; i++)
        {
            getline(my, length);
            textcolor(13);
            cout << length << endl;
        }
        getch();
        sndPlaySound("sound.wAV", SND_ASYNC);
        system("cls");
        for (int t = 0; t <= (77 + 15); t++)
        {
            for (int i = 0; i <= 27; i++)
            {
                getline(my, length);
                textcolor(10);
                cout << length << endl;
            }
            getline(my, length);
            textcolor(3);
            cout << length << endl;
            // for(int a=0;a<=;a++){}
            system("cls");
        }
        my.close();
    }
};


// dash board
class dashboard
{
   
    string  select, length;
    char t;

public:
    dashboard()
    {
        //C = 0;
    }
    
    string dash_board(char f)
    {
        textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
        ifstream my("icons.txt");
        sndPlaySound("W1.wav", SND_ASYNC);

        for (int i = 0; i <= 15; i++)
        {
            getline(my, length);
            textcolor(13);
            cout << length << endl;
        }
        for (int i = 0; i <= 13; i++)
        {
            getline(my, length);
            textcolor(3);
            cout << length << endl;
        }
        textcolor(6);
        cout << "\n\n\t\t\t\t\t Enter your choes:\n\t\t\t\t\t\t";
        cin >> select;
        system("cls");
      return select;}
};
// This is starting of serch page
class start : public dashboard, public decq
{
    int a, b, t, co,ph;   
    string line,  data1, y,mail;
protected:
	string countm, name, data, pass;
public:
    char f, l;
    start(){
        co = 0;
    }
    //	  page_no_1
    int page_1(){
    
        do{
		textcolor(6);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t1 \"SIGN UP\"\t 2 \"Login\"" << endl;
        PlaySound(TEXT("W.wav"), NULL, SND_SYNC);
        cin >> a;
        switch (a)
        {
        case 1:
        {
        l_s:
            textcolor(6);
            system("cls");
            ifstream read("record.txt");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t -----------------__________----------------- " << endl;
            cout << "\t\t\t\t\t\t\t|\t\t    SIGN_UP \t\t     |" << endl;
            cout << "\t\t\t\t\t\t\t|_________________----------_________________|" << endl;
            cout << "\n\n\n\t\tEnter name:  ";
            textcolor(3);
            cin.ignore();
            getline(cin, name);
           // nam=name;
            while (getline(read, data1))
            {
                line += data1;
                line += "\n";
            }
            ofstream record("record.txt");
            read.close();
                        textcolor(6);
            cout << "\n\n\n\t\tEnter password:   ";
            textcolor(3);
			cin >> pass;
            textcolor(6);
            cout << "\n\n\n\t\tEnter Gmail_id:   ";    //i will do start my work from here.
            textcolor(3);
            cin >> mail;
            record << line << name << "\n"<< pass<<"\n"<<mail<<"\n\n\n";
            record.close();
            textcolor(6);
            cout << "\n\t\t\t\t\t\t\t\t1 \"STAY\" or 2 \"EXIT\" ?" << endl;
            cin >> b;
            system("cls");
            for (size_t i = 0; i < name.length(); i++)
            {
                if (name != " " && co < 1)
                {
                    f = name[i];
                    co++;
                }
            }

            return b;
            break;
        }
        case 2:
        {
            system("cls");

        l2:
            ifstream read("record.txt");

            textcolor(06);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t -----------------________----------------- " << endl;
            cout << "\t\t\t\t\t\t\t|\t\t    Login \t\t   |" << endl;
            cout << "\t\t\t\t\t\t\t|_________________--------_________________|" << endl;
            textcolor(3);
            cout << "\n\n\n\t\t\t\t\t\t\tEnter your name:  ";
            cin.ignore();
            getline(cin, name);
            
            cout << "\n\n\n\t\t\t\t\t\t\tEnter your password:   ";
            cin >> pass;
            system("cls");
             //name;
            for (int i = 0; i <= 100; i++)
            {
                getline(read, data);
                getline(read, countm);

                if (name == data && pass == countm)
                {
                    for (size_t i = 0; i < name.length(); i++)
                    {//nam+=name[i];

                        if (name != " " && co < 1)
                        {
                            f = name[i];
                            co++;
                        }
                    }
                    cout << f;
                    return 1;
                    break;
                }
                if (i == 100)
                {
                w1:
                    textcolor(7);
                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tYou entered a wrong PASSWORD or USERNAME" << endl;
                    cout << "\n\t\t\t\t\t\t\t\t\tDo you want to sign up?" << endl;
                    cout << "\n\t\t\t\t\t\t\t\t\t     \"YES\" or  \"NO\" ?" << endl;
                    cin >> y;
                    if (y == "YES")
                    {
                        read.close();
                        goto l_s;
                    }
                    else if (y == "NO")
                    {
                        cout << "\n\t\t\t\t\t\t\t\tThanks" << endl;
                    }
                    else
                    {
                        system("cls");
                        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tENTER VALID ONE" << endl;
                        getch();
                        system("cls");
                        goto w1;
                    }
                    getch();
                    system("cls");
                    read.close();
                    goto l2;
                }
            }
            getch();
            read.close();
            break;
        }
        default:
        {
            system("cls");
            cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tYou entered a wrong input\n\t\t\t\t\t\t\t\t\t\" Please enter a valid Input" << endl;
            getch();
            system("cls");
            a = 0;

            break;
        }
        }}
        while(a!=1 || a!=2);
    }
    // for user account logo
    
    char display()
    {
        return f;
    }
    string n(){
    	return name;
	}
	string n(string a){
		
		return pass;
	}
};


class search : public start{
	 int h,sel,sr,sr1,ans;
	 int no_t = 1000;
    int day[5], dMonth[5], year[5];
  string	Day,ID,sg,g,a,temp1,temp2,temp,GF="";
  vector <string> set,ASC,bv;
  
  //variables for current date
  int d=1,m=1,y=2023;
  char t3;
	public:
		  string	A_city, c_city;
		search (){
			//C=0;
			Day="SUN";
		}
	
		int display_l(char f){

        t3 = f;
        textcolor(13);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t              ___";
        cout << "\n\t\t\t\t\t\t\t\t\t    \"SEARCH_TRAIN\" \t\t             ( ";
        textcolor(rand() % 9);
        cout << t3;
        textcolor(13);
        cout << " )";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t              ---" << endl;
        textcolor(6);
        cout << "\n\n\t\t\tSearch Train" << endl;
        cout << "\n\n\t\t\t\t\t1 \"From Station\"\t 2 \"To Station\"\n\t\t\t\t\t";
        cin >> h;
         // textcolor(6);
            textcolor(6);
            return h;
    }
        int location (int h)	{
    	 string a,b;
            if (h == 2)
            {
                cout << "\n\t\t\t\t\tTO->\n\t\t\t\t\t";
                  textcolor(3);
                cin >> a;
                  textcolor(6);
                cout << "\n\t\t\t\t\tFROM->\n\t\t\t\t\t";
                  textcolor(3);
				cin >> b;
				if(a=="LAHORE" && b=="KARACHI"){
				A_city=a;
				c_city=b;
				}
				else if(a=="KARACHI"&&b=="LAHORE"){
				A_city=a;
				c_city=b;
				}
				else{
					
					cout<<"\n\t\t\t\tNO TRAIN IS AVAILABLE"<<endl;
					getch();
					system("cls");
					b="";
					a="";
				return 1;
					}
                //C++;
                system("cls");
                return 0;
            }
      
            else if (h == 1)
            {
                cout << "\n\t\t\t\t\tFROM->\n\t\t\t\t\t";
                cin >> b;
                cout << "\n\t\t\t\t\tTO->\n\t\t\t\t\t";
                cin >> a;
              if(a=="LAHORE"&&b=="KARACHI"){
				A_city=a;
				c_city=b;
				}
				else if(a=="KARACHI"&&b=="LAHORE"){
				A_city=a;
				c_city=b;
				}
				else{
					cout<<"\n\t\t\t\tNO TRAIN IS AVAILABLE"<<endl;
					getch();
					system("cls");
					b="";
					a="";
				//	goto l;
				return 1;
				}
		
			   // C++;
                system("cls");
        		return 0;
        
		    }
  
        }
        void display_d(char t){
            textcolor(6);
            cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
            cout << "\n\t\t\t\t\t\t\t\t\t    \"DATE\" \t\t                          ( ";
            textcolor(7);
            cout << t;
            textcolor(6);
            cout << " )";
            cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
            cout << "\n\n\t\t\tINSERT_DATE:" << endl;
	}
	void getMonth(int n);
   void getDay(int n);
   void getYear(int n);
   void printDate(int n);
 // conversion of day from date
   string set_date(){
    int  a;
    double f, t1, p, o,f2,r, s,f1;
    int temp, b, k,count=0,v,g,t;
    int temp2, temp4,temp1,cons;
    string str;
    //long double;
   
        temp = year[0]-y  ;
        temp1 = day[0]-d  ;
        temp2 = dMonth[0]-m  ;
        cons =  temp2/12;
		f2=temp2*(1.0/12.0);
	        r=f2-cons;
			temp4=r*12+(0.006);  
      if ((temp4==3  && year[0] ==2023) ||( temp4==4  && year[0] ==2023)||(temp4==2&& year[0]==2024 ))
        b= temp1 + temp4 * 30 + temp * 365;
       else if (temp4==0 )
        b= temp1 + temp4 * 30 + temp * 365;
        else if((temp4==1&& year[0] ==2023) ||(temp4==1&& year[0] ==2024) ||( temp4==5&& year[0] ==2023)  || (temp4 ==6&& year[0] ==2023) ||(temp4==3  && year[0] ==2024) || ( temp4==4  && year[0] ==2024))
         b= temp1 + (temp4-1)*(1 * 30)+ 31 +  (temp * 365);
           else if(temp4==2 && year[0] ==2023 )
         b= temp1 + (temp4-1)*(1 * 30)+29 +  (temp * 365);
          else if((temp4==7&&year[0] ==2023) || (temp4==5&& year[0] ==2024)   || (temp4 ==6&& year[0] ==2024) )
         b= temp1 + (temp4-1)*(1 * 30)+32 + (temp * 365);
          else if((temp4==8&&year[0] ==2023 )||( temp4==9&&year[0] ==2023) ||(temp4==7&&year[0] ==2024))
         b= temp1 + (temp4-1)*(1 * 30)+33 +  (temp * 365);
          else if((temp4==10&&year[0] ==2023 )|| (temp4==11&&year[0] ==2023) ||(temp4==8 &&year[0] ==2024)|| (temp4==9&&year[0] ==2024))
         b= temp1 + ((temp4-1) * 30)+34 +  (temp * 365);
          else if((temp4==12&&year[0] ==2023)||(temp4==10&&year[0] ==2024 )|| (temp4==11&&year[0] ==2024) )
         b= temp1 + ((temp4-1) * 30)+35 +  (temp * 365);
        cout<<endl<<b<<endl;
          if (Day=="MON"){
            count=1;
          }
          else  if(Day=="TUE"){
            count=2;
          }
          else if(Day=="WED"){
            count=3;
          }
          else if(Day=="THU"){
            count=4;
          }
          else if(Day=="FRI"){
            count=5;
          }
          else if(Day=="SAT"){
            count=6;
          }
          else{
            count=7;
      }
           count=count+b;	
//this will compute the addition process and display the final day. 
cout<<count<<endl;
		 if (count>7)
           {
           g= count/7;
           s= count*(1.0/7.0);
           f1= s-g;
           t= f1*7+(0.006);
           cout<<s-g;
           
            t=t;
          
           }
           else{
            t=count;
           }
              cout<<t<<endl; 
              getch();
        if (t==1){ 
        str="monday";
		  return str;
          }
        else  if(t==2){
        	str="tuesday";
            return str;
          }
        else if(t==3){
            str  ="wednesday";
            return str;
          }
        else if(t==4){
        str=	"thursday";
            return str;
          }
        else if(t==5){
        	str="friday";
            return str;
          }
        else if(t==6){
        	str ="saturday";
             return str;
          }
        else if (t==7||t==0){
            str="sunday";
			return str;
          }
          
    }
   int  import_detail(string a, char f,string nam,string ps1){
   	system("cls");
   	string detail="";
   	if (a=="monday" &&A_city=="KARACHI"&&c_city=="LAHORE"){
   		v:
   	    l5:
   		textcolor(6);
   		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
	           
			                                                    ifstream import("monday.txt");
	    textcolor(3);
		for(int i=0;i<=5;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
			}
	    	textcolor(6);
		for(int i=0;i<=0;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
	    		
		}
		textcolor(8);
		for(int i=0;i<=6;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
		}
		import.close();
		textcolor(6);
		cout<<" Enter train id"<<endl;
		cout<<"\t\t\t\t\t";
		cin>>ID;
		
		//reservation
		
		if(ID=="102UO"){
		
		cout<<"\n\n\n\n\n\n\n\t\t\tTRAIN_ID       = 102UO"<<endl;
		cout<<"\t\t\tTRAIN_TICKETS    = "<<no_t<<endl;
	    cout<<"\t\t\tARIVAL DAY       = MONDAY"<<endl;
		cout<<"\t\t\tTICKET_PRICE     = 200"<<endl;	
        cout<<"\t\tDO YOU WANT TO BUY TICKET?"<<endl;
        cin>>sg;
        if(sg=="YES"){
        	system("cls");
		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
		ifstream  big("messege.txt");
		for (int i=0;i<=19;i++){
            string temp;
	 	getline(big,temp);
			detail=temp+"\n";
		    cout<<detail;
		    
		}
		cout<<"                                                         |                                         ";

		cout<<"         ___       |     "<<endl;
		cout<<"                                                         |____________________________________________________________|\n\t\t\t\t\t\t\t";
			big.close();	
		
				cin>>sg;
		if(sg=="YES"){
			system("cls");
			 textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
				ifstream  b6("RESEVE.txt");
		for (int i=0;i<=16;i++){
            string temp;
	 	getline(b6,temp);
			detail=temp+"\n";
		    cout<<detail;   
		}
		g=nam;
		cout<<"                                                         |                          for "<<g<<"                         "<<endl;
			for (int T=0;T<=4;T++){
            string temp1;
	 	getline(b6,temp1);
			detail=temp1+"\n";
		    cout<<detail; 
		     }
		     no_t--;
		     ifstream rd("record.txt");
		   
		     	for (int i = 0; i <= 1000; i++)
            { getline(rd, temp1);
              ASC.push_back(temp1);
                getline(rd, temp2);
                 ASC.push_back(temp2);
     if (nam ==temp1  && ps1 == temp2)
                {cout<<"yes"<<endl;
                      //  rd.close();
                
                   getline(rd,temp1);
                    ASC.push_back(temp1);
                    for(int t=0;t<=2;t++){
                      getline(rd,temp1);
                      bv.push_back(temp1);
                  }

                     while(!rd.eof()){
                      getline(rd,a);
                      set.push_back(a);
                  
				  }
					    for(int i=0;i<=ASC.size();i++){
			   
                   GF=GF+ASC[i]+"\n";
                   
       }
																				  
				rd.close();
                   	 ofstream obj("record.txt");
                    obj<<GF;
                    obj<<"( "<<day[0]<<" \""<<dMonth[0]<<"\" "<<year[0]<<" )\n";
                    obj<<"\"Lahore to Karachi\""<<endl;
                    obj<<"(102UO)"<<endl;
                   for(int i=0;i<=set.size();i++){
                   obj<<set[i]<<endl;
               }
                   	obj.close();
                   return 1;
                }
                else{
                	for(int j=0;j<=3;j++){
                	getline(rd,temp);
                	    ASC.push_back(temp);
            }
                
				}
			}
					getch();
		    system("cls");
		    b6.close();
			return 1; 
		}
		else{

					system("cls");
			goto l5;
	
	}
		}
		else{
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){

		system("cls");
			goto l5;}
			else{
	
					system("cls");
			return 1;
			}
		}
		}
		else if(ID=="103UP"){
			
		cout<<"\t\t\t\t\t\t\tnot available"<<endl;
		
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){

		system("cls");
			goto l5;}
			else{
	
					system("cls");
			return 1;
			}
		
		
		}
		else{
			cout<< "please enter correct ID"<<endl;
			system("cls");
			import.close();
         goto  v;
		}	
		   }
	else if(a=="tuesday"&&A_city=="KARACHI"&&c_city=="LAHORE"){
	   	   		v2:
   	    l6:
   		textcolor(6);
   		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
	                                                            ifstream import("TUESDAY.txt");
	    for(int i=0;i<=5;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
	    	
		}
			    for(int i=0;i<=0;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;}
	    		textcolor(8);
		for(int i=0;i<=5;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
		}
		import.close();
		textcolor(6);
		cout<<" Enter train id\n\t\t\t\t\t"<<endl;
	  cin>>ID;
		//reservation
		
		if(ID=="108UP"){
		
		cout<<"\n\n\n\n\n\n\n\t\t\tTRAIN_ID       = 108UP"<<endl;
		cout<<"\t\t\tTRAIN_TICKETS    = 99"<<endl;
	    cout<<"\t\t\tARIVAL DAY       = TUESDAY"<<endl;
		cout<<"\t\t\tTICKET_PRICE     = 200"<<endl;	
        cout<<"\t\tDO YOU WANT TO BUY TICKET?"<<endl;
        cin>>sg;
        if(sg=="YES"){
        	system("cls");
		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
		ofstream write ("account_info.txt");
		write.close();
		ifstream  big("messege.txt");
		for (int i=0;i<=19;i++){
            string temp;
	 	getline(big,temp);
			detail=temp+"\n";
		    cout<<detail;
		    
		}
		cout<<"                                                         |                                         ";

		cout<<"         ___       |     "<<endl;
		cout<<"                                                         |____________________________________________________________|\n\t\t\t\t\t\t\t";
			big.close();	
		
				cin>>sg;
		if(sg=="YES"){
			system("cls");
			 textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
				ifstream  b6("RESEVE.txt");
		for (int i=0;i<=16;i++){
            string temp;
	 	getline(b6,temp);
			detail=temp+"\n";
		    cout<<detail;   
		}
		g=nam;
		cout<<"                                                         |                          for "<<g<<"                         "<<endl;
			for (int T=0;T<=4;T++){
            string temp1;
	 	getline(b6,temp1);
			detail=temp1+"\n";
		    cout<<detail; 
		     }
		getch();
		    system("cls");
		    b6.close();
			return 1; 
		}
		else{

					system("cls");
			goto l6;
	
	}
		}
		else{
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){

		system("cls");
			goto l6;}
			else{
	
					system("cls");
			return 1;
			}
		}
		}
		else if(ID=="110MN"){
			
		cout<<"\t\t\t\t\t\t\tnot available"<<endl;
		
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){

		system("cls");
			goto l6;}
			else{
	
					system("cls");
			return 1;
			}
		
		
		}
		else{
			cout<< "please enter correct ID"<<endl;
			getch();
			system("cls");
			import.close();
         goto  v2;
		}
	   }
	else if(a=="wednesday"&&A_city=="LAHORE"&&c_city=="KARACHI"){
	   	   		v3:
   	    l7:
   		textcolor(6);
   		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
	                                                            ifstream import("wednesday.txt");
	    for(int i=0;i<=5;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
	    	
		}
			    for(int i=0;i<=0;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;}
	    		textcolor(8);
		for(int i=0;i<=4;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
		}
		import.close();
		textcolor(6);
		cout<<" Enter train id\n\t\t\t\t\t"<<endl;
	  cin>>ID;
		//reservation
		
		if(ID=="114DN"){
		
		cout<<"\n\n\n\n\n\n\n\t\t\tTRAIN_ID       = 114DN"<<endl;
		cout<<"\t\t\tTRAIN_TICKETS    = 99"<<endl;
	    cout<<"\t\t\tARIVAL DAY       = WEDNESDAY"<<endl;
		cout<<"\t\t\tTICKET_PRICE     = 200"<<endl;	
        cout<<"\t\tDO YOU WANT TO BUY TICKET?"<<endl;
        cin>>sg;
        if(sg=="YES"){
        	system("cls");
		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
		ofstream write ("account_info.txt");
		write.close();
		ifstream  big("messege.txt");
		for (int i=0;i<=19;i++){
            string temp;
	 	getline(big,temp);
			detail=temp+"\n";
		    cout<<detail;
		    
		}
		cout<<"                                                         |                                         ";

		cout<<"         ___       |     "<<endl;
		cout<<"                                                         |____________________________________________________________|\n\t\t\t\t\t\t\t";
			big.close();	
		
				cin>>sg;
		if(sg=="YES"){
			system("cls");
			 textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
				ifstream  b6("RESEVE.txt");
		for (int i=0;i<=16;i++){
            string temp;
	 	getline(b6,temp);
			detail=temp+"\n";
		    cout<<detail;   
		}
		g=nam;
		cout<<"                                                         |                          for "<<g<<"                         "<<endl;
			for (int T=0;T<=4;T++){
            string temp1;
	 	getline(b6,temp1);
			detail=temp1+"\n";
		    cout<<detail; 
		     }
		getch();
		    system("cls");
		    b6.close();
			return 1; 
		}
		else{

					system("cls");
			goto l7;
	
	}
		}
		else{
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){

		system("cls");
			goto l7;}
			else{
	
					system("cls");
			return 1;
			}
		}
		}
		else if(ID=="116UP"){
			
		cout<<"\t\t\t\t\t\t\tnot available"<<endl;
		
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){

		system("cls");
			goto l7;}
			else{
	
					system("cls");
			return 1;
			}
		
		
		}
		else{
			cout<< "please enter correct ID"<<endl;
			getch();
			system("cls");
			import.close();
         goto  v3;
		}
	   }
   	else if(a=="thursday"&&A_city=="LAHORE"&&c_city=="KARACHI"){
	   	   		v4:
   	    l8:
   		textcolor(6);
   		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
	                                                                                          ifstream import("thursday.txt");
	    for(int i=0;i<=5;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
	    	
		}
			    for(int i=0;i<=0;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;}
	    		textcolor(8);
		for(int i=0;i<=2;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
		}
		import.close();
		textcolor(6);
		cout<<" Enter train id\n\t\t\t\t\t"<<endl;
	  cin>>ID;
		//reservation
		
		if(ID=="117DN"){
		
		cout<<"\n\n\n\n\n\n\n\t\t\tTRAIN_ID       = 117DN"<<endl;
		cout<<"\t\t\tTRAIN_TICKETS    = 199"<<endl;
	    cout<<"\t\t\tARIVAL DAY       = THURSDAY"<<endl;
		cout<<"\t\t\tTICKET_PRICE     = 200"<<endl;	
        cout<<"\t\tDO YOU WANT TO BUY TICKET?"<<endl;
        cin>>sg;
        if(sg=="YES"){
        	system("cls");
		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
		ofstream write ("account_info.txt");
		write.close();
		ifstream  big("messege.txt");
		for (int i=0;i<=19;i++){
            string temp;
	 	getline(big,temp);
			detail=temp+"\n";
		    cout<<detail;
		    
		}
		cout<<"                                                         |                                         ";

		cout<<"         ___       |     "<<endl;
		cout<<"                                                         |____________________________________________________________|\n\t\t\t\t\t\t\t";
			big.close();	
		
				cin>>sg;
		if(sg=="YES"){
			system("cls");
			 textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
				ifstream  b6("RESEVE.txt");
		for (int i=0;i<=16;i++){
            string temp;
	 	getline(b6,temp);
			detail=temp+"\n";
		    cout<<detail;   
		}
		g=nam;
		cout<<"                                                         |                          for "<<g<<"                         "<<endl;
			for (int T=0;T<=4;T++){
            string temp1;
	 	getline(b6,temp1);
			detail=temp1+"\n";
		    cout<<detail; 
		     }
		getch();
		    system("cls");
		    b6.close();
			return 1; 
		}
		else{

					system("cls");
			goto l8;
	
	}
		}
		else{
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){

		system("cls");
			goto l8;}
			else{
	
					system("cls");
			return 1;
			}
		}
		}
		else if(ID=="119UP"){
			
		cout<<"\t\t\t\t\t\t\tnot available"<<endl;
		
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){

		system("cls");
			goto l8;}
			else{
	
					system("cls");
			return 1;
			}
		
		
		}
		else{
			cout<< "please enter correct ID"<<endl;
			getch();
			system("cls");
			import.close();
         goto  v4;
		}
	   }
   else if(a=="friday"&&A_city=="KARACHI"&&c_city=="LAHORE"){
	   	v5:
   	    l9:
   		textcolor(6);
   		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
	                                                                                          ifstream import("FRIDAY.txt");
	    for(int i=0;i<=5;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
	    	
		}
			    for(int i=0;i<=0;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;}
	    		textcolor(8);
		for(int i=0;i<=5;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
		}
		import.close();
		textcolor(6);
		cout<<" Enter train id\n\t\t\t\t\t"<<endl;
	  cin>>ID;
		//reserv
		if(ID=="124UP"){
		cout<<"\n\n\n\n\n\n\n\t\t\tTRAIN_ID       = 124UP"<<endl;
		cout<<"\t\t\tTRAIN_TICKETS    = 200"<<endl;
	    cout<<"\t\t\tARIVAL DAY       = FRIDAY"<<endl;
		cout<<"\t\t\tTICKET_PRICE     = 190"<<endl;	
        cout<<"\t\tDO YOU WANT TO BUY TICKET?"<<endl;
        cin>>sg;
        if(sg=="YES"){
        	system("cls");
		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
		ofstream write ("account_info.txt");
		write.close();
		ifstream  big("messege.txt");
		for (int i=0;i<=19;i++){
            string temp;
	 	getline(big,temp);
			detail=temp+"\n";
		    cout<<detail;
		}
		cout<<"                                                         |                                         ";
		cout<<"         ___       |     "<<endl;
		cout<<"                                                         |____________________________________________________________|\n\t\t\t\t\t\t\t";
			big.close();	
				cin>>sg;
		if(sg=="YES"){
			system("cls");
			 textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
				ifstream  b6("RESEVE.txt");
		for (int i=0;i<=16;i++){
            string temp;
	 	getline(b6,temp);
			detail=temp+"\n";
		    cout<<detail;   
		}
		g=nam;
		cout<<"                                                         |                          for "<<g<<"                         "<<endl;
			for (int T=0;T<=4;T++){
            string temp1;
	 	getline(b6,temp1);
			detail=temp1+"\n";
		    cout<<detail; 
		     }
		getch();
		    system("cls");
		    b6.close();
			return 1; 
		}
		else{
					system("cls");
			goto l9;
	
	}
		}
		else{
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){
		system("cls");
			goto l9;}
			else{
					system("cls");
			return 1;
			}
		}
		}
		else if(ID=="125IO"){	
		cout<<"\t\t\t\t\t\t\tnot available"<<endl;	
	cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){
		system("cls");
			goto l9;}
			else{
					system("cls");
			return 1;
			}
		}
		else{
			cout<< "please enter correct ID"<<endl;
			getch();
			system("cls");
			import.close();
         goto  v5;
		}
	   }	   
	else if(a=="saturday"&&A_city=="KARACHI"&&c_city=="LAHORE"){
	   	   		v6:
   	    l10:
   		textcolor(6);
   		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
	                                                                                          ifstream import("SATURDAY.txt");
	    for(int i=0;i<=5;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
	    	
		}
			    for(int i=0;i<=0;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;}
	    		textcolor(8);
		for(int i=0;i<=2;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
		}
		import.close();
		textcolor(6);
		cout<<" Enter train id\n\t\t\t\t\t"<<endl;
	  cin>>ID;
		//reserv
		if(ID=="126UO"){
		cout<<"\n\n\n\n\n\n\n\t\t\tTRAIN_ID       = 126UO"<<endl;
		cout<<"\t\t\tTRAIN_TICKETS    = 200"<<endl;
	    cout<<"\t\t\tARIVAL DAY       = SATURDAY"<<endl;
		cout<<"\t\t\tTICKET_PRICE     = 180"<<endl;	
        cout<<"\t\tDO YOU WANT TO BUY TICKET?"<<endl;
        cin>>sg;
        if(sg=="YES"){
        	system("cls");
		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
		ofstream write ("account_info.txt");
		write.close();
		ifstream  big("messege.txt");
		for (int i=0;i<=19;i++){
            string temp;
	 	getline(big,temp);
			detail=temp+"\n";
		    cout<<detail;
		}
		cout<<"                                                         |                                         ";
		cout<<"         ___       |     "<<endl;
		cout<<"                                                         |____________________________________________________________|\n\t\t\t\t\t\t\t";
			big.close();	
				cin>>sg;
		if(sg=="YES"){
			system("cls");
			 textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
				ifstream  b6("RESEVE.txt");
		for (int i=0;i<=16;i++){
            string temp;
	 	getline(b6,temp);
			detail=temp+"\n";
		    cout<<detail;   
		}
		g=nam;
		cout<<"                                                         |                          for "<<g<<"                         "<<endl;
			for (int T=0;T<=3;T++){
            string temp1;
	 	getline(b6,temp1);
			detail=temp1+"\n";
		    cout<<detail; 
		     }
		getch();
		    system("cls");
		    b6.close();
			return 1; 
		}
		else{
					system("cls");
			goto l10;
	
	}
		}
		else{
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){
		system("cls");
			goto l10;}
			else{
					system("cls");
			return 1;
			}
		}
		}
		else if(ID=="127UP"){	
		cout<<"\t\t\t\t\t\t\tnot available"<<endl;	
	cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){
		system("cls");
			goto l10;}
			else{
					system("cls");
			return 1;
			}
		}
		else{
			cout<< "please enter correct ID"<<endl;
			getch();
			system("cls");
			import.close();
         goto  v6;
		}
	   }	   
	else if(a=="sunday"&&A_city=="KARACHI"&&c_city=="LAHORE"){
	   	   		   		v7:
   	    l11:
   		textcolor(6);
   		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
	                                                                                          ifstream import("SUNDAY.txt");
	    for(int i=0;i<=5;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
	    	
		}
			    for(int i=0;i<=0;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;}
	    		textcolor(8);
		for(int i=0;i<=3;i++){
	    	string temp;
	    	getline(import,temp);
	    	detail=temp+"\n";
	    	cout<<detail;
		}
		import.close();
		textcolor(6);
		cout<<" Enter train id\n\t\t\t\t\t"<<endl;
	  cin>>ID;
		//reserv
		if(ID=="131DN"){
		cout<<"\n\n\n\n\n\n\n\t\t\tTRAIN_ID       = 131DN"<<endl;
		cout<<"\t\t\tTRAIN_TICKETS    = 400"<<endl;
	    cout<<"\t\t\tARIVAL DAY       = SUNDAY"<<endl;
		cout<<"\t\t\tTICKET_PRICE     = 280"<<endl;	
        cout<<"\t\tDO YOU WANT TO BUY TICKET?"<<endl;
        cin>>sg;
        if(sg=="YES"){
        	system("cls");
		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
		ofstream write ("account_info.txt");
		write.close();
		ifstream  big("messege.txt");
		for (int i=0;i<=19;i++){
            string temp;
	 	getline(big,temp);
			detail=temp+"\n";
		    cout<<detail;
		}
		cout<<"                                                         |                                         ";
		cout<<"         ___       |     "<<endl;
		cout<<"                                                         |____________________________________________________________|\n\t\t\t\t\t\t\t";
			big.close();	
				cin>>sg;
		if(sg=="YES"){
			system("cls");
			 textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
				ifstream  b6("RESEVE.txt");
		for (int i=0;i<=16;i++){
            string temp;
	 	getline(b6,temp);
			detail=temp+"\n";
		    cout<<detail;   
		}
		g=nam;
		cout<<"                                                         |                          for "<<g<<"                         "<<endl;
			for (int T=0;T<=2;T++){
            string temp1;
	 	getline(b6,temp1);
			detail=temp1+"\n";
		    cout<<detail; 
		     }
		getch();
		    system("cls");
		    b6.close();
			return 1; 
		}
		else{
					system("cls");
			goto l11;
	
	}
		}
		else{
			cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){
		system("cls");
			goto l11;}
			else{
					system("cls");
			return 1;
			}
		}
		}
		else if(ID=="132MN"){	
		cout<<"\t\t\t\t\t\t\tnot available"<<endl;	
	cout<<"\t\t\t\t\t\t1) stay\t 2) dashboard"<<endl;
			cin>>sel;
			if(sel==1){
		system("cls");
			goto l11;}
			else{
					system("cls");
			return 1;
			}
		}
		else{
			cout<< "please enter correct ID"<<endl;
			getch();
			system("cls");
			import.close();
         goto  v7;
		}
	   }   
	   else {
	   	cout<<"\n\n\n\n\n\t\t\t\t\t\t you entered a wrong input: "<<endl;
	   		   	system ("cls");
	   	return 0;
	   }
}
};
                               // Function of search class
void search:: getMonth(int n) {
l1:
int a=0;
   textcolor(6);
cout<<"\n\t\t\t\t\tENTER month\n\t\t\t\t\t";
   textcolor(3);
cin>>a;

if(a<=12 && a>=1){
dMonth[n] =a;
}
else{
system("cls");
cout<<"\n\n\n\t\t\tERROR:\n\t\t\t"<<dMonth[n]<<": It's an invalid Month"<<endl;
getch();
system("cls");
goto l1;
}
}
                                          // Function of search class
void search ::getDay(int n){
l2:
int a=0;
   textcolor(6);
cout<<"\n\t\t\t\t\tENETR DAY\n\t\t\t\t\t: ";
   textcolor(3);
cin>>a;
if(a<=31 && a>=1 && (dMonth[n]==1||dMonth[n]==3
||dMonth[n]==5||dMonth[n]==7||dMonth[n]==8||dMonth[n]==10||dMonth[n]==12))
{ day[n]=a;
}
else if(a<=30 && a>=1 && (dMonth[n]==4||dMonth[n]==6
||dMonth[n]==9||dMonth[n]==11)){
day[n]=a;
}
else if(a<=28 &&a>=1 && dMonth[n]==2){
day[n]=a;
}
else{
system("cls");
cout<<"\n\n\n\t\t\tERROR:\n\t\t\t"<<day<<": It's an invalid day for "<<dMonth<<endl;
getch();
system("cls");
goto l2;
}
}
                                          // Function of search class
void search ::printDate (int N){
	   textcolor(6);
cout<<"\n\n\t\t\b\b\t\t\t\t\t\t\t\t\t"<<"\" DATE\""<<endl;
cout<<"\t\t\b\b\b\t\t\t\t\t\t\t\t\tD \\M \\ Y\n"<<endl;
cout<<"\t\t\b\b\b\t\t\t\t\t\t\t\t\t"<<day[N]<<"\""<<dMonth[N]<<"\""<<year[N]<<"\n\n\n"<<endl;
}
                                          // Function of search class
void search ::getYear(int n){
l3:
int a=0;
   textcolor(6);
cout<<"\n\t\t\t\t\tENTER year"<<"\n\t\t\t\t\t ";
   textcolor(3);
cin>>a;
if(a>=2023 && a<=2025){
year[n]=a;
}
else{
system("cls");
cout<<"\n\n\n\t\t\tERROR:\n\t\t\t"<<year[n]<<": It's an invalid year"<<endl;
getch();
system("cls");
goto l3;
}
}

    class record_fetch: public start {
	string temp,mail,temp1,temp2,tickets, n1, ps1;
	public:
	int import_detail(string n1,string ps1){
	       ifstream read1("record.txt");
	      
	 for (int i = 0; i <= 1000; i++)
            { getline(read1, temp1);
                getline(read1, temp2);
     if (n1 ==temp1  && ps1 == temp2)
                {
                	ifstream r("detailed_file");
                	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t~~~~~~~~~~~~~~~\"DETAILS\"~~~~~~~~~~~~~~      "<<endl;
                 cout<<"\n\t\t\t\t\t\tPERSONALS:"  ; 
					cout<<"\n\t\t\t\t\t\t\tNAME :     "<<n1<<endl;
                    getline(read1,mail);
                   cout<<"\n\t\t\t\t\t\t\tGmail :     "<<mail<<endl;
                   getline(read1,tickets);
                cout<<"\n\t\t\t\t\t\tTICKET DETAILS:"; 
                   cout<<"\n\t\t\t\t\t\t\tDATE :     "<<tickets<<endl;
                   getline(read1,tickets);
                      cout<<"\n\t\t\t\t\t\t\tLocation :     "<<tickets<<endl;
                      getline(read1,tickets);
                      cout<<"\n\t\t\t\t\t\t\tTRAIN Id :     "<<tickets<<endl;
                   getch();
                   return 1;
                }
                else{
                	for(int i=0;i<=3;i++){
                	getline(read1,temp);
                }
			        	}
				}	
				}
};       
class train_times:public record_fetch{
	string l,country,temp;
	public:
		int import_details(char f,string country){
			        	system("cls");
		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << f;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
         textcolor(12);
        if(country=="LAHORE"){
			ifstream obj("time.txt");
			for (int i=0;i<=5;i++){
				string temp;
				getline(obj,temp);
				l=l+temp+"\n";
			}
			
			 textcolor(3);
			for (int i=0;i<1;i++){
				string temp;
				getline(obj,temp);
				l=l+temp+"\n";
			} 
			
			textcolor(12);
			for (int i=0;i<=23;i++){
				string temp;
				getline(obj,temp);
				l=l+temp+"\n";
				
			}
			cout<<l;
			getch();
			return 1;
			}
			else if(country=="KARACHI"){
			ifstream obj("TIMEK.txt");
			for (int i=0;i<=5;i++){
				string temp;
				getline(obj,temp);
				l=l+temp;
			}
			textcolor(3);
						for (int i=0;i<1;i++){
				string temp;
				getline(obj,temp);
				l=l+temp+"\n";
			}
			
			 textcolor(12);
			for (int i=0;i<6;i++){
				string temp;
				getline(obj,temp);
				l=l+temp+"\n";
			} 
			cout<<l;
			getch();
			return 1;
			}
		}
};
int main()
{
    int x,p1,n,o;
    char c;
    record_fetch  q;
    string i,nam,pas,B,lk=""; 
    search p;
    start a;
    dashboard d;
    train_times t;
  // d = new menu();
    decq s;
 s.welcome();

  x = a.page_1();
    if (x == 2)
    {
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  \"THANKS FOR SIGN UP\"";
    }
    else if (x == 1)
    {das:
        c = a.display();
       i= a.dash_board(c);
    }
      if (i == "search")
        {l:
		p.display_d(c);
       p.getMonth(0);
       p.getDay(0);
        p.getYear(0);
        i=p.set_date();
        system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << c;
        textcolor(6);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tON\n\t\t\t\t\t\t\t\t\t\t "<<endl;
        p.printDate(0);
        cout<<endl<<"\n\t\t\t\t\t\t\t\t\tDAY = "<<i<<endl;
           getch();
	    system("cls");
            p1=p.display_l(c);
           o= p.location(p1);
           if(o==1){
           	goto l;
		   }  
    nam=a.n();
    	 pas=a.n(lk);
   n= p.import_detail(i,c,nam,pas);
   if(n==1){
   	goto das;
   }
   else if(n==0){
   	goto l;
   }
   else
   {
   	cout<<"Thanks for comming here"<<endl;
   }
    //p.printDate(0);
  }
   else if(i=="personal"){
   	 pas=a.n(lk);
   	  nam=a.n();
   n=	q.import_detail(nam,pas);
   	 if(n==1){
   	 	system("cls");
   	goto das;
   }
   else if(n==0){
   	goto l;
   }
   else
   {
   	cout<<"Thanks for comming here"<<endl;
   }
   	
   }
   else if (i=="timing"){
   	        	system("cls");
		  textcolor(6);
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                   ___";
        cout << "\n\t\t\t\t\t\t\t\t\t                 \t\t                  ( ";
        textcolor(7);
        cout << c;
        textcolor(3);
        cout << " )" << endl;
        cout << "\t\t\t\t\t\t\t\t\t                 \t\t                   ---" << endl;
   	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t~~~~~~~~~~~~~~~\"SELEECT_COUNTRY\"~~~~~~~~~~~~~~      "<<endl;
                 cout<<"\n\t\t\t\t\t\tCOUNTRY:"  ; 
					cout<<"\n\t\t\t\t\t\t\tKARACHI ?     "<<endl;
                    getline(cin,B);
                   cout<<"\n\t\t\t\t\t\t\tLAHORE ?   "<<endl;
                   getline(cin,B);
                   if(B=="KARACHI"){
                   n=	t.import_details(c,B);
				   }
				   else if(B=="LAHORE"){
				   	n=t.import_details(c,B);
				   }
				   else{
				   	cout<<"you entered  a wrong input"<<endl;
				   }
				if(n==1){
					system("cls");
   	goto das;
   }
   else if(n==0){
   	goto l;
   }
   else
   {
   	cout<<"Thanks for comming here"<<endl;
   }   
   }
   else{
   cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t would you like to give me some stars" << endl;
    cout<<"thanks for your precious time"<<endl;
   }
    
    return 0;
}

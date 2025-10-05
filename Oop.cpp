Q)1.Library Management System


#include<iostream>
using namespace std;
class book
{
  private:
	string author,title;
	int book_id;
	float amount;
	static int book_id_generator;	
  public:

	void addNew(string t,string a)
		{
			title=t;
			author=a;
			
			book_id=++book_id_generator;
			
		}
	void display_book()
	{
		cout<<"\n Book Id:"<<book_id;
		cout<<"\n Title:"<<title;
		cout<<"\n Author:"<<author;
	}
	void search_book(int b_id){
			b_id==book_id;
			cout<<"\nBook with book id "<<book_id<<" found";
		
		
	}
	

	
	int get_book_id()
	{
		return book_id;
	}
	
	
};

int book::book_id_generator=100;
	
int main() 
{
 int books=0;
 book b[100];
 string author,title;
 int book_id;
 int choice;
 bool flag;
 int acc_no;
 
 do
 {
 	cout<<"\n---------------";
 	cout<<"\n Library";
 	cout<<"\n---------------";
 	cout<<"\n1.Add a new book";
 	cout<<"\n2.Display all books";
 	cout<<"\n3.Search for a book";
 	cout<<"\n0.Exit";
 	cout<<"\n---------------";
 	cout<<"\n:";
 	cin>>choice;
 	switch(choice)
 	{
 		case 1:
 				cout<<"\nEnter Title,Author: "	;
 				cin>>title>>author;
 				
 				b[books].addNew(title,author);
 				cout<<"New book added!!";
 			
 				books++;
 				break;
 		case 2:
 				
 				 if (books == 0) {
        			cout << "\nNo books in library!!";
    			 }
				 else 
				 {
				 	for (int i = 0; i < books; i++) {
                      b[i].display_book();
        			}
    			}
    break;
 		case 3:
 				flag=false;
 				cout<<"\nEnter Book Id:";
 				cin>>book_id;
 				for(int i=0;i<books;i++)
 				  {
				if(book_id==b[i].get_book_id())
 						{
 						 flag=true;
 						 b[i].search_book(book_id);
 						 b[i].display_book();
						 break;
					}
			 	if(flag==false)
						cout<<endl<<book_id<<" Not found....";
 					}
 		
 				break;
 		case 0:
 				cout<<"Exiting....";
 				break;
 		default:
 				cout<<"Wrong choice given..";
 				break;
	 }
 }while(choice!=0);


}


Q)2. Adding Time Using a Friend Function

#include<iostream>
using namespace std;
class Time_2;
class Time_1
    {
        private :
          int t1_hours,t1_miniutes,t1_seconds;
        public :
            Time_1(int t1_hr,int t1_min,int t1_sec)
                {
                    t1_hours = t1_hr;
                    t1_miniutes = t1_min;
                    t1_seconds = t1_sec;
                }
        friend void add_time(Time_1 obj1,Time_2 obj2);
    };

class Time_2
    {
        private:
          int t2_hours,t2_miniutes,t2_seconds;
        public:
            Time_2(int t2_hr,int t2_min,int t2_sec)
                {
                    t2_hours = t2_hr;
                    t2_miniutes = t2_min;
                    t2_seconds = t2_sec;
                }
        friend void add_time(Time_1 obj1,Time_2 obj2);
    };
    
void add_time(Time_1 obj1,Time_2 obj2)
    {
        int t3_hr,t3_min,t3_sec;
        t3_sec = (obj1.t1_seconds + obj2.t2_seconds)%60;
        t3_min = (obj1.t1_miniutes + obj2.t2_miniutes +(obj1.t1_seconds + obj2.t2_seconds)/60)%60;
        t3_hr = (obj1.t1_hours + obj2.t2_hours) + ((obj1.t1_miniutes + obj2.t2_miniutes +(obj1.t1_seconds + obj2.t2_seconds)/60)/60);
        cout<<"Addition of time = "<<t3_hr<<":"<<t3_min<<":"<<t3_sec;
    }

int main()
{
int hours_1,miniutes_1,seconds_1,hours_2,miniutes_2,seconds_2;
cout<<"Enter hours of time T1 : ";
cin>>hours_1;
cout<<"Enter miniutes of time T1 : ";
cin>>miniutes_1;
cout<<"Enter seconds of time T1 : ";
cin>>seconds_1;
cout<<"Enter hours of time T2 : ";
cin>>hours_2;
cout<<"Enter miniutes of time T2 : ";
cin>>miniutes_2;
cout<<"Enter seconds of time T2 : ";
cin>>seconds_2;
Time_1 time1(hours_1,miniutes_1,seconds_1);
Time_2 time2(hours_2,miniutes_2,seconds_2);
add_time(time1,time2);
}



Q)3. Constructor Overloading and Destructor

#include<iostream>
using namespace std;

class Box
    {
        private :
            float length,breath,hight;
        public :
            Box()
                {
                    this->length = 0;
                    this->breath = 0;
                    this->hight = 0;
                }
            Box(float length,float breath,float hight)
                {
                    this->length = length;
                    this->breath = breath;
                    this->hight = hight;
                }
            Box(float length)
                {
                    this->length = length;
                    this->breath = length;
                    this->hight = length;
                }
            void Display()
                {
                    cout<<"Length is : "<< length<<" Breath is : "<<breath<<" Hight is : "<<hight<<endl;
                }
            void Volume()
                {
                   cout<<"Volume of box is : "<<length * breath * hight<<endl;
                }
            ~Box()
                {
                    cout<<"Box destroyed"<<endl;
                }
    };
int main()
{
    float length,breath,hight;
    cout<<"Enter length,breath and hight : ";
    cin>>length>>breath>>hight;
    Box b1 ,b2(length,breath,hight),b3(length);
    b1.Display();
    b1.Volume();
    b2.Display();
    b2.Volume();
    b3.Display();
    b3.Volume();
}
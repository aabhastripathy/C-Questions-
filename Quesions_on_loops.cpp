//1. Dog's Age Calculator
#include <iostream>
#include <cmath>
#include <string>
int main(){
using namespace std;
float dog_age,dog_year; 
cout<<"Enter the age of dog(in human years) :"<<endl;
cin>>dog_age;
if(dog_age>2)
{
    dog_year = (dog_age -2)*4 + 21;
}
else 
{
    dog_year = dog_age * 10.5;
}
cout<<"Age of dog in Dog years is : "<<dog_year;
}



           // 2. Season Detector
#include <iostream>
#include <cmath>
#include <string>
int main(){ 
int month,date;  
cout<<"Enter the month (1 to 12) : " ;
cin>>month;
cout<<"\nEnter the Date (1 to 31) : ";
cin>>date;
switch (month){
case 1:
cout<<"Season is Winter"<<endl;
    break;
case 2:
cout<<"Season is Winter"<<endl;
    break;
case 3:
if(date<=19)
 {   
     cout<<"Season is Winter"<<endl;
    break;
 }
else 
    {
        cout<<"Season is Spring"<<endl;
        break;
    }
    
case 4:
cout<<"Season is Spring"<<endl;
        break;
case 5:
cout<<"Season is Spring"<<endl;
        break;
case 6:
if(date<=20)
    {
        cout<<"Season is Spring"<<endl;
        break;
    }
else 
    {
        cout<<"Season is Summer"<<endl;
        break;
    }
case 7:
cout<<"Season is Summer"<<endl;
        break;
case 8:
cout<<"Season is Summer"<<endl;
        break;
case 9:
if(date<=22)
    {
        cout<<"Season is Summer"<<endl;
        break;
    }
else 
    {
        cout<<"Season is Autumn"<<endl;
        break;
    }
case 10:
cout<<"Season is Autumn"<<endl;
        break;
case 11:
cout<<"Season is Autumn"<<endl;
        break;
case 12:
if(date<=20)
    {
        cout<<"Season is Autumn"<<endl;
        break;
    }
else
    {
        cout<<"Season is Winter"<<endl;
        break;
    }
default:
cout<<"Invalid input";
 }

}

       // 3. Astrological Sign Finder
#include <iostream>
#include <cmath>
#include <string>
int main(){
int day;
string month;
cout<<"Enter the day of birth(1 to 31) : ";
cin>>day;
cout<<"Enter the month(e.g., january, may, etc.): ";
cin>>month;
if(day>=21 && month=="march" ||day<=19 && month=="april")
    {
        cout<<"The zodiac sign is Aries";
    }
else if(day>=20 && month=="april" ||day<=20 && month=="may")
    {
        cout<<"The zodiac sign is Taurus";
    }
else if(day>=21 && month=="may" ||day<=20 && month=="june")
    {
        cout<<"The zodiac sign is Gemini";
    }
else if(day>=21 && month=="june" ||day<=22 && month=="july")
    {
        cout<<"The zodiac sign is Cancer";
    }
else if(day>=23 && month=="july" ||day<=22 && month=="august")
    {
        cout<<"The zodiac sign is Leo";
    }
else if(day>=23 && month=="august" ||day<=22 && month=="september")
    {
        cout<<"The zodiac sign is Virgo";
    }
else if(day>=23 && month=="september" ||day<=22 && month=="october")
    {
        cout<<"The zodiac sign is Libra";
    }
else if(day>=23 && month=="october" ||day<=21 && month=="november")
    {
        cout<<"The zodiac sign is Libra";
    }
else if(day>=22 && month=="november" ||day<=21 && month=="december")
    {
        cout<<"The zodiac sign is Sagittarius";
    }
else if(day>=22 && month=="december" ||day<=19 && month=="january")
    {
        cout<<"The zodiac sign is Capricorn";
    }
else if(day>=20 && month=="january" ||day<=18 && month=="february")
    {
        cout<<"The zodiac sign is Aquarius";
    }
else if(day>=19 && month=="february" ||day<=20 && month=="march")
    {
        cout<<"The zodiac sign is Pisces";
    }
}

    //4. Divisible by 7, Multiple of 5




#include <iostream>
#include <cmath>
#include <string>
int main(){
for(int i = 1500;i<=2700;i++)
    {
        if(i % 7 == 0 && i % 5 == 0)
            cout<<i<<",";
    }


}









//5. Count Even and Odd Numbers

#include <iostream>
#include <cmath>
#include <string>
int main(){

int number,digit,even_count=0,odd_count=0;
 cout<<"Enter the number : ";
 cin>>number;
while(number > 0)
    {
        digit = number % 10;
        number = number /10;
        if(digit<0)
        {
            break;
        }
        else if(digit % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
        cout<<"\nNumber of even numbers : "<<even_count<<endl;
        cout<<"\nNumber of odd numbers : "<<odd_count<<endl;
    
}







//6. Skip Numbers with 'continue'

#include <iostream>
#include <cmath>
#include <string>
int main(){

for(int i=0;i<=6;i++)
    {
        if(i == 3 || i == 6)
            {
                continue;
            }
        cout<<i<<" ";
    }

}





//7. FizzBuzz Challenge



#include <iostream>
#include <cmath>
#include <string>
int main(){

for(int i = 1;i<=50;i++)
    {
        if(i % 3 == 0 && i % 5 != 0)
            {
                cout<<"Fizz"<<endl;
            }
        else if(i % 5 == 0 && i % 3 != 0)
            {
                cout<<"Buzz"<<endl;
            }
        else if(i % 3 == 0 && i % 5 == 0)
            {
                cout<<"FizzBuzz"<<endl;
            }
        else 
            {
                cout<<i<<endl;
            }
    }
}


//8. Even-Digit Numbers


#include <iostream>
#include <cmath>
#include <string>
int main(){
int i_copy,digit;
bool flag = true;
for(int i = 100;i <= 400;i++)
    {
        i_copy = i;
        
        while(i_copy > 0){
            digit = i_copy % 10;
            i_copy = i_copy/10;
            if(digit % 2 == 0){
                flag = true;
            }
            else {
                flag = false;
                break;
            }
        }
        if(flag == true)
            {
                cout<<i<<",";
            }
    }	
}






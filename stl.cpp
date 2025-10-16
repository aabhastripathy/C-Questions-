#include <iostream> 
#include <vector> 
#include <list>
#include <map>
using namespace std;

int digit_sum(int n){
    int digit,sum=0;
    int x,end_sum=0;
    while(n>0){
        digit = n %10;
        n = n/10;
        sum = sum + digit;
        
    }
    if(sum % 10 != 0 ){
        while (sum>0){
            x = sum % 10;
            sum = sum/10;
            end_sum = x + end_sum;
        }
    }
    return end_sum;
}
string type(int x){
    vector <string> your_type;
    your_type ={" ",
        "The Leader",
    "The Peacemaker",
    "The Communicator",
    "The Builder",
    "The Adventurer",
    "The Caregiver",
    "The Seeker",
    " The Powerhouse",
"The Humanitarian"};
return  your_type[x];
}
string numerlogical_map(int x){
    map<int, string> numerologyMap;
    numerologyMap[1] = "Positive: Independent, Ambitious, Pioneer |\n Negative: Self-centered, Domineering, Aggressive";
    numerologyMap[2] = "Positive: Cooperative, Diplomatic, Harmonious |\n Negative: Shy, Dependent, Indecisive";
    numerologyMap[3] = "Positive: Creative, Expressive, Social |\n Negative: Scattered, Superficial, Unfocused";
    numerologyMap[4] = "Positive: Disciplined, Hard-working, Practical |\n Negative: Rigid, Dogmatic, Lacking imagination";
    numerologyMap[5] = "Positive: Adaptable, Resourceful, Free-spirited |\n Negative: Restless, Impulsive, Irresponsible";
    numerologyMap[6] = "Positive: Nurturing, Loving, Responsible |\n Negative: Self-righteous, Controlling, Worried";
    numerologyMap[7] = "Positive: Analytical, Intuitive, Spiritual |\n Negative: Aloof, Secretive, Pessimistic";
    numerologyMap[8] = "Positive: Authoritative, Ambitious, Visionary |\n Negative: Materialistic, Controlling, Domineering";
    numerologyMap[9] = "Positive: Compassionate, Idealistic, Selfless |\n Negative: Possessive, Defensive, Emotional";
    return numerologyMap[x];

}
int main(){
int date,month,year,sum_date;
string name;
cout<<"Enter your name : ";
cin>>name;

cout<<"\nEnter your birth date : ";
cin>>date;

cout<<"\nEnter your birth month : ";
cin>>month;

cout<<"\nEnter your birth year : ";
cin>>year;
sum_date = digit_sum(date) + digit_sum(month) + digit_sum(year);
int numerlogical_number = digit_sum(sum_date);
cout<<name<<" your numerlogical number is : "<<numerlogical_number<<" Type: "<<type(numerlogical_number) <<endl;
cout<<"Your qualities are : "<<endl;
cout<<numerlogical_map(numerlogical_number);
}


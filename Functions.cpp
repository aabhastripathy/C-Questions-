Question 1

#include <iostream>
using namespace std;
int missing_number(int a[],int num,int sum1){
    int sum=0;
    for(int i=0;i<=num;i++){
        sum+=i;
    }
    for(int i=0;i<num;i++){
        sum1+=a[i];
    }
    return sum-sum1;
}

int main()
{
    int num;
    cout<<"enter num:";
    cin>>num;
    int a[num];
    cout<<"enter value in array:";
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    int sum1=0;
    cout<<"missing number is:="<<missing_number(a,num,sum1);

    return 0;
}


Question 2
#include <iostream>
using namespace std;
int Remove_Duplicates(int a[],int a2[],int num){
    int k=0;
    for(int i=0;i<num;i++){
        bool found=false;
        for(int j=0;j<k;j++){
            if(a[i]==a2[j]){
                found=true;
                break;
            }
        }
        if (!found){
            a2[k]=a[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int num;
    cout<<"enter num:";
    cin>>num;
    int a[num];
    cout<<"enter value in array:";
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    int a2[num];
    int newLen=Remove_Duplicates(a,a2,num);
    cout<<"total unique element is ;"<<endl;
    cout<<"unique element is:";
    for(int i=0;i<newLen;i++){
        cout<<a2[i];
    }
    
    return 0;
}

Question 3
#include <iostream>
using namespace std;
int Max_subarray(int a[],int num,int sum){
    int max_sum=-1;
 for(int i=0;i<num;i++){
     sum+=a[i];
     if(sum>max_sum){
         max_sum=sum;
     }
     if(sum<0){
         sum=0;
     }
    } 
    return max_sum;
}

int main()
{
    int a[]= {-2,1,-3,4,-1,2,1,-5,4};
    int num=9;
    int sum=0;
    cout<<"maximum sum of subarray:"<<Max_subarray(a,num,sum);
    return 0;
}

Question 4
#include <iostream>
using namespace std;
int main()
{
    string line;
    cout<<"enter string Parentheses:";
    getline(cin,line);
    int countA=0;
    int countB=0;
    int countC=0;
    for(int i=0;line[i]!='\0';i++){
        if(line[i]=='('){
            countA++;
        }
        if(line[i]==')'){
            countA--;
        }
        if(line[i]=='['){
            countB++;
        }
        if(line[i]==']'){
            countB--;
        }
        if(line[i]=='{'){
            countC++;
        }
        if(line[i]=='}'){
            countC--;
        }
        
    }
    if(countA==0&&countB==0&&countC==0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}

Question 5
#include <iostream>
using namespace std;
void merge_array(int num1[],int num2[],int m,int n){
    for(int i=0;i<n;i++){
        num1[m+i]=num2[i];
    }
}
int main()
{
    int m,n;
    cout<<"enter value of m:";
    cin>>m;
    cout<<"enter value of n:";
    cin>>n;
    int num1[m+n];
    int num2[n];
    cout<<"enter element:";
    for(int i=0;i<m;i++){
        cin>>num1[i];
    }
    cout<<"enter element:";
    for(int i=0;i<n;i++){
        cin>>num2[i];
    }
    merge_array(num1,num2,m,n);
    int temp;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(num1[j]>num1[j+1]){
                temp=num1[j];
                num1[j]=num1[j+1];
                num1[j+1]=temp;
            }
        }
    }
    cout<<"after meging num1+numb2:"
    for(int i=0;i<m+n;i++){
        cout<<num1[i];
    }
    
    
    return 0;
}

Question 6
#include <iostream>
using namespace std;
int find_unique(int a[],int a2[],int num){
    int k=0;
    for(int i=0;i<num;i++){
        bool found=false;
        for(int j=0;j<k;j++){
            if(a[i]==a2[j]){
                
                break;
            }
            found=true;
        }
        if (!found){
            a2[k]=a[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int num;
    cout<<"enter num:";
    cin>>num;
    int a[num];
    cout<<"enter value in array:";
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    int a2[num];
    int newLen=find_unique(a,a2,num);
    cout<<"total unique element is ;"<<endl;
    cout<<"unique element is:";
    for(int i=0;i<newLen;i++){
        cout<<a2[i];
    }
    
    return 0;
}
Question 7
#include <iostream>
using namespace std;
void Array_Except_Self(int a[],int num,int a2[]){
    for(int i=0;i<num;i++){
        int product = 1;
        for(int j=0;j<num;j++){
            if(i==j){
                continue;
            }
            else{
                product *= a[j];
            }
            
        }
        a2[i]=product;
    }
}

int main()
{
    int num;
    cout<<"enter num:";
    cin>>num;
    int a[num],a2[num];
    cout<<"enter value in array:";
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    Array_Except_Self(a,num,a2);

    cout << "Product except self array: ";
    for (int i=0;i<num;i++) {
        cout<<a2[i]<<" ";
    }
    cout << endl;
    return 0;
}

Question 8
#include <iostream>
using namespace std;
int Climbing_Stairs(int num){
    if(num==1)return 1;
    if(num==2)return 2;
    return Climbing_Stairs(num-1)+Climbing_Stairs(num-2);
}

int main()
{
    int num;
    cout<<"enter num:";
    cin>>num;
    cout<<" distinct ways can you climb to the top;"<<Climbing_Stairs(num);
    
    return 0;
}

Question 9


Question 10
#include <iostream>
using namespace std;
int main()
{
    string line;
    cout<<"enter num:";
    getline(cin,line);
    int j=0;
    for(int i=0;line[i]!='\0';i++){
        j++;
    }
    for(int i=0;i<j/2;i++){
        char temp=line[i];
        line[i]=line[j-1-i];
        line[j-1-i]=temp;
    }
    cout<<"reverse string is "<<line;
    return 0;
}
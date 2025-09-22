#include<iostream>
using namespace std;

class Report{
    string name; 
    int rollno;
    int marks[5];
    float percentage, total;
    char grade;
   
    public:
    void input(string n, int r, int m[]){
        name = n;
        rollno = r;
        for(int i=0; i<5; i++){
            marks[i] = m[i];
        }
    }
    void display(){
        cout<<"Name is "<<name<<'\n';
        cout<<"Rollno is "<<rollno<<'\n';
        for(int i=0; i<5; i++){
            cout<<"Marks is "<<marks[i]<<'\n';
        }
        
        

    }
    void calculateGrade(){
        total = 0;
        for(int i=0; i<5; i++){
            total += marks[i];
        }
        
        percentage = (total/500) *100;
        cout<<"Total is "<<total<<'\n';
        cout<<"Percentage is "<<percentage<<'\n';
    

    if(percentage >= 95){
       cout<<"Grade:A"<<'\n'; 
    }
    else if(percentage<95 && percentage>=90){
        cout<<"Grade:B"<<'\n';
    }
    else if(percentage<90 && percentage >=80){
        cout<<"Grade:C"<<'\n';
    }
    else{
        cout<<"Grade:Fail";
    }

    }
};
 
int main(){
    Report S1;
    int marks[5] = {90, 85, 88, 92, 80}; // example marks
    S1.input("Aditya", 15, marks);
    S1.display();
    S1.calculateGrade();
}
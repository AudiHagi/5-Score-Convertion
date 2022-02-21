#include <iostream>
using namespace std;

int main()
{
int score=0; 
string grade;

cout<<"Score Conversion"<<endl;
cout<<"-----------------------------"<< endl;
cout<<"Score \t: ";cin>>score;

if (score<=100)
{
	 if (score>=90){
	grade="A";
	}
	else if (score>=80&&score<90){
	grade="B";
	}
	else if (score>=70&&score<80){
	grade="C";
	}
	else if (score>=60&&score<70){
	grade="D";
	}
	else if (score>=0&&score<60){
	grade="E";
	}
	else{
	grade="-";
	}
}
else 
grade= "-";
cout<<"Grade\t: "<<grade<<endl;
exit(0);
}


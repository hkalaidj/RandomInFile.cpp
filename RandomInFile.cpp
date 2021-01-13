 #include <iostream>
#include<time.h>
#include<cstdlib>
#include <fstream>
using namespace std;
int main()
{time_t now;
time(&now);
srand(now);
rand();
int j;

cout<<"Enter how many random numbers you desire :";
cin>>j;

{
for(int i=0;i<j;i++){
string a[] ={"A","B","C","E","F","G","H","J","K","L","M","N","P","Q","R","S","T","U","V","W","X","Y","Z"};

ofstream myfile;
myfile.open("code.txt",ios::app);
     myfile<< rand() %(99-10+1)+10<<rand() %(99-10+1)+10<<a[(rand() %23)]<<endl<<""<< endl;
myfile.close();}
cout<<" "<<endl;
cout<<" ***** RANDOM NUMBERS READY UNDER code.txt :";
cout<<" "<<endl;
cout<<" "<<endl;
    return 0;
}
}

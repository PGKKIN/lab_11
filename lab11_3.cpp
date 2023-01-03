#include<iostream>
#include<fstream>
#include<string>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
    int count =0;
    float sum =0;
    float sd=0;
    float x =0;
	ifstream source;
	ofstream dest;
	source.open("score.txt");
	dest.open("score_copy.txt");
	string textline;
	while(getline(source,textline))
	{
	    
        sum += atof(textline.c_str());
        count++;
        x+=pow(atof(textline.c_str()),2);
	}
    sd = sqrt((1.0/count)*x-(pow(sum/count,2)));
    cout << "Number of data = "<< count;
    cout << setprecision(3);
    cout << "Mean = "<< sum/count;
    cout << "Standard deviation = " << sd;
    source.close();
	return 0;
}

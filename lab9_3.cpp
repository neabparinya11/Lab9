#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include<cmath>
using namespace std;

int main(){
	ifstream source;
	source.open("score.txt");
	int count=0;
	float sum=0;
	string textline;
	while(getline(source,textline)){
		sum +=atof(textline.c_str());
		count++;
	}
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<sum/count<<endl;
    source.close();
    source.open("score.txt");
    float mean=sum/count;
    sum=0;
    count=0;
    while(getline(source,textline)){
		sum +=(atof(textline.c_str())-mean)*(atof(textline.c_str())-mean);
		count++;
	}
	float dev=sqrt(sum/count);
    cout << "Standard deviation = "<<dev;
    source.close();
    return 0;
}
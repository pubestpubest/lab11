//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream source;
    float n,mean,sd,sum=0,sum_sd=0;

    string text;
    source.open("score.txt");
    while(getline(source,text)){
        n++;
        sum+=atof(text.c_str());
        sum_sd+=pow(atof(text.c_str()),2);
    }
    mean=sum/n;
    sd=sqrt((sum_sd/n)-pow(mean,2));
    cout << "Number of data = "<<n<<endl;
    cout<< setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<sd;

    return 0;
}

#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    ifstream file;
    file.open("input.txt");
    ofstream fil;
    fil.open("output.txt");
    long long iMin,iMax,a,b,c,d,Sum = 0;
    file >> a >> b >> c >> d;
    if ((a*b*c*d) >= 0 ){ 
      if ((a+b+c+d)%2 == 0){
        iMax = a;
        if (iMax <= b){
                iMax = b;
        }
        if (iMax <= c){
                iMax = c;
        }
        if (iMax <= d){
                iMax = d;
        }
        fil << iMax;
        }else {
        iMin = a;
        if (iMin >= b){
                iMin = b;
        }
        if (iMin >= c){
                iMin = c;
        }
        if (iMin >= d){
                iMin = d;
         }
        fil << iMin;
        }
    }else{
        if (a % 2 == 0){
            Sum += a;
        }
        if (b % 2 == 0){
            Sum += b;
        }
        if (c % 2 == 0){
            Sum += c;
        }
        if (d % 2 == 0){
            Sum += d;
        }
        fil << Sum;
    }
        file.close();
        fil.close();
        return 0;

}
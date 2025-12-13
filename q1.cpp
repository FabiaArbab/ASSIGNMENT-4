#include<iostream>
using namespace std;

const int days=7;
const int Time=4;

void ArrayInput(int temp[days][Time]){

    for(int i=0; i<days; i++){
        for(int j=0; j<Time; j++){
            cout<<"Enter temperature for day "<<i+1<<" time period "<<j+1<<": ";
            cin>>temp[i][j];
        }
        cout<<endl;
    }

}

void Temphighlow(int temp[days][Time], int &high, int &low){
    high = temp[0][0];
    low = temp[0][0];

    for(int i=0; i<days; i++){
        for(int j=0; j<Time; j++){
            if(temp[i][j] > high){
                high = temp[i][j];
            }
            if(temp[i][j] < low){
                low = temp[i][j];
            }
        }
    }
    cout<<"The highest temperature of the week is: "<<high<<endl;
    cout<<"The lowest temperature recorded is: "<<low<<endl;
}

void DailyAvg(int temp[days][Time], int &avg){

    for(int i=0; i<days; i++){
        int sum=0;
        for(int j=0; j<Time; j++){
            sum=sum+temp[i][j];
        }
        avg=sum/4;
        cout<<"The average temperature for day "<<i+1<<" is: "<<avg<<endl;
    }

}

int main(){
    int temperature[days][Time];
    int HighTem, LowTemp, avg;
     ArrayInput(temperature);
    Temphighlow(temperature, HighTem, LowTemp);
    DailyAvg(temperature,avg);

}
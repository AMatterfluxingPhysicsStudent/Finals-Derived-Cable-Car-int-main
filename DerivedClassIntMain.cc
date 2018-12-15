#include "MuniVehicle.h"
#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
  CableCar Ride1;
  string userRideChoice;
  string u;
  short numRides;

  cout<<"Are you getting on this Cable Car over here or the Muni over there?"<<endl;
  cout<<"Press C for Cable Car"<<endl;
  cout<<"Press M for Muni"<<endl;

  getline(cin, userRideChoice);
  u = userRideChoice[0];

  if (u == "C" || u == "c"){
    cout<<"How many rides are you paying for?"<<endl;
    cout<<"(enter 2 rides for the case the finals question asks for)"<<endl;
    getline(cin, userRideChoice);
    numRides = stoi(userRideChoice);
    cout<<numRides<<" rides, yes?"<<endl;
    for(int i = 0; i < numRides; i++){
      Ride1.paidFare();
    }
    cout<<"Here is the total fare:"<<endl;
    cout<<"$"<<Ride1.getTotalFares()<<endl;
  }
  else if (u == "M" || u == "m"){
    cout<<"Hello, this is the 29 Muni bus"<<endl;
    MuniVehicle Ride2;
    cout<<"How many rides are you paying for?"<<endl;
    getline(cin, userRideChoice);
    numRides = stoi(userRideChoice);
    cout<<numRides<<" rides, yes?"<<endl;
    for(int i = 0; i < numRides; i++){
      Ride2.paidFare();
    }
    cout<<"Here is the total fare:"<<endl;
    cout<<"$"<<Ride2.getTotalFares()<<endl;
  }
}
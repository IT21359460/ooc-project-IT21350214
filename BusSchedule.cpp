// IT21359460 W.A. Ishini Kaweesha Gunarathna
// class BusSchedule
#include<iostream>
#include<cstring>
#include"BusSchedule.h"
using namespace std;


BusSchedule::BusSchedule()//Default Constructor
{
	
}

void BusSchedule::setBusSchedule (string pScheduleID, string pRoute, string pDate, double pFare, Bus bBus)
{
	scheduleID = pScheduleID;
	pRoute = pRoute;
	date = pDate; 
	fare = pFare;
	
}

void BusSchedule::displayBusSchedule()
{
	
}

BusSchedule::~BusSchedule()//Destructor
{
	
}

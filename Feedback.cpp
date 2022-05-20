//IT21359460 W.A. Ishini Kaweesha Gunarathna
//class Feedback
#include<iostream>
#include<cstring>
#include"Feedback.h"
using namespace std;

Feedback::Feedback()//Default Constructor
{
  feedbackID = 0;
  strcpy( message, "" );
}

void Feedback::setFeedback (int pFeedbackID, string pMessage)
{
	  feedbackID = pFeedbackID;
	  message = pMessage;
}

void displayFeedback()
{
	
}

Feedback::~Feedback()//Destructor
{
	
}

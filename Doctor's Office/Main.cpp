#include "Person.h"
#include "Doctor.h"
#include "Calendar.h"
#include "Patient.h"

using namespace std;

/********************
Function: schedule(Patient& x, Doctor& Dr, slots day)

Schedules an appointment only if the patient and doctor are available that day.
Patient and doctor are both passed by reference so their schedules are affected.

Returns: void
*********************/
void schedule(Patient& P, Doctor& Dr, slots day) {
		if (!P.isAvailable(day)) {
			cout << "Patient is not available"<< endl;
		}
		else if (!Dr.isAvailable(day)) {
			cout << "Doctor is not available" << endl;
		}
		else {
			x.addAppointment(day);
			Dr.addAppointment(day);
		}
}


//Program is used to create 2 patients and a doctor to test whether the program will not allow you to have 2 appointments on the same day
int main(void) {
	Patient P1("Bob", "Bobert", "Bowels");
	Doctor D1("Doctor", "Hafe", "Butt");
	Patient P2("Chris", "Joe", "Rash");

	schedule(P1, D1, MONDAY);
	schedule(P2, D1, MONDAY);
}

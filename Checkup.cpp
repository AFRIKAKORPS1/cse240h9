#include "Checkup.h"

Checkup::Checkup(string new_date) {
	date = new_date;
}

string Checkup::getDate() {
	return date;
}
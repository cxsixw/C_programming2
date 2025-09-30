/*
struct contact {
	char name[50];
	char phone[15];
	int ringtone;

};

typedef struct contact Contact;
Contact Kim  = {0};
*/

typedef struct contact {
	char name[50];
	char phone[15];
	int ringtone;
} Contact;

Contact Kim = { 0 };

#include "IContact.h"

Contact Kim = { 0 };

int main()
{
	Contact lee = { "Lee", "010-1234-5678", 1 };

	Contact lee2;

	return 0;

}
#include <stdio.h>

int isLeapYear(int year);
int weekday(int year, int month, int day);
int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	int year;
	int month;
	while(1) {
		printf("ÇëÊäÈëÄê·İ£º");
		scanf("%d", &year);
		if(isLeapYear(year)) {
			a[2] = 29;
		} else {
			a[2] = 28;
		}
		for(month=1;month<=12;month++) {
			printf(" Sun Mon Tue Wen Thu Fri Sta\n");
			int weeknum = weekday(year, month, 1);
			int i;
			for(i=0;i<weeknum;i++) {
				printf("    ");
			}
			int day;
			for(day = 1;day<=a[month];day++) {
				printf("%4d", day);
				weeknum++;
				if(weeknum % 7 == 0) {
					printf("\n");
				}
			}
			printf("\n");			
		}
	}

	return 0;
}

int isLeapYear(int year) {
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		return 1;
	} else {
		return 0;
	}
}

int weekday(int year, int month, int day)
{
	if (month <= 2)	{
		month += 12;
		year--;
	}
	int century = year / 100;
	year %= 100;
	int weekday = (year + year / 4 + century / 4 - 2 * century + 26 * (month + 1) / 10 + day - 1) % 7;
	while (weekday < 0)
	{
		weekday += 7;
	}
	return weekday;
}

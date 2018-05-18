#include "DateType.h"
void DateType::Initialize(int newMonth, int newDay, int newYear){
	year = newYear;
	month = newMonth;
	day = newDay;
}
int DateType::GetMonth() const{
	return month;
}
int DateType::GetDay() const {
	return day;
}
int DateType :: GetYear() const {
	return year;
}
RelationShipType DateType::compareTo(DateType someDate){
	if (year < someDate.GetYear())
		return LESS;
	if (month > someDate.GetMonth())
	{
		return GREATER;
	}
}

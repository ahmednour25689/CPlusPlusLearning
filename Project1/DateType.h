enum  RelationShipType
{
	LESS,
	GREATER,
	EQUAL
};
class  DateType
{
public:
	void Initialize(int newMonth,int newDay,int newYear);
virtual	RelationShipType compareTo(DateType aDate);//virtual means decision to be made at runtime
	int GetYear() const;//const because they dont change any of data members
	int GetMonth() const;
	int GetDay() const;
private:
	int year;
	int month;
	int day;
};

 

 
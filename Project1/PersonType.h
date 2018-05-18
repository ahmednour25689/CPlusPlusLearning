#include <string>
#include "DateType.h"
using namespace std;
class PersonType{
public :
	void Initialize(string,DateType);
	string GetName() const;
	DateType GetBirthdate() const;
private :
	string name;
	DateType birthdate;
};


#include <iostream>
#include <string>
#include "boost/date_time/gregorian/gregorian.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"


using namespace std;
using namespace boost::gregorian;
using namespace boost::posix_time;


int main(){


	/* Date */	
	auto d_str = "2017-01-30";
	date d(from_string(d_str));

	cout << "\n Date Examples" << endl;
	cout << d.year() << endl;
	cout << to_iso_extended_string(d) << endl;
	


	/* Date Time */
	cout << "\n Datetime Examples " << endl;
	auto dt_str = "2017-12-07 01:16:52.761122";
	ptime t(time_from_string(dt_str));

	cout << to_iso_extended_string(t.date()) << endl;
	
	
	return 0;
}

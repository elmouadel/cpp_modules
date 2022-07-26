#include <iostream>
#include <ctime>
# include <iomanip>

using namespace std;

int main() {
   // current date/time based on current system
   time_t now = time(0);
   // convert now to tm struct
   tm *_tm = localtime(&now);
   std::cout << std::setfill('0') << "[" << (_tm->tm_year + 1900)
	   << std::setw(2) << _tm->tm_mon
	   << std::setw(2) << _tm->tm_mday << "_"
	   << std::setw(2) << _tm->tm_hour
	   << std::setw(2) << _tm->tm_min
	   << std::setw(2) << _tm->tm_sec << "] ";
}

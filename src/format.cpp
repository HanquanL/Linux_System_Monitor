#include "format.h"

#include <iomanip>  // Add this line to include the <iomanip> header
#include <sstream>  // Add this line to include the <sstream> header
#include <string>

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function

using std::string;

string Format::ElapsedTime(long seconds) {
  long hours, minutes;
  hours = seconds / 3600;
  seconds = seconds % 3600;
  minutes = seconds / 60;
  seconds = seconds % 60;

  std::ostringstream time;
  time << std::setw(2) << std::setfill('0') << hours << ":" << std::setw(2)
       << std::setfill('0') << minutes << ":" << std::setw(2)
       << std::setfill('0') << seconds;
  return time.str();
}
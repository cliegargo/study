// https://www.codewars.com/kata/52742f58faf5485cae000b9a/train/cpp


#include <iostream>
#include <vector>

std::string format_duration(int seconds) {
    std::vector<std::string> duration;

    if((seconds) <= 3600) {
        if(seconds == 0) {
            return "now";
        } else if(seconds == 1) {
            return "1 second";
        } else {
            int hh = seconds / 3600;
            int mm = (seconds % 3600) / 60;
            int ss = seconds % 60;

            if(hh >= 1) {
                if(hh > 1) {
                    duration.push_back(std::to_string(hh) + " hours");
                } else {
                    duration.push_back(std::to_string(hh) + " hour");
                }
            }
            if(mm >= 1) {
                if(mm > 1) {
                    duration.push_back(std::to_string(mm) + " minutes");
                } else {
                    duration.push_back(std::to_string(mm) + " minute");
                }
            }
            if(ss >= 1) {
                if(ss > 1) {
                    duration.push_back(std::to_string(ss) + " seconds");
                } else {
                    duration.push_back(std::to_string(ss) + " second");
                }
            }

        }
    } else if((seconds) <= 86400) {
        int dd = (seconds % 31536000) / 86400;
        int hh = (seconds % 86400) / 3600;
        int mm = (seconds % 3600) / 60;
        int ss = seconds % 60;

        if(dd >= 1) {
            if(dd > 1) {
                duration.push_back(std::to_string(dd) + " days");
            } else {
                duration.push_back(std::to_string(dd) + " day");
            }
        }
        if(hh >= 1) {
            if(hh > 1) {
                duration.push_back(std::to_string(hh) + " hours");
            } else {
                duration.push_back(std::to_string(hh) + " hour");
            }
        }
        if(mm >= 1) {
            if(mm > 1) {
                duration.push_back(std::to_string(mm) + " minutes");
            } else {
                duration.push_back(std::to_string(mm) + " minute");
            }
        }
        if(ss >= 1) {
            if(ss > 1) {
                duration.push_back(std::to_string(ss) + " seconds");
            } else {
                duration.push_back(std::to_string(ss) + " second");
            }
        }
    } else {
        int yy = seconds / 31536000;
        int dd = (seconds % 31536000) / 86400;
        int hh = (seconds % 86400) / 3600;
        int mm = (seconds % 3600) / 60;
        int ss = seconds % 60;

        if(yy >= 1) {
            if(yy > 1) {
                duration.push_back(std::to_string(yy) + " years");
            } else {
                duration.push_back(std::to_string(yy) + " year");
            }
        }

        if(dd >= 1) {
            if(dd > 1) {
                duration.push_back(std::to_string(dd) + " days");
            } else {
                duration.push_back(std::to_string(dd) + " day");
            }
        }
        if(hh >= 1) {
            if(hh > 1) {
                duration.push_back(std::to_string(hh) + " hours");
            } else {
                duration.push_back(std::to_string(hh) + " hour");
            }
        }
        if(mm >= 1) {
            if(mm > 1) {
                duration.push_back(std::to_string(mm) + " minutes");
            } else {
                duration.push_back(std::to_string(mm) + " minute");
            }
        }
        if(ss >= 1) {
            if(ss > 1) {
                duration.push_back(std::to_string(ss) + " seconds");
            } else {
                duration.push_back(std::to_string(ss) + " second");
            }
        }
    }

    std::string human_readable;

    if(duration.size() == 1) {
        human_readable = duration[0];
    } else if(duration.size() == 2) {
        human_readable = duration[0] + " and " + duration[1];
    } else if(duration.size() == 3) {
        human_readable = duration[0] + ", " + duration[1] + " and " + duration[2];
    } else if(duration.size() == 4) {
        human_readable = duration[0] + ", " + duration[1] + ", " + duration[2] + " and " + duration[3];
    } else if(duration.size() == 5) {
        human_readable = duration[0] + ", " + duration[1] + ", " + duration[2] + ", " + duration[3] + " and " + duration[4];
    }

    return human_readable;
}

int main() {
    int seconds;

    std::cin >> seconds;
    std::cout << format_duration(seconds) << "\n";

    return 0;
}
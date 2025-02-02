// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    // {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",
    // 30,		0},

    {"",
     "printf '%*s' 50 "
     "",
     1, 0},
    {"",
     "printf '%*s' 80 "
     "",
     1, 0},

    // {"", "battery", 0, 0},
    {"", "cat /sys/class/power_supply/BAT0/capacity", 1, 0},
    {"", "date '+%b %d (%a) %I:%M%p'", 5, 0},
};

// sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char delim[] = "  ";
static unsigned int delimLen = 5;

// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/

    {"", "date '+%A, %b %d %H:%M';", 5, 0},

    {"", "pamixer --get-volume-human", 5, 0},

    {"", "cat /sys/class/power_supply/BAT0/capacity | xargs -I{} sh -c 'if [ \"$(cat /sys/class/power_supply/BAT0/status)\" = \"Charging\" ]; then echo \"⚡{}%\"; else echo \"🔋{}%\"; fi'", 30, 0},

};

// sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;

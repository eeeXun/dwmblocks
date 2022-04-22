//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/     /*Update Signal*/
    {"",        "sb_volume",        0,                  10},
    {"",        "sb_memory",        2,                  0},
    {"",        "sb_cpu",           2,                  0},
    {"",        "sb_temperature",   2,                  0},
    {"",        "sb_net",           3,                  0},
    {"",        "sb_battery",       5,                  0},
    {"",        "sb_time",          10,                 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},
	
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		0},

	{" ", "~/.local/bin/statusbar/volume.sh",						0,		10},

	{"", "~/.local/bin/statusbar/backlight.sh",					0,		11},
	
	{"", "~/.local/bin/statusbar/battery.sh",						5,		0},

	{"  ", "echo $(sensors | awk '/^temp1:/{print $2}') ",				5,		0},

	{" ", "date +\"%r %a(%m/%d)\"",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

//                      (******** WORKS ON Linux ONLY ********)

//header file for user-define color macros for all c/c++ programs. 
//written by ydj. please contact back if any issue or suggestion.
//Gitgub link to this file is as follows:
//https://github.com/yashj9/cpp-practice/blob/master/colorsfile.h
//Thanks for downloading my file. :)
//for more details about this on linux go to man page of console-codes, --
//  -- using the following command: 
// $ man console-codes

//overview details about the format:
// '\033' is the escape sequence,
// '[' is the start of the color code,
// ';' is argument seperator,
// 'm' is to complete/end the given command.

//color code value:
//Foreground(Font)       Color       Background(Highlighting)
//      30               BLACK              40
//      31                RED               41
//      32               GREEN              42
//      33               BROWN              43
//      34                BLUE              44
//      35              MAGENTA             45
//      36                CYAN              46
//      37               WHITE              47

//Other arguments:
//   4  --->  Underlined
//   1  --->  Bold
//   0  --->  Reset all

//default/reset changes.
#define RESETC "\033[0m"

//Fore-ground/font colors. (normal format) 
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BROWN "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

//Back-ground/highlighting colors.
#define BLACKBG "\033[40m"
#define REDBG "\033[41m"
#define GREENBG "\033[42m"
#define BROWNBG "\033[43m"
#define BLUEBG "\033[44m"
#define MAGENTABG "\033[45m"
#define CYANBG "\033[46m"
#define WHITEBG "\033[47m"

//Fore-ground/font colors. (bold format) 
#define BLACKB "\033[30;1m"
#define REDB "\033[31;1m"
#define GREENB "\033[32;1m"
#define BROWNB "\033[33;1m"
#define BLUEB "\033[34;1m"
#define MAGENTAB "\033[35;1m"
#define CYANB "\033[36;1m"
#define WHITEB "\033[37;1m"

//Fore-ground/font colors. (underlined format) 
#define BLACKU "\033[30;4m"
#define REDU "\033[31;4m"
#define GREENU "\033[32;4m"
#define BROWNU "\033[33;4m"
#define BLUEU "\033[34;4m"
#define MAGENTAU "\033[35;4m"
#define CYANU "\033[36;4m"
#define WHITEU "\033[37;4m"

//Fore-ground/font colors. (bold & underlined format) 
#define BLACKBU "\033[30;4;1m"
#define REDBU "\033[31;4;1m"
#define GREENBU "\033[32;4;1m"
#define BROWNBU "\033[33;4;1m"
#define BLUEBU "\033[34;4;1m"
#define MAGENTABU "\033[35;4;1m"
#define CYANBU "\033[36;4;1m"
#define WHITEBU "\033[37;4;1m"


//color pallets/presets for c++
#define _CLRCP cout << RESETC;
#define _BCPPO1 cout << GREENB << MAGENTABG;
#define _BCPPI1 cout << BLUEB << MAGENTABG;
#define _BCPPP1 cout << RESETC << CYANB;
#define _BCPPW1 cout << RESETC << REDB;
#define _BCPPN1 cout << YELLOW << BLACKBG;


//color pallets/presets for c
#define _CLRC printf(RESETC);
#define _BCPO1 printf(GREENB); printf(MAGENTABG);
#define _BCPI1 printf(BLUEB); printf(MAGENTABG);
#define _BCPP1 printf(RESETC); printf(CYANB);
#define _BCPW1 printf(RESETC); printf(REDB);
#define _BCPN1 printf(YELLOW); printf(BLACKBG);

//
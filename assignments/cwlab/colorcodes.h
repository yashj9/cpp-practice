#define RESETC "\033[0m"

#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BROWN "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"


#define BLACKBG "\033[40m"
#define REDBG "\033[41m"
#define GREENBG "\033[42m"
#define BROWNBG "\033[43m"
#define BLUEBG "\033[44m"
#define MAGENTABG "\033[45m"
#define CYANBG "\033[46m"
#define WHITEBG "\033[47m"


#define BLACKB "\033[30;1m"
#define REDB "\033[31;1m"
#define GREENB "\033[32;1m"
#define BROWNB "\033[33;1m"
#define BLUEB "\033[34;1m"
#define MAGENTAB "\033[35;1m"
#define CYANB "\033[36;1m"
#define WHITEB "\033[37;1m"


#define BLACKU "\033[30;4m"
#define REDU "\033[31;4m"
#define GREENU "\033[32;4m"
#define BROWNU "\033[33;4m"
#define BLUEU "\033[34;4m"
#define MAGENTAU "\033[35;4m"
#define CYANU "\033[36;4m"
#define WHITEU "\033[37;4m"


#define BLACKBU "\033[30;1;4m"
#define REDBU "\033[31;1;4m"
#define GREENBU "\033[32;1;4m"
#define BROWNBU "\033[33;1;4m"
#define BLUEBU "\033[34;1;4m"
#define MAGENTABU "\033[35;1;4m"
#define CYANBU "\033[36;1;4m"
#define WHITEBU "\033[37;1;4m"


//templets(macros) for some common usage color combinations

#define _BCPI1 cout << GREENB << MAGENTABG;
#define _BCPO1 cout << BLUEB << MAGENTABG;
#define _CLRC cout << RESETC ;
#define _BCPOA1 cout << REDB << MAGENTABG;
#define _BCPS1 cout << RESETC << GREEN;
#define _BCPII1 cout << RESETC << BLUEBU ;

#include <stdio.h>

#define THREE_M_NAMING "3M Corpotation"
#define MAXWELL_NAMING "Maxell Corporation"
#define SONY_NAMING "Sony Corporation"
#define VERBATIM_NAMING "Verbatin Corporation"

#define MSG_USER_WELCOME "Ingrese el ID  de la empresa"
#define MSG_ERROR "ERROR!! al ingreso de dato"

typedef enum {
    CORPORATION_THREE_M,
    CORPORATION_MAXWELL,
    CORPORATION_SONY,
    CORPORATION_VERBATIM
} manufacturer_t;


typedef unsigned int uint;

int main(void){

    manufacturer_t manufacturer;
    int c, st;
    int option;
    char id[4]= {
        "3" 
        "M"
        "S"
        "V"
    };


    printf("%s\n", MSG_USER_WELCOME);
    printf("%4d)%4s\n",id[0] , THREE_M_NAMING);
    printf("%4c)%4s\n",id[1], MAXWELL_NAMING);
    printf("%4c)%4s\n",id[2], SONY_NAMING);
    printf("%4c)%4s\n",id[3], VERBATIM_NAMING);
    
    if (!(st=scanf("%c", id))){
        fprintf(stderr, "%s\n", MSG_ERROR);
        return 1;
    }
    if (st == EOF)
        return 1;
    while ((c=getchar()) !='\n');

    switch(id) {
        case id[0]:
        manufacturer = CORPORATION_THREE_M;
        break;
		case id[1]:
			manufacturer = CORPORATION_MAXWELL;
			break;
		case id[2]:
			manufacturer = CORPORATION_SONY;
			break;
		case id[3]:
			manufacturer = CORPORATION_VERBATIM;
			break;
    }

    switch(manufacturer) {
        case CORPORATION_THREE_M:
            printf("%s\n", THREE_M_NAMING);
            break;
		case CORPORATION_MAXWELL:
			printf("%s\n", MAXWELL_NAMING);
			break;
		case CORPORATION_SONY:
			printf("%s\n", SONY_NAMING);
			break;
    case CORPORATION_VERBATIM:
			printf("%s\n", VERBATIM_NAMING);
		  break;
	}

    return 0;
}

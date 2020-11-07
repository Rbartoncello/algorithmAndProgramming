#include <stdio.h>

#define THREE_M_CORPORATION_ID 1
#define MAXWELL_MANUFACTURER_ID 2
#define SONY_MANUFACTURER_ID 3
#define VERBATIM_MANUFACTURER_ID 4

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

    printf("%s\n", MSG_USER_WELCOME);
    printf("%4i)%4s\n",THREE_M_CORPORATION_ID, THREE_M_NAMING);
    printf("%4i)%4s\n",MAXWELL_MANUFACTURER_ID, MAXWELL_NAMING);
    printf("%4i)%4s\n",SONY_MANUFACTURER_ID, SONY_NAMING);
    printf("%4i)%4s\n",VERBATIM_MANUFACTURER_ID, VERBATIM_NAMING);
    
    if (!(st=scanf("%d", &option))){
        fprintf(stderr, "%s\n", MSG_ERROR);
        return 1;
    }
    if (st == EOF)
        return 1;
    while ((c=getchar()) !='\n');

    switch(option) {
        case THREE_M_CORPORATION_ID:
        manufacturer = CORPORATION_THREE_M;
        break;
		case MAXWELL_MANUFACTURER_ID:
			manufacturer = CORPORATION_MAXWELL;
			break;
		case SONY_MANUFACTURER_ID:
			manufacturer = CORPORATION_SONY;
			break;
		case VERBATIM_MANUFACTURER_ID:
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

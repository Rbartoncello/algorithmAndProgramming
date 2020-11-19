/*

    Si un puntero se compara con el literal constante 0 , se trata de una comprobación para ver si el puntero es un puntero nulo. 
    Este 0 se conoce entonces como una constante de puntero nulo. 
    Además, para ayudar a la legibilidad, se proporciona la macro NULL
    #define NULL 0
    Por lo tanto, estas son algunas formas válidas para buscar un puntero nulo:
    if (pointer == NULL) 
    NULL se define para comparar igual a un puntero nulo.

    '\0' se define como un carácter nulo, es decir, un carácter con todos los bits configurados en cero. 
    Esto no tiene nada que ver con los punteros.

    No confundir estos con punteros nulos. 
    El hecho de que la representación de bits sea la misma, y ​​esto permite algunos casos prácticos cruzados, en realidad no son la misma cosa.<



    NULL es una macro, definida como una constante de puntero nulo .

    ‘\ 0’ es una construcción utilizada para representar el carácter nulo , utilizado para terminar una cadena.

    
*/
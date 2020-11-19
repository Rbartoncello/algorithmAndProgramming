/*
    a) ip4 = ventas;

        ipa apunta a primer elemto de entas osea ventas[0][0]

    b) ip = (int *)ventas;

        ip es un puntero con un array de 3 enteros

    c) ipp = (int **) ventas;

        ipp es un puntero doble con un array de 3 enteros

    d) *(*(ip4 + i) + j)

        ip4 = ventas[0][4] por lo cual queda ventas[0][4] + ventas[i][4] = ventas[i][4] = n.
        luego n + j = como un valor entero no como un puntero o direcion.
        *(n + j) = *m, entonces m es un valor, es el vslor o el dato que se encuntra en la direcion m

    e) *(*(ventas + i ) + j)

        aca pasa lo mismo que en caso anterior ventas va a estar en el [o][o] se desplaza en i de asi me da el valor de esa direcion la cula sesuma con j y 
        una vez ahi me da el valorde de la direcion esa.

*/
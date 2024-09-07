#include /*1*/ <stdio.h> /*2*/
#include /*1*/ <stdlib.h> /*2*/
typedef /*2*/ struct /*2*/ node_s /*1*/
{ /*4*/
    int /*2*/ dato /*1*/; /*4*/
    struct /*2*/ node_s /*1*/ * /*3*/ siguiente /*1*/; /*4*/
} /*4*/ node_t /*1*/; /*4*/
node_t /*1*/ * /*3*/ crearNodo /*1*/ (/*4*/ int /*2*/ dato /*1*/) /*4*/
{ /*4*/
    node_t /*1*/ * /*3*/ nuevoNodo /*1*/ = /*3*/ (/*4*/ node_t /*1*/ * /*3*/) /*4*/ malloc
        /*1*/ (/*4*/ sizeof /*1*/ (/*4*/ node_t /*1*/) /*4*/) /*4*/; /*4*/
    if /*2*/ (/*4*/ nuevoNodo /*1*/ == /*3*/ NULL /*5*/) /*4*/
    { /*4*/
        printf /*1*/ (/*4*/ "..." /*5*/) /*4*/; /*4*/
        return /*2*/ NULL /*5*/; /*4*/
    } /*4*/
    nuevoNodo /*1*/->/*3*/ dato /*1*/ = /*3*/ dato /*1*/; /*4*/
    nuevoNodo /*1*/->/*3*/ siguiente /*1*/ = /*3*/ NULL /*5*/; /*4*/
    return /*2*/ nuevoNodo /*1*/; /*4*/
} /*4*/
void /*2*/ insertarNodo /*1*/ (/*4*/ node_t /*1*/ ** /*3*/ cabeza /*1*/, /*4*/ int /*2*/ dato
                               /*1*/) /*4*/
{ /*4*/
    node_t /*1*/ * /*3*/ nuevoNodo /*1*/ = /*3*/ crearNodo /*1*/ (/*4*/ dato /*1*/) /*4*/;
    /*4*/
    if /*2*/ (/*4*/ * /*3*/ cabeza /*1*/ == /*3*/ NULL /*5*/) /*4*/
    { /*4*/
        * /*3*/ cabeza /*1*/ = /*3*/ nuevoNodo /*1*/; /*4*/
    } /*4*/
    else /*2*/
    { /*4*/
        node_t /*1*/ * /*3*/ actual /*1*/ = /*3*/ * /*3*/ cabeza /*1*/; /*4*/
        while /*2*/ (/*4*/ actual /*1*/->/*3*/ siguiente /*1*/ != /*3*/ NULL /*5*/)
        /*4*/ { /*4*/
            actual /*1*/ = /*3*/ actual /*1*/->/*3*/ siguiente /*1*/; /*4*/
        } /*4*/
        actual /*1*/->/*3*/ siguiente /*1*/ = /*3*/ nuevoNodo /*1*/; /*4*/
    } /*4*/
} /*4*/
void /*2*/ imprimirLista /*1*/ (/*4*/ node_t /*1*/ * /*3*/ cabeza /*1*/) /*4*/
{ /*4*/
    node_t /*1*/ * /*3*/ actual /*1*/ = /*3*/ cabeza /*1*/; /*4*/
    printf /*1*/ (/*4*/ "HEAD -> " /*5*/) /*4*/; /*4*/
    while /*2*/ (/*4*/ actual /*1*/ != /*3*/ NULL /*5*/) /*4*/
    { /*4*/
        printf /*1*/ (/*4*/ "%d -> " /*5*/, /*4*/ actual /*1*/->/*3*/ dato /*1*/) /*4*/;
        /*4*/
        actual /*1*/ = /*3*/ actual /*1*/->/*3*/ siguiente /*1*/; /*4*/
    } /*4*/
    printf /*1*/ (/*4*/ "NULL\n" /*5*/) /*4*/; /*4*/
} /*4*/
int /*2*/ main /*1*/ (/*4*/) /*4*/
{ /*4*/
    node_t /*1*/ * /*3*/ cabeza /*1*/; /*4*/
    insertarNodo /*1*/ (/*4*/ &/*3*/ cabeza /*1*/, /*4*/ 1 /*5*/) /*4*/; /*4*/
    insertarNodo /*1*/ (/*4*/ &/*3*/ cabeza /*1*/, /*4*/ 3 /*5*/) /*4*/; /*4*/
    insertarNodo /*1*/ (/*4*/ &/*3*/ cabeza /*1*/, /*4*/ 5 /*5*/) /*4*/; /*4*/
    imprimirLista /*1*/ (/*4*/ cabeza /*1*/) /*4*/; /*4*/
    return /*2*/ 0 /*5*/; /*4*/
} /*4*/
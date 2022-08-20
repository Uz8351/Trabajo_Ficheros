**Descriptor_Archivo, es un programa realizado en ANSI-C, bajo LINUX, que trata de aclarar un poco el funcionamiento de la apertura de un pequeño fichero de texto, en el que se escribe una frase.**

**Se intenta buscar la dirección del descriptor de archivo, así como el alojamiento de cada letra de la frase en memoria. También se hace un volcado de la parte del alojamiento en memoria para intentar apreciar los desplazamientos de cada letra. Al final del mismo se hace una llamada mediante la función “system()”, para saber el PID (Identificador de proceso), del mismo. En esta llamada podremos comprobar coincidencias en las direcciones de memoria.**

**Al final, averiguamos con otra llamada mediante  “system()”, el inode, y la estructura de datos con la información del archivo.**
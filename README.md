Este proyecto consta de 3 partes.

1. Replica estas funciones sin utilizar otras funciones.

• isalpha
• isdigit
• isalnum 
• isascii 
• isprint 
• memset 
• memchr 
• memcmp 
• memcpy 
• memmove 
• strncmp 
• strlcpy 
• strlcat
• strchr 
• strrchr 
• strlen 
• strnstr 
• bzero
• toupper 
• tolower 
• atoi

• calloc (con malloc autorizado)
• strdup (con malloc autorizado)

2. Desarrolla funciones que cumplan estos requisitos.


• Nombre: ft_substr

-Prototipo: char *ft_substr(char const *s, unsigned int start, size_t len);

-Parametros:

s: La string desde la que crear la substring. start: El índice del caracter en ’s’ desde el que empezar la substring.
len: La longitud máxima de la substring.

-Valor devuelto: La substring resultante. NULL si falla la reserva de memoria.

-Funciones autorizadas: malloc

-Descripción: Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’.


• Nombre: ft_strjoin
-Prototipo: char *ft_strjoin(char const *s1, char const *s2);*
-Parametros:
s1: La primera string.
s2: La string a añadir a ’s1’.
-Valor devuelto: La nueva string. NULL si falla la reserva de memoria.
-Funciones autorizadas: malloc
-Descripción: Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación de ’s1’ y ’s2’.


• Nombre: ft_strtrim 
-Prototipo: char *ft_strtrim(char const *s1, char const *set);*
-Parametros: 
s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.
-Valor devuelto: La string recortada. NULL si falla la reserva de memoria.
-Funciones autorizadas: malloc
-Descripción: Elimina todos los caracteres de la string ’set’ desde el principio y desde el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’. La string resultante se devuelve con una reserva de malloc(3).


• Nombre:  ft_split
-Prototipo: char **ft_split(char const *s, char c);**
-Parametros: 
s: La string a separar.
c: El carácter delimitador.
-Valor devuelto: El array de nuevas strings resulatente de la separación. NULL si falla la reserva de memoria.
-Funciones autorizadas: malloc, free
-Descripción: Reserva (utilizando malloc(3)) un array de strings resultante de separar la string ’s’ en substrings utilizando el caracter ’c’ como delimitador. El array debe terminar con un puntero NULL.


• Nombre: ft_itoa
-Prototipo: char *ft_itoa(int n);*
-Parametros: n: el entero a convertir.
-Valor devuelto: La string que represente el número. NULL si falla la reserva de memoria.
-Funciones autorizadas: malloc
-Descripción: Utilizando malloc(3), genera una string que represente el valor entero recibido como argumento. Los números negativos tienen que gestionarse.


• Nombre: ft_strmapi
-Prototipo: char *ft_strmapi(char const *s, char (*f)(unsigned int, char));*
-Parametros: 
s: La string que iterar.
f: La función a aplicar sobre cada carácter.
-Valor devuelto: La string creada tras el correcto uso de ’f’ sobre cada carácter. NULL si falla la reserva de memoria.
-Funciones autorizadas: malloc
-Descripción: A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. Genera una nueva string con el resultado del uso sucesivo de ’f’.


• Nombre:  ft_striteri
-Prototipo: void ft_striteri(char *s, void (*f)(unsigned int, char*));*
-Parametros: 
s: La string que iterar.
f: La función a aplicar sobre cada carácter.
-Valor devuelto: Nada
-Funciones autorizadas: Ninguna
-Descripción: A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y la dirección del propio carácter, que podrá modificarse si es necesario.


• Nombre: ft_putchar_fd 
-Prototipo: void ft_putchar_fd(char c, int fd);
-Parametros: 
c: El carácter a enviar.
fd: El file descriptor sobre el que escribir.
-Valor devuelto: Nada
-Funciones autorizadas: write
-Descripción: Envía el carácter ’c’ al file descriptor especificado.


• Nombre: ft_putstr_fd 
-Prototipo: void ft_putstr_fd(char *s, int fd);*
-Parametros:
s: La string a enviar.
fd: El file descriptor sobre el que escribir.
-Valor devuelto: Nada
-Funciones autorizadas: write
-Descripción: Envía la string ’s’ al file descriptor especificado.


• Nombre: ft_putendl_fd 
-Prototipo: void ft_putendl_fd(char *s, int fd);*
-Parametros:
s: La string a enviar.
fd: El file descriptor sobre el que escribir.
-Valor devuelto: Nada
-Funciones autorizadas: write
-Descripción: Envía la string ’s’ al file descriptor especificado, seguido de un salto de linea.


• Nombre: ft_putnbr_fd 
-Prototipo: void ft_putnbr_fd(int n, int fd);
-Parametros:
n: El número a enviar.
fd: El file descriptor sobre el que escribir.
-Valor devuelto: Nada
-Funciones autorizadas: write
-Descripción: Envía el número 'n' al file descriptor especificado.


3. Desarrolla funciones de listas enlazadas que cumplan estos requisitos. (opcional)


• Nombre: ft_lstnew 
-Prototipo: t_list *ft_lstnew(void *content);
-Parametros:
content: el contenido con el que crear el nodo. 
-Valor devuelto: El nuevo nodo.
-Funciones autorizadas: malloc
-Descripción: Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ se inicializa con el contenido del parámetro ’content’. La variable ’next’, con NULL.


• Nombre: ft_lstadd_front
-Prototipo: void ft_lstadd_front(t_list **lst, t_list *new);**
-Parametros:
lst: la dirección de un puntero al primer nodo de una lista.
new: un puntero al nodo que añadir al principio de la lista.
-Valor devuelto: Nada
-Funciones autorizadas: Ninguna
-Descripción: Añade el nodo ’new’ al principio de la lista ’lst’.


• Nombre: ft_lstsize 
-Prototipo: int ft_lstsize(t_list *lst);*
-Parametros:
lst: el principio de la lista.
-Valor devuelto: La longitud de la lista.
-Funciones autorizadas: Ninguna
-Descripción: Cuenta el número de nodos de una lista.


• Nombre: ft_lstlast 
-Prototipo: t_list *ft_lstlast(t_list *lst);
-Parametros:
lst: el principio de la lista.
-Valor devuelto: Último nodo de la lista. 
-Funciones autorizadas: Ninguna
-Descripción: Devuelve el último nodo de la lista.


• Nombre: ft_lstadd_back
-Prototipo: void ft_lstadd_back(t_list **lst, t_list *new);**
-Parametros:
lst: el puntero al primer nodo de una lista.
new: el puntero a un nodo que añadir a la lista.
-Valor devuelto: Nada
-Funciones autorizadas: Ninguna
-Descripción: Añade el nodo ’new’ al final de la lista ’lst’.


• Nombre: ft_lstdelone 
-Prototipo: void ft_lstdelone(t_list *lst, void (*del)(void *));*
-Parametros:
lst: el nodo a liberar.
del: un puntero a la función utilizada para liberar el contenido del nodo.
-Valor devuelto: Nada
-Funciones autorizadas: free
-Descripción: Toma como parámetro un nodo ’lst’ y libera la memoria del contenido utilizando la función ’del’ dada como parámetro, además de liberar el nodo. La memoria de ’next’ no debe liberarse.


• Nombre: ft_lstclear
-Prototipo: void ft_lstclear(t_list **lst, void (*del)(void *));**
-Parametros:
lst: la dirección de un puntero a un nodo.
del: un puntero a función utilizado para eliminar el contenido de un nodo.
-Valor devuelto: Nada
-Funciones autorizadas: free
-Descripción: Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo, utilizando la función ’del’ y free(3). Al final, el puntero a la lista debe ser NULL.


• Nombre: ft_lstiter
-Prototipo: void ft_lstiter(t_list *lst, void (*f)(void *));*
-Parametros:
lst: un puntero al primer nodo.
f: un puntero a la función que utilizará cada nodo.
-Valor devuelto: Nada
-Funciones autorizadas: free
-Descripción: Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.


• Nombre: ft_lstmap
-Prototipo: t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));*
-Parametros:
lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada en la iteración de cada elemento de la lista. 
del: un puntero a función utilizado para eliminar el contenido de un nodo, si es necesario.
-Valor devuelto: La nueva lista. NULL si falla la reserva de memoria.
-Funciones autorizadas: malloc, free
-Descripción: Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo. Crea una lista resultante de la aplicación correcta y sucesiva de la función ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar el contenido de un nodo, si hace falta.



#include <stdio.h>
#include <stdlib.h>

void Inicio();
void Pregunta1();
void Pregunta2();
void Pregunta3();
void Pregunta4();
void Pregunta5();

int main()
{
int Preg[4];
int resultado;
int C1=0,C2=0,C3=0,C4=0;


    Inicio();
    Pregunta1();
    scanf("%i", &Preg[0]);
    Pregunta2();
    scanf("%i", &Preg[1]);
    Pregunta3();
    scanf("%i", &Preg[2]);
    Pregunta4();
    scanf("%i", &Preg[3]);
    Pregunta5();
    scanf("%i", &Preg[4]);


    for(int i=0; i<5; i++){
       switch(Preg[i]){
        case 1:
            C1++;
            break;
        case 2:
            C2++;
            break;
        case 3:
            C3++;
            break;
        case 4:
            C4++;
            break;
       }
    }

    if(C1 >= 3){printf("¡GRYFFINDOR!");}
    else if(C2 >= 3){printf("¡SLYTHERIN!");}
    else if(C3 >= 3){printf("¡HUFFLEPUFF!");}
    else if(C4 >= 3){printf("¡RAVENCLAW!");}
    else{printf("Vuelve a intentarlo");}

    return 0;
}

void Inicio(){
printf("**************************************\n");
printf("El sombrero Seleccionador\n");
printf("**************************************\n");
}

void Pregunta1(){
    printf("Primera Pregunta:\n");
    printf("Un mago oscuro amenaza a un compañero en el Bosque Prohibido. Tú estás cerca. ¿Cuál es tu primer instinto?\n");
    printf("1- Atacar sin pensarlo. ¡No se puede permitir esa injusticia!\n");
    printf("2- Buscar una ventaja. ¿Hay alguna criatura o planta cerca que pueda usar a mi favor?\n");
    printf("3- Lanzar un hechizo de ayuda a tu compañero o correr a buscar a un profesor.\n");
    printf("4- Evaluar la situación. ¿Cuál es el hechizo más eficaz para neutralizar la amenaza con el menor riesgo?\n");
}


void Pregunta2(){
    printf("Segunda Pregunta:\n");
    printf("¿Qué objeto mágico te resulta más intrigante?\n");
    printf("1- La Capa de Invisibilidad, para vivir aventuras sin ser visto.\n");
    printf("2- El Guardapelo de Slytherin, un objeto de poder e historia ancestral.\n");
    printf("3- El Deluminador, que puede devolver la luz a donde más se necesita.\n");
    printf("4- La Piedra Filosofal, la cumbre de la alquimia y el conocimiento.\n");
}

void Pregunta3(){
    printf("Tercera Pregunta:\n");
    printf("Es el Torneo de los Tres Magos. ¿Cuál sería tu principal motivación para participar?\n");
    printf("1- La gloria y el reconocimiento. ¡Demostrar que eres el mejor!\n");
    printf("2- Superar los retos más complejos y demostrar tu ingenio.\n");
    printf("3- Representar a tu escuela con honor y ganar el respeto de todos.\n");
    printf("4- Ganar el premio para ayudar a tu familia o a alguien que lo necesita.\n");
}

void Pregunta4(){
    printf("Cuarta Pregunta:\n");
    printf("¿Qué es lo que más temes?\n");
    printf("1- El fracaso y ser recordado como alguien ordinario.\n");
    printf("2- La ignorancia y no tener respuestas cuando más se necesitan.\n");
    printf("3- La deslealtad y que te traicionen las personas en las que confías.\n");
    printf("4- La opresión y que los más fuertes abusen de los débiles.\n");
}

void Pregunta5(){
    printf("Quinta Pregunta:\n");
    printf("¿Qué lugar en Hogwarts sería tu refugio favorito?\n");
    printf("1- La Sala Común de Slytherin, bajo el lago. Un lugar lleno de tradición y misterio.\n");
    printf("2- La Biblioteca. ¡Todos los secretos del mundo mágico están ahí dentro!\n");
    printf("3- La Sala Común de Hufflepuff, cerca de las cocinas. Acogedora y llena de amigos.\n");
    printf("4- La Torre de Gryffindor. Con vistas a todo el castillo, sintiendo la aventura en el aire.\n");
}

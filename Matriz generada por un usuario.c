#include <stdio.h>

int main() {
    int f, c;
    printf("Ingrese el numero de filas que desea en la matriz: ");
    scanf("%d", &f);
    
    printf("Ingrese el numero de columnas que desea en la matriz: ");
    scanf("%d", &c);
    
    int matriz[f][c];
     
     for (int i = 0; i < f; i++) { // se iguala las filas a 0 usando un ciclo repetitivo for 
        
        for (int j = 0; j < c; j++) { // se iguala las columnas a 0 usando un ciclo repetitivo for 
            
            matriz[i][j] = 0;
        }
    }
    printf("Matriz\n"); // Se muestra la matriz igualada todos sus terminos a 0
    
    for (int i = 0; i < f; i++) {
        
        for (int j = 0; j < c; j++) {
           
            printf("%d ", matriz[i][j]); // se muestra la matriz igualada a 0 para poder visualizar su dimension 
        }
        printf("\n");
    }
      for (int i = 0; i < f; i++) {
       
        for (int j = 0; j < c; j++) {
           
            if (i == j) { // hacemos un arreglo en donde pedimos que verifique si i es igual a j si es asi se le asigna el valor de 1 ya que sabemos que se encuentra en la diagonal principal
               
                matriz[i][j] = 1;
            
            } else {
                
                matriz[i][j] = 0;
            }
        }
    }
    
    printf("Matriz con unos en la diagonal:\n");
    
    for (int i = 0; i < f; i++) {
       
        for (int j = 0; j < c; j++) {
            
            printf("%d ", matriz[i][j]); // Imprimimos por pantalla la matriz final 
        }
        printf("\n");
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SENSORES 5
#define NUM_LEITURAS 10

int main() {
  // Matriz para armazenar as leituras de temperatura dos sensores
  float temperaturas[NUM_SENSORES][NUM_LEITURAS];

  // Simula a coleta de dados dos sensores
  for (int i = 0; i < NUM_SENSORES; i++) {
    for (int j = 0; j < NUM_LEITURAS; j++) {
      // Gera valores de temperatura aleatórios para simular leituras
      temperaturas[i][j] = 0 + (float)(rand() % 500) / 10.0;
    }
  }

  // Imprime as leituras de temperatura
  printf("Leituras de temperatura dos sensores:\n");
  for (int i = 0; i < NUM_SENSORES; i++) {
    printf("Sensor %d: ", i + 1);
    for (int j = 0; j < NUM_LEITURAS; j++) {
      printf("%.2f ", temperaturas[i][j]);
    }
    printf("\n");
  }

  // Calcula a média de temperatura de cada sensor
  float medias[NUM_SENSORES];
  for (int i = 0; i < NUM_SENSORES; i++) {
    float soma = 0.0;
    for (int j = 0; j < NUM_LEITURAS; j++) {
      soma += temperaturas[i][j];
    }
    medias[i] = soma / NUM_LEITURAS;
  }

  // Imprime as médias de temperatura
  printf("\nMédias de temperatura dos sensores:\n");
  for (int i = 0; i < NUM_SENSORES; i++) {
    printf("Sensor %d: %.2f\n", i + 1, medias[i]);
  }

  return 0;
}
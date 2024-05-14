#include <stdio.h>

// Função para calcular o fluxo de injeção de combustível
float calcularFluxoInjecao(float rotacao, float temperatura, float potencia) {
    // Aqui você pode implementar a lógica para calcular o fluxo de injeção
    // Esta é apenas uma implementação fictícia para ilustrar o conceito
    float fluxoInjecao = (rotacao * temperatura) / potencia;
    return fluxoInjecao;
}

int main() {
    float rotacao, temperatura, potencia;
    
    // Mockup de coleta, por sensores IoT, de valores da rotação, temperatura e potência
    printf("Insira a rotação do motor (RPM): ");
    scanf("%f", &rotacao);
    
    printf("Insira a temperatura do motor (C): ");
    scanf("%f", &temperatura);
    
    printf("Insira a potência do motor (W): ");
    scanf("%f", &potencia);
    
    // Chamar a função para calcular o fluxo de injeção
    float fluxoInjecao = calcularFluxoInjecao(rotacao, temperatura, potencia);
    
    // Exibir o resultado
    printf("O fluxo de injeção de combustível é: %.2f\n", fluxoInjecao);
    
    return 0;
}

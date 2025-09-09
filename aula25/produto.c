/* Crie uma estrutura compra que contenha nome com 10 posições 
e valor real. Um vetor de 10 posições que representará a lista de 
compras. Insira dez produtos com nome (nome0, nome1, ...) e 
valores (10.25, 11.50, 12.75, ...). Use um ponteiro para navegar no 
vetor e imprima a lista de compras com o valor total no final - os 
valores devem ter duas casas decimais e alinhados na 
apresentação.*/
typedef struct Product_ {
    char nome[11];
    float value;
} Product;

Product* create_product(char nome[], float value) {
    Product* product;
    if(nome){
        product = (Product*) malloc(sizeof(product));
        
    }
    
}
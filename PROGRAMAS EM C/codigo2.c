void main()
{
    // DECLARAR AS VARIAVEIS
    int salario;
    float imposto, impostoCalculado, resultadoImposto;

    // INFORMAR PARA O USUARIO DIGITAR SEU SALÁRIO
    printf("=========================================\n");
    printf("            Digite sua renda             \n");
    printf("             Exemplo: 2358               \n");
    printf("=========================================\n\n");
    printf("\nDigite aqui: ");
    scanf("%d", &salario);

    // PRINTAR O SALARIO DO SERUMANINHO
    printf("\n\n=========================================\n");
    printf("\nSalario: %d -", salario);

    // CRIAR A CONDIÇÃO PARA QUE ELE SAIBA O IMPOSTO DE RENDA DELE
    impostoCalculado = (salario);
    if (impostoCalculado<=0){
      printf(" Salario invalido\n" );
      return;
    }
    if (impostoCalculado>0 && impostoCalculado<=1903)
    {
      printf(" Isento de imposto\n");
    }
    else if (impostoCalculado>1903 && impostoCalculado<=2826)
    {
      resultadoImposto=(impostoCalculado*0.075)-142.80;
      printf(" Parcela sera de: R$ 142.80\n\n");
    }
    else if (impostoCalculado>2826 && impostoCalculado<=3751)
    {
      resultadoImposto=(impostoCalculado*0.15)-354.8;
      printf(" Parcela sera de: R$ 354.8\n\n");
    }
    else if (impostoCalculado>3751 && impostoCalculado<=4664)
    {
      resultadoImposto=(impostoCalculado*0.225)-636.13;
      printf(" Parcela sera de: R$ 636.13\n\n");
    }
    else if (impostoCalculado>4664)
    {
      resultadoImposto=(impostoCalculado*0.275)-869.36;
      printf(" Parcela sera de: R$ 869.36\n\n");
    }
    printf("O salario liquido sera de: %.2f\n\n", salario-resultadoImposto);
    printf("=========================================\n");
    system("PAUSE");
    return 0;
}

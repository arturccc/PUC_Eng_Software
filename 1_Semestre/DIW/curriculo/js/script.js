function funcao1(a,b){
    response = a + b
    console.log(response)
    return response
}

const valor1 = 1;
const valor2 = 2;
const valor3 = 3;
const valor4 = 4;

function funcao2(){
    funcao1(valor1,valor2) // aq vai retornar 1 + 2 = 3
}

function funcao3(){
    funcao1(valor3,valor4) // aq vai retornar 3 + 4 = 7
}

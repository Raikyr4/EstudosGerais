const pessoa = {
    saudacao: 'Bom dia!',
    falar() {
        console.log(this.saudacao)
    }
}

pessoa.falar()
const falar = pessoa.falar
falar() // conflito entre paradigmas: funcional e OO

const falarDePessoa = pessoa.falar.bind(pessoa) //bind serve para garantir que uma função dentro de que está dentro de um componente sempre deja disparada independente de como for chamada , sendo por uam variável ou sla
falarDePessoa()
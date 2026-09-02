use std::io;

fn calcular_pontuacao(prova1: f64, prova2: f64, redacao: f64) -> f64{
    let NPT = (prova1 + prova2) / 2.0;
    let PF = (NPT * 0.6) + (redacao * 0.4);

    PF
}

fn main(){
    let mut entrada = String::new();
    println!("Digite o digito final desejado 0 a 9:");
    io::stdin().read_line(&mut entrada).expect("Erro ao ler");
    let numero: f64 = entrada.trim().parse().unwrap_or(0.0);
    let mut entrada1 = String::new();
    println!("Digite o limite inferior:");
    io::stdin().read_line(&mut entrada1).expect("Erro ao ler");
    let numero1: f64 = entrada1.trim().parse().unwrap_or(0.0);
    let mut entrada2 = String::new();
    println!("Digite o limite superior:");
    io::stdin().read_line(&mut entrada2).expect("Erro ao ler");
    let numero2: f64 = entrada2.trim().parse().unwrap_or(0.0);

    let result = calcular_pontuacao(numero, numero1, numero2);

    
    if result >= 60.0 {
        println!("Parabens! Candidato aprovado no processo seletivo");
        println!("Pontuacao final: {}", result);
    }else {
        println!("Infelizmente o candidato nao atingiu a pontuacao minima de aprovacao.");
        println!("Pontuacao final: {}", result);
    }
}

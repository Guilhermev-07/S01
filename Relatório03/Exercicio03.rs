use std::io;

fn imprimir_terminados_em (digito: i32,limite_inferior: i32, limite_superior: i32){
    println!("--- Numeros no intervalo terminados em 7 ---");
    for c in limite_inferior..=limite_superior {
        if (c % 10) == digito {
            println!("{}", c)
        }
    }
}

fn main(){
    let mut entrada = String::new();
    println!("Digite o digito final desejado 0 a 9:");
    io::stdin().read_line(&mut entrada).expect("Erro ao ler");
    let numero: i32 = entrada.trim().parse().unwrap_or(0);
    let mut entrada1 = String::new();
    println!("Digite o limite inferior:");
    io::stdin().read_line(&mut entrada1).expect("Erro ao ler");
    let numero1: i32 = entrada1.trim().parse().unwrap_or(0);
    let mut entrada2 = String::new();
    println!("Digite o limite superior:");
    io::stdin().read_line(&mut entrada2).expect("Erro ao ler");
    let numero2: i32 = entrada2.trim().parse().unwrap_or(0);

    imprimir_terminados_em(numero, numero1, numero2);
}

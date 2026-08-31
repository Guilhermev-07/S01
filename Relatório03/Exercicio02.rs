use std::io;

fn acertou_o_alvo(palpite: i32, numero_secreto: i32) -> bool{
    let resultado = (palpite - numero_secreto).abs();

    resultado <= 5
}

fn main(){
    let numero_secreto: i32 = 13;

loop{
        let mut entrada = String::new();
        println!("Digite um numero:");
        io::stdin().read_line(&mut entrada).expect("Erro ao ler");
        let numero: i32 = entrada.trim().parse().unwrap_or(0);

        if acertou_o_alvo(numero, numero_secreto){
            let distancia = (numero - numero_secreto).abs();
            println!("Voce acertou! Ficou a apenas {} unidades do numero secreto!", distancia);
            break;
        }else{
            println!("Voce passou longe! Tente novamente.");
        }
    }
}

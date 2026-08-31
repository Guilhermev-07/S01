use std::io;

fn validar_placa(placa:&str) -> bool{
    let mut contadorUP = 0;
    let mut contadorDG = 0;

    if placa.len() >= 7 {   
        for c in placa.chars(){
            if c.is_ascii_uppercase(){
                contadorUP = contadorUP + 1;
            }
            if c.is_digit(10) {
                contadorDG = contadorDG + 1; 
            }
        }
        if contadorUP >= 4 && contadorDG >= 2{
            return true;
        }
    };
    false
}

fn main(){
    loop{
        let mut entrada = String::new();
        println!("Digite uma placa:");
        io::stdin().read_line(&mut entrada).expect("Erro ao ler");
        let entrada = entrada.trim();
        if validar_placa(&entrada) {
            println!("Placa cadastrada no sistema!");
            break;
        }else{
            println!("Placa invalida. Tente novamente!");
        }
    }
}

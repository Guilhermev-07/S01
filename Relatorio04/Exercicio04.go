package main
import "fmt"

 func validarIngresso(setor string, codigo int) bool {
	if setor == "VIP" && codigo == 2026 {
		return true
	} else {
		return false
	}
}

func main() {
	var setor string
	var codigo int

	for {
		fmt.Print("Digite o setor do ingresso: ")
		fmt.Scanln(&setor)
		fmt.Print("\nDigite o código do ingresso: ")
		fmt.Scanln(&codigo)

		if validarIngresso(setor, codigo) {
			fmt.Println("\nAcesso liberado a area VIP!")
			break
		} else {
			fmt.Println("\nIngresso ou setor invalido. Tente novamente.")
		}
	}
}

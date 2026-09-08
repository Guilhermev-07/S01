package main
import "fmt"

func main() {
	var a, b, c int
	var categoria string

	fmt.Print("Digite as vendas do 1º trimestre: ")
	fmt.Scanln(&a)
	fmt.Print("\nDigite as vendas do 2º trimestre: ")
	fmt.Scanln(&b)
	fmt.Print("\nDigite as vendas do 3º trimestre: ")
	fmt.Scanln(&c)

	soma := a + b + c

	if soma < 100 {
		fmt.Println("Meta mínima anual não atingida!")
	} else {
		switch {
			case soma >= 250:
				categoria = "Categoria Top Seller"
			case soma >= 180 && soma < 250:
				categoria = "Categoria Sênior"
			default:
				categoria = "Categoria Pleno"
		}
	}

	fmt.Printf("\nTotal de vendas: %d unidades\nClassificação: %s", soma, categoria)

}

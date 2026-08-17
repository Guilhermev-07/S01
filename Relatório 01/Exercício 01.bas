Dim peso As Single
Dim agua As Single
Dim result As Single

Input peso
Input agua
result = peso * 35
Print "Peso: "; peso; "kg"
Print "Liquido ingerido: "; agua; "ml"
Print "Meta necessaria: "; result

If agua >= result then
    Print "Meta atingida"
Else
    Print "Meta nao atingida"
End if
Sleep
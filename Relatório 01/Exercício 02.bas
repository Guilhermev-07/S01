Dim PINC As Integer
Dim PIN As Integer

PINC = 4321
Print "Digite seu PIN: "
input PIN
Print PIN
while PIN <> PINC
    Print "PIN invalido. Tente novamente"
    input PIN
Wend

Print "Transacao autorizada!"
Sleep
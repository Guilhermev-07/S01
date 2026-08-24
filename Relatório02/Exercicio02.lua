function contarOcorrencias(tabela, alvo)
    local contagem = 0
    for i = 1, #tabela do
        if alvo == tabela[i] then
            contagem = contagem + 1
        end
    end
    return contagem
end


local N = tonumber(io.read())
local tabela = {}

for i = 1, N do
    local Num = tonumber(io.read())
    table.insert(tabela, Num)
end

local alvo = tonumber(io.read())

local retorno = contarOcorrencias(tabela, alvo)

print("O Numero " .. alvo .. " Aparece " .. retorno .. " vezes.")

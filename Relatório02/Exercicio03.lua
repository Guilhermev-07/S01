function filtrarMaiores(tabela, limite)
    local novaTabela = {}
    for i = 1, #tabela do
        if tabela[i] > limite then
            table.insert(novaTabela,tabela[i])
        end
    end
    return novaTabela
end

local N = tonumber(io.read())
local tabela = {}

for i = 1, N do
    local Num = tonumber(io.read())
    table.insert(tabela, Num)
end

local limite = tonumber(io.read())
local novaTabela = filtrarMaiores(tabela, limite)

print("--- Elementos maiores que " .. limite .. " ---")
for i = 1, #novaTabela do
   print(novaTabela[i])
end

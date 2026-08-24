function calcularMedia(a, b)
    local media = (a + b) / 2
    return media
end

function encontrarMaior(a, b)
    if a > b then
        return a
    else
        return b
    end
end

function calcularDiferencaAbsoluta(a, b)
    if a > b then
        return a - b
    else
        return b - a
    end
end

local A = tonumber(io.read())
local B = tonumber(io.read())

local calculo = (io.read())

if calculo == "media" then
    print(calcularMedia(A, B))
elseif calculo == "maior" then
    print(encontrarMaior(A, B))
elseif calculo == "diferenca" then
    print(calcularDiferencaAbsoluta(A, B))
else
    print("Operação inválida!")
end

function gerarTabelaPotencias(inicio, fim, base)
    for i = inicio, fim do
        print(base .. " elevado a " .. i .. " = " .. base ^ i)
    end
end

local M = tonumber(io.read())
local N = tonumber(io.read())
local B = tonumber(io.read())

gerarTabelaPotencias(M, N, B)

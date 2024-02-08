
--COMO PODEMOS SELECIONAR UMA CERTA QUANTIDADE DE ELEMENTOS EM UMA CONSULTA :

--COMANDO TOP
SELECT TOP 5 Nome, Idade FROM TabelaExemplo; 



--PRA CONCATENAR STRINGS USAMOS O +

SELECT Nome + ' ' + Sobrenome AS NomeCompleto FROM TabelaExemplo;



-- PARA GERAR A HORA DE AGORA USAMOS A FUNÇÃO A BAIXO:

SELECT GETDATE() AS Agora;



--SINTAXE DE TRATAMENTO DE ERRO :


BEGIN TRY
    -- Código SQL aqui
END TRY
BEGIN CATCH
    -- Manipulação de erro aqui
END CATCH



--USNADO FLUXO CONDICIONAL 

SELECT
    Nome,
    CASE 
        WHEN Idade >= 18 THEN 'Maior de Idade'
        ELSE 'Menor de Idade'
    END AS CategoriaIdade
FROM TabelaPessoas;



--COMO PODEMOS RENOMEAR UMA COLUNA 

EXEC sp_rename 'TabelaExemplo.NomeAntiga', 'NomeNova', 'COLUMN';




-- COMO FAZER AS CONSULTAS COM JOINS :

SELECT colunas
FROM tabela1
INNER JOIN tabela2 ON tabela1.coluna = tabela2.coluna;-- Retorna apenas as linhas que têm correspondência nas duas tabelas.
LEFT JOIN tabela2 ON tabela1.coluna = tabela2.coluna;
RIGHT JOIN tabela2 ON tabela1.coluna = tabela2.coluna;
FULL JOIN tabela2 ON tabela1.coluna = tabela2.coluna; -- Retorna todas as linhas quando há uma correspondência em uma das tabelas
CROSS JOIN tabela2; --FAZ O PRODUTO CARTESIANO DE AMBAS AS TABELAS





-- FAZENDO SELECTS COM > , < E <>

--PODEMOS USAR O MAIRO QUE E MENOS QUE 
SELECT colunas
FROM NomeDaTabela
WHERE Coluna > Valor OR COLUNA >= VALOR; -- SE FOR UMA CAMPO TEXTO ELE ORDENA ATRAVES DA TABELA ASCII


--PODEMOS USAR O DIFERENTE

SELECT colunas
FROM NomeDaTabela
WHERE Coluna <> Valor;  -- O SIMBOLO DE DIFERENTE É ESSE <>

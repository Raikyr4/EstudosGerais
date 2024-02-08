O Sql Server funciona separado bancos de dados que podem se relacioinar entre si
Alem disso, esses banco possuem os Squemas parecido com o Postgres. Onde cada esquema possui sua organização.


Os comandos principais são iguais ao do que a gente ja conhece.
Todas as regras de primary e forengi key se aplicam ao SQL server. 

alura-typer\public\css\Tipos.md
##### TIPOS DO SQLSERVER: ######

# Tipo de dados numéricos:

    => int: Números inteiros.
    => smallint: Inteiros pequenos.
    => tinyint: Inteiros muito pequenos.a
    => bigint: Inteiros grandes.
    => decimal ou numeric: Números decimais com precisão fixa na qual devemos definir previamente.
    => float: Números de ponto flutuante de precisão simples.
    => real: Números de ponto flutuante de precisão simples (menos precisos que o float).

# Tipo de dados de caracteres:

    => char(n): Cadeias de caracteres de comprimento fixo.
    => varchar(n): Cadeias de caracteres de comprimento variável.
    => text: Cadeias de caracteres de comprimento variável (para grandes blocos de texto).

# Tipo de dados de data e hora:

    => datetime: Data e hora.
    => smalldatetime: Data e hora com menor precisão.
    => date: Apenas data.
    => time: Apenas hora.
    => datetime2: Data e hora com maior precisão.

# Tipo de dados booleanos:

    => bit: Armazena valores 0 ou 1, representando verdadeiro ou falso.

# Tipo de dados binários:

    => binary(n): Dados binários de comprimento fixo.
    => varbinary(n): Dados binários de comprimento variável.
    => image: Dados binários de comprimento variável (para grandes blocos de dados binários).

# Tipo de dados especiais:

    => uniqueidentifier: Identificador global exclusivo (GUID).
    => sql_variant: Pode armazenar valores de vários tipos de dados.
    => xml: Armazena dados XML.

# Tipo de dados especiais para manipulação de texto:

    => nvarchar(n): Cadeias de caracteres Unicode de comprimento variável.
    => nchar(n): Cadeias de caracteres Unicode de comprimento fixo.

# Tipo de dados geoespaciais:

    => geometry: Armazena dados geométricos.
    => geography: Armazena dados geográficos.



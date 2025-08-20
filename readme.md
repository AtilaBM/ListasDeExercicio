# Estruturas de Dados e Algoritmos em C
Este repositório foi criado para armazenar e organizar as listas de exercícios da matéria de **Estruturas de Dados e Algoritmos**, desenvolvidas em linguagem **C**.
O objetivo é manter um registro dos exercícios resolvidos, facilitando a consulta e o estudo.

---

### Conteúdo
Cada lista de exercícios está em seu próprio diretório, com os arquivos `.c` correspondentes às soluções. A organização segue a numeração das listas de exercícios propostas na disciplina.

Exemplo:
* **Lista1/**
    * `ex1.c`
    * `ex2.c`
    * ...
* **Lista2/**
    * `ex1.c`
    * ...

---

### Como compilar e executar
Para compilar e executar os programas, você pode usar um compilador C como o **GCC**. Para a maioria dos exercícios, o comando básico é:

```bash
gcc nome_do_arquivo.c -o nome_do_executavel
./nome_do_executavel
```

**Nota importante:** Para exercícios que utilizam a biblioteca `math.h`, é necessário adicionar a flag `-lm` para linkar com a biblioteca matemática:

```bash
gcc nome_do_arquivo.c -lm -o nome_do_executavel
./nome_do_executavel
```

A flag `-lm` é necessária para funções como:
- `sqrt()`, `pow()`, `sin()`, `cos()`, `tan()`
- `floor()`, `ceil()`, `round()`  
- `log()`, `exp()`, `fabs()`

---

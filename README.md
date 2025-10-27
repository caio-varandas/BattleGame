# ⚔️ BattleGame_CPP

## 🇧🇷 Português

### 🎮 Sobre o projeto
Durante meus estudos de **Programação Orientada a Objetos (POO)** em **Java**, fiquei curioso para entender como esses mesmos conceitos se aplicam em **C++**, linguagem que já utilizo em **maratonas de programação**.  

Para explorar isso, desenvolvi um **mini-jogo de batalha por turnos no terminal**, onde o jogador escolhe seus ataques e o “monstro” reage aleatoriamente.  
O projeto aplica conceitos fundamentais de **herança**, **polimorfismo**, **métodos virtuais** e **organização modular** em múltiplos arquivos (`.h` e `.cpp`).

### ✨ Funcionalidades
- Sistema de turnos entre jogador e inimigo  
- Diferentes ataques com danos variados  
- Herança entre classes `Personagem`, `Jogador` e `Boss`  
- Exemplo prático de POO em C++  

### 🧱 Estrutura do projeto
```

JOGO/
├─ bin/        → executável final (.exe)
├─ include/    → arquivos de cabeçalho (.h)
├─ obj/        → (opcional) objetos compilados (.o)
├─ src/        → arquivos-fonte (.cpp)
└─ README.md

```

### ⚙️ Como compilar
No terminal (na raiz do projeto), digite:
```bash
g++ src/*.cpp -I include -o bin/Jogo
```

### ▶️ Como executar

**No Windows:**

```bash
bin\Jogo.exe
```

**No Linux/macOS:**

```bash
./bin/Jogo
```

---

## 🇺🇸 English

### 🎮 About the project

While studying **Object-Oriented Programming (OOP)** in **Java**, I became curious about how the same principles apply in **C++**, a language I often use for **competitive programming**.

To explore that, I built a **turn-based battle mini-game** in the terminal, where the player chooses attacks and the “monster” reacts randomly.
This project demonstrates **inheritance**, **polymorphism**, **virtual methods**, and **modular code organization** using multiple files (`.h` and `.cpp`).

### ✨ Features

* Turn-based combat system
* Different attacks with random damage
* Inheritance between `Character`, `Player`, and `Boss` classes
* Practical example of OOP in C++

### 🧱 Project structure

```
JOGO/
├─ bin/        → final executable (.exe)
├─ include/    → header files (.h)
├─ obj/        → (optional) compiled objects (.o)
├─ src/        → source files (.cpp)
└─ README.md

```

### ⚙️ How to compile

In the terminal (from the project root), run:

```bash
g++ src/*.cpp -I include -o bin/Jogo
```

### ▶️ How to run

**On Windows:**

```bash
bin\Jogo.exe
```

**On Linux/macOS:**

```bash
./bin/Jogo
```

---

💡 *This project was a fun way to connect my competitive programming experience with real object-oriented design in C++!*

---
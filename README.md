# Scrabble

A simple two-player word game where each player enters a word, and the program scores them using official Scrabble™ letter values. The player with the higher score wins.

## Overview

- Assigns points to each letter (A–Z) using Scrabble scoring rules  
- Calculates the total score for each player's word  
- Declares the winner or a tie  

## Usage

### Windows (PowerShell)

```powershell
gcc scrabble.c -o scrabble
./scrabble.exe
```

### macOS/Linux (bash)

\`\`\`bash
gcc scrabble.c -o scrabble
./scrabble
\`\`\`

## Example Session

\`\`\`
Player 1: Hello
Player 2: World
Player 2 wins!
\`\`\`

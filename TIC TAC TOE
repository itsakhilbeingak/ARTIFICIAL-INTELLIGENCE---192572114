# ------------------------------------------
# TIC TAC TOE - Human vs Computer
# Computer chooses the first available cell
# ------------------------------------------

# Create the board
board = [" "] * 9


# Function to display the board
def display_board():
    print("\n")
    print(f" {board[0]} | {board[1]} | {board[2]} ")
    print("---+---+---")
    print(f" {board[3]} | {board[4]} | {board[5]} ")
    print("---+---+---")
    print(f" {board[6]} | {board[7]} | {board[8]} ")
    print("\n")


# Function to check winner
def check_winner(player):

    winning_positions = [
        [0,1,2],
        [3,4,5],
        [6,7,8],
        [0,3,6],
        [1,4,7],
        [2,5,8],
        [0,4,8],
        [2,4,6]
    ]

    for combo in winning_positions:
        if board[combo[0]] == board[combo[1]] == board[combo[2]] == player:
            return True

    return False


# Function to check draw
def check_draw():
    return " " not in board


# Computer Move
def computer_move():

    for i in range(9):
        if board[i] == " ":
            board[i] = "O"
            print("Computer selected position", i + 1)
            return


# -------------------------
# Main Program
# -------------------------

print("===================================")
print("        TIC TAC TOE GAME")
print("===================================")
print("Player  : X")
print("Computer: O")

while True:

    display_board()

    try:
        position = int(input("Enter position (1-9): "))

        if position < 1 or position > 9:
            print("Please enter a number between 1 and 9.")
            continue

        if board[position-1] != " ":
            print("Position already occupied.")
            continue

        # Player Move
        board[position-1] = "X"

        # Check Player Win
        if check_winner("X"):
            display_board()
            print("🎉 Congratulations! You Win.")
            break

        # Check Draw
        if check_draw():
            display_board()
            print("Game Draw!")
            break

        # Computer Move
        computer_move()

        # Check Computer Win
        if check_winner("O"):
            display_board()
            print("Computer Wins!")
            break

        # Check Draw
        if check_draw():
            display_board()
            print("Game Draw!")
            break

    except ValueError:
        print("Please enter a valid number.")

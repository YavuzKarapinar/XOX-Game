package xoxgame;

import java.util.Scanner;

public class XOXGame {

    private final String[] board = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
    private final Scanner kb = new Scanner(System.in);

    public void runGame() {

        Player firstPlayer = new Player("Yavuz", 'X');
        Player secondPlayer = new Player("Tahir", 'O');

        while (!isBoardFull()) {
            playerMove(firstPlayer);
            if(winCheck(firstPlayer)) {
                System.out.println(firstPlayer.name + " adlı oyuncu kazandı!");
                break;
            }

            playerMove(secondPlayer);
            if(winCheck(secondPlayer)) {
                System.out.println(secondPlayer.name + " adlı oyuncu kazandı!");
                break;
            }
        }
    }

    private void playerMove(Player player) {
        showBoard();
        System.out.print("Choose number: ");
        int position = kb.nextInt() - 1;

        if(isArrayBounded(position) && !isSymbolAdded(position))
            board[position] = "" + player.playerSymbol;
    }

    private boolean winCheck(Player player) {

        for(int i = 0; i < board.length; i += 3) {
            if(horizontalWinCheck(player, i))
                return true;
            if(verticalWinCheck(player, i))
                return true;
        }

        return crossWinCheck(player);
    }

    private boolean isSymbolAdded(int position) {
        return !Character.isDigit(board[position].charAt(0));
    }

    private boolean isBoardFull() {
        for(String element : board)
            if(Character.isDigit(element.charAt(0)))
                return false;

        return true;
    }

    private boolean horizontalWinCheck(Player player, int i) {
        return board[i].equals("" + player.playerSymbol) && board[i].equals(board[i + 1]) && board[i + 1].equals(board[i + 2]);
    }

    private boolean verticalWinCheck(Player player, int i) {
        return i < 3 && board[i].equals("" + player.playerSymbol) && board[i].equals(board[i + 3]) && board[i + 3].equals(board[i + 6]);
    }

    private boolean crossWinCheck(Player player) {
        if(board[0].equals("" + player.playerSymbol) && board[0].equals(board[4]) && board[4].equals(board[8]))
            return true;

        return board[2].equals("" + player.playerSymbol) && board[2].equals(board[4]) && board[4].equals(board[6]);
    }

    private boolean isArrayBounded(int position) {
        return position >= 0 && position <= board.length - 1;
    }

    private void showBoard() {
        for(int i = 0; i < board.length; i++) {
            System.out.print(board[i] + "\t");

            if((i + 1) % 3 == 0)
                System.out.println();
        }
    }
}

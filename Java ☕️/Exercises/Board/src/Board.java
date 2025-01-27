public class Board {
    private int width;
    private int height;
    private boolean[][] current; 

    public Board(int width, int height, int howManyAlive) {
        this.width = width;
        this.height = height;

        this.current = new boolean[width][height];

    }



}

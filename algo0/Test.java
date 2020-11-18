class Test{
    public static void main(String[] args) {
        int array[] = {10,20};

        swap(array);
        System.out.println("a:" + array[0] + " b:" + array[1]);
    }

    static void swap(int[] array) {
        int temp = array[0];
        array[0] = array[1];
        array[1] = temp;
    }
}
class Bubblesort
{
    void bubbleSort(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if (arr[j+1] < arr[j])
                {
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
            }
        }
    }

    void printArr(int arr[]) //Simple loop to iterate through the array and print its elements
    {
        for (int i = 0; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String[] args)
    {
        Bubblesort sort = new Bubblesort();
        
        //Test cases
        int test1[] = {23, 78, 43, 14, 90, 82};
        int test2[] = {65, 32, 17, 75, 55, 4};

        sort.bubbleSort(test1);
        sort.bubbleSort(test2);

        System.out.println("Test 1: ");
        sort.printArr(test1);
        System.out.println("Test 2: ");
        sort.printArr(test2);
    }
}

import java.util.Random;

public class assign {
    
    // Selection Sort Algorithm
    public static void selectionSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                int temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }
    
    // Quick Sort Algorithm
    public static void quickSort(int[] arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    
    private static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        return i + 1;
    }

    public static void main(String[] args) {
        // Test the algorithms with random arrays and record running times
        int[] arraySizes = {10,100,500,1000, 2000, 3000, 4000, 5000,6000,7000,8000,10000}; // You can extend this as needed
        long selectionSortTime, quickSortTime;

        System.out.println("Array Size | Selection Sort Time | Quick Sort Time");
        System.out.println("-----------------------------------------------");

        for (int size : arraySizes) {
            int[] arr1 = generateRandomArray(size);
            int[] arr2 = arr1.clone(); // Make a copy for quick sort

            long startTime = System.nanoTime();
            selectionSort(arr1);
            long endTime = System.nanoTime();
            selectionSortTime = endTime - startTime;

            startTime = System.nanoTime();
            quickSort(arr2, 0, arr2.length - 1);
            endTime = System.nanoTime();
            quickSortTime = endTime - startTime;

            System.out.printf("%9d | %18d | %15d\n", size, selectionSortTime, quickSortTime);
        }
    }

    // Function to generate random arrays
    public static int[] generateRandomArray(int size) {
        int[] arr = new int[size];
        Random rand = new Random();
        for (int i = 0; i < size; i++) {
            arr[i] = rand.nextInt();
        }
        return arr;
    }
}

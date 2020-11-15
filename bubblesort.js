function swap(arr, x, y) //Takes the target array and the indexes of the desired numbers to swap
{
    var tmp, first = x, second = y, xVal = arr[x], yVal = arr[y];
    tmp = second;
    second = first;
    first = tmp;
    arr.splice(x, 1, yVal);
    arr.splice(y, 1, xVal);
}

function bubblesort(arr)
{
    for (let i = 0; i < arr.length; i++)
    {
        for (let j = 0; j < arr.length; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
            }
        }
    }
}

//Test cases
var test1 = [23, 78, 43, 14, 90, 82];
var test2 = [65, 32, 17, 75, 55, 4];
bubblesort(test1);
bubblesort(test2);
console.log("Test 1 sort: " + test1);
console.log("Test 2 sort: " + test2);
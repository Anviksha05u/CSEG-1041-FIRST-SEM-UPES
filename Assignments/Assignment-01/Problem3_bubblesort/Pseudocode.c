START Problem3_bubblesort
INPUT N
INPUT array elements into arr[0...N-1]
INITIALISE a temporary variable temp=0
FOR i=0 TO N-2
  FOR j=0 TO N-i-2
    IF arr[j]>arr[j+1] THEN
       temp = arr[j]
       arr[j] = arr[j+1]
       arr[j+1] = temp
    END IF
  END FOR
END FOR
PRINT sorted array
STOP Problem3_bubblesort

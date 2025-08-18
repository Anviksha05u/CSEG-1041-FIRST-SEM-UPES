START Problem2_primenumber
INPUT N
IF N<=1 
   PRINT "NOT PRIME"
END IF
FOR i=2 TO N/2
  IF n%i=0 
     PRINT "NOT PRIME"
  END IF
END FOR
PRINT "PRIME"
STOP Problem2_primenumber

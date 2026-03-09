// Count Digit
function CountDigit(no)
{
  let iCount =0;
  
   while(no != 0)
   {
     
     iCount++;
     no =Math.floor (no / 10); 
   }
   return iCount;
}
function main()
{
  let iValue = 721;
  let iRet = 0;

  iRet=CountDigit(iValue);

  console.log(`${iValue} contains ${iRet} digits` );
}

main();
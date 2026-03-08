function Factorial(no)
{
   let iFact= 1;
   while(no != 0)
   {
    iFact = iFact * no;
    no--;
   }
   return iFact;
}
function main()
{
  let iValue = 10;
  let iRet=0;
  
  iRet=Factorial(iValue);

  console.log("Factorial is :" ,iRet);
}

main();
function DisplayFactors(no)
{
   let iCnt =0;
   for(iCnt=1; iCnt<=(no/2); iCnt++)
   {
      if(iCnt % no == 0)
      {
        console.log(iCnt);
      }
   }
}
function main()
{
  let iValue = 10;
  let iRet=0;
  
  iRet=DisplayFactors(iValue);

  console.log("Factorial of $(iValue) is $(iRet)");
}

main();
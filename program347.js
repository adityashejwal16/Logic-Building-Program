function CheckPerfect(no)
{
   let iCnt =0;
   let isum=0;
   for(iCnt=1; iCnt<=(no/2); iCnt++)
   {
      if(iCnt % no == 0)
      {
        iSum = iSum + iCnt;
      }
   }
   if(iSum ==no)
   {
    return true;
   }
   {
    return false;
   }
}
function main()
{
  let iValue = 10;
  let bRet = false;
  
  bRet=CheckPerfect(iValue);
   
  if(bRet == true)
  {
    console.log(``)
  }
}

main();
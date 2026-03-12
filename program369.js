function Maximum(brr)
{ 
  let iCnt = 0;
  let iMin=brr[0];
  for(iCnt=0; iCnt < brr.length; iCnt++ )
  {
    if(brr[iCnt]>iMax)
    {
      iMax =brr[iCnt];
    }

  }
  
}
function main()
{
  const Arr = [10,20,30,40,50];
  let iRet =0;

  iRet=Maximum(Arr);
}
main();
function Display(brr)
{
  let iCnt = 0;
  for(iCnt=0; iCnt < brr.length; iCnt++ )
  {
    console.log(brr[iCnt]);
  }
}
function main()
{
  const Arr = [10,20,30,40,50];

  Display(Arr);
}
main();
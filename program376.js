
class Arithmatic
{ 
  constructor(A,B)
  {
    this.No1 = A;
   this.No2 = B;
  }
   Addition()
   {
    return this.No1 + this.No2;
   }
   Subtraction()
   {
    return this.No1 - this.No2;
   }
  
}


function main()
{
   let obj = new Arithmatic(11,10);
   let iRet=0;

   iRet = obj.Addition();
   console.log("Addition is :" , iRet);
   
   iRet = obj.Subtraction();
   console.log("Subtraction is :" , iRet);
}
main();
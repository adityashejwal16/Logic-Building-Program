class Demo
{
  constructor(No1,No2)
  {
    this.No1 = No1;
    this.No2 = No2;
  
    console.log("inside contructor");
  }
}
function main()
{
   let obj = new Demo(10,11);

   console.log(obj.No1);
   console.log(obj.No2);

}
main();
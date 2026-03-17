// String Into Array Convertion
function main()
{
  let str = "Hello";

  console.log(typeof(str));    // String
  console.log(str.charAt(0));
  console.log(str.charAt(1));
  console.log(str.charAt(2));

  let Arr = str.split("");
  console.log(typeof(Arr));    // Object
  console.log(Arr[0]);
  console.log(Arr[1]);
  console.log(Arr[2]);
}
main();
#codewars/kata #codewars/8kyu #codewars/lang/lua #codewars/lang/c
[Date :: 5-28-2025]
[Link :: [Link](https://www.codewars.com/kata/53da3dbb4a5168369a0000fe)]

My Lua Solution:
```lua
local kata = {}

function kata.even_or_odd(number)
  if number % 2 == 0 then
    return 'Even'
  else
    return 'Odd'
  end
end

return kata
```

My C Solution:
```c
const char* even_or_odd(int number)
{
  if (number % 2 == 0) {
    return "Even";
  } else {
    return "Odd";
  }
}
```
#codewars/kata #codewars/7kyu #codewars/lang/lua 
[Date :: 5-28-2025]
[Link :: [Link](https://www.codewars.com/kata/5467e4d82edf8bbf40000155)]

My Lua Solution:
```lua
local function descending_order(num)
  digits = {}
  
  print(num)
  
  for char in string.gmatch(tostring(num), ".") do
    digits[#digits + 1] = char
    print("1")
  end
  
  for i=1, #digits do
    for j=1, #digits do
      local cur = digits[j]
      local lft = digits[j - 1]
      if lft and cur > lft then
        digits[j], digits[j-1] = digits[j-1], digits[j]
      end
    end
  end
  
  a = table.concat(digits)
  return tonumber(a)
end

return descending_order
```
#codewars/kata #codewars/6kyu #codewars/lang/lua 
[Date :: 5-28-2025]
[Link :: [Link](https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1)]

My Lua Solution:
```lua
local function duplicate_count(text)
  local word = {}
  local charDict = {}
  local dupeCount = 0
  
  -- convert str to char-str (like in C)
  for char in text:gmatch(".") do
    -- append chars to the word table
    word[#word+1] = char
  end
  
  -- count duplicates
  if #word == 1 then
    goto continue
  end
  
  for i=1, #word do
    for j=i+1 % #word, #word do
      if string.lower(word[i]) == string.lower(word[j]) then
        charDict[string.lower(word[i])] = string.lower(word[i])
      end
    end
  end
  
  ::continue::
  -- count all the dupes in our dict
  for _ in pairs(charDict) do
    dupeCount = dupeCount + 1
  end
  
  return dupeCount
end

return duplicate_count
```
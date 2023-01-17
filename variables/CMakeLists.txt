cmake_minimum_required(VERSION 3.10)
project(Varibales VERSION 1.0 LANGUAGES CXX)

set(myVar a b c) # myVar = "a;b;c"
message("The value of myVar = ${myVar}")
set(myVar a;b;c) # myVar = "a;b;c"
message("The value of myVar = ${myVar}")
set(myVar "a b c") # myVar = "a b c"
message("The value of myVar = ${myVar}")
set(myVar a b;c) # myVar = "a;b;c"
message("The value of myVar = ${myVar}")
set(myVar a "b c") # myVar = "a;b c"
message("The value of myVar = ${myVar}")


set(foo ab) # foo = "ab"
message("The value of foo = ${foo}")
set(bar ${foo}cd) # bar = "abcd"
message("The value of bar = ${bar}")
set(baz ${foo} cd) # baz = "ab;cd"
message("The value of baz = ${baz}")
set(myVar ba) # myVar = "ba"
message("The value of myVar = ${myVar}")
set(big "${${myVar}r}ef") # big = "${bar}ef" = "abcdef"
message("The value of big = ${big}")
set(${foo} xyz) # ab = "xyz"
message("The value of ${foo} = ${${foo}}")
set(bar ${notSetVar}) # bar = ""
message("The value of bar = ${bar}")


set(myVar "goes here")
set(multiLine "First line ${myVar}
Second line with a \"quoted\" word")
message("The value of myVar = ${myVar}")
message("The value of multiLine = ${multiLine}")

# Simple multi-line content with bracket syntax,
# no = needed between the square bracket markers
set(multiLine [[
First line
Second line
]])


# Bracket syntax prevents unwanted substitution
set(shellScript [=[
#!/bin/bash
[[ -n "${USER}" ]] && echo "Have USER"
]=])

# Equivalent code without bracket syntax
set(shellScript
"#!/bin/bash
[[ -n \"\${USER}\" ]] && echo \"Have USER\"
")


set(unix TRUE CACHE BOOL "Unix or others")
message("The value of unix = ${unix}")

option(tenten helpString TRUE)
message("The value of tenten is ${tenten}")


message("====================")
set(myVar foo) # Local myVar
message("The value of myVar is ${myVar}")
set(result ${myVar}) # result = foo
message("The value of result is ${result}")
set(myVar bar CACHE STRING “”) # Cache myVar
message("The value of myVar is ${myVar}")
set(result ${myVar})    # First run: result = bar
                        # Subsequent runs: result = foo
message("The value of result is ${result}")
set(myVar fred)
message("The value of myVar is ${myVar}")
set(result ${myVar}) # result = fred
message("The value of result is ${result}")

message("The value of dog is ${dog}")

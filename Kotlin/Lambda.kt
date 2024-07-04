// Title: Lambda / Anonymous Functions
// Date Created: July 4th, 2024

/* Description:
 * Lambda functions are described as a "function literal".
 * "Function literals are functions that are not declared but are passed immediately as an expression." (Kotlin.org) */

/* Application:
 * Lambdas are commonly used as the argument into another function. 
 * You could technically just write a normal function declaration and pass the result.
 * But, a lambda is considered more robust and less wordy in your code (when appropriately used).
 * They have some other creative applications to, like ActionListeners in Java for UI elements. */

// full synctatic form of a lambda (Kotlin.org)
val sum: (Int, Int) -> Int = { x: Int, y: Int -> x + y }

// lambda without the optional syntax (Kotlin.org)
val sum1 = { x: Int, y: Int -> x + y }

fun main() {
    	// one common application for the lambda function is as an input into the map() function
	var listOfNumbers = listOf(1,2,3,4,5)
	// square all even numbers in the list
	val evenNumbersSquared = listOfNumbers.filter {number -> number % 2 == 0}.map {number -> number * number}
	// print the results
	System.out.println(evenNumbersSquared)
}


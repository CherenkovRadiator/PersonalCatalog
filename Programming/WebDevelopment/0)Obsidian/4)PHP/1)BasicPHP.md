# Syntax
- Php code is included between `<?php` and `?>`.
- `echo` is used to print output.
- If used in a web environment any HTML code along in PHP's strings is interpreted as any other HTML code.
- `//` is used to create single line comments. `/*` and `*/` are used for multi-line comments.
- Each line of code in php ends with `;`.

---
# Variables and Data Types
- Variables are created using `$` before their name like:

```php
$name = "David";
```

- Variable don't require data types to be mentioned explicitly.
- The four main data types are:
	- String
		- String in PHP is defined using single or double quotes.
		- `{}` can be used to add code in between the string.
		- `.` is used to concatenate strings with echo.
	- Integer
		- Integer and/or float have basic operators like +,-,\*,/,++,-- and normal operator precedence.
	- float
	- Boolean
		- When we try to print out `true` the value `1` is printed out and when we try the same for `false` nothing is printed out.
	- Null
		- `null` is used when there is no value in the variable to store.

---
# $\_GET and $\_POST
- $\_GET and $\_POST are special variable in PHP used to collect data from HTML forms.
- The data that is received is in an hash map format stored inside these variables where the `name` of the input field is the key and it's corresponding value is the value inputted.
- $\_GET:
	- Data is appended to the URL
	- NOT SECURE
	- char limit
	- Bookmark is possible w/ the values
	- Get requests can be cached
	- Better for a search page
- $\_POST:
	- Data is packaged in the body of the HTTP request
	- MORE SECURE
	- No data limit
	- Cannot bookmark
	- GET requests are not cached
	- Better for submitting credentials
- Both $\_GET and $\_POST are associative arrays.

---
# Math functions
- There are some common math related math functions that come with PHP like:
	- `abs()` taking only one argument and return the absolute value for that number.
	- `round()` taking number as the input and return the rounded value for that number. It can also take a second argument for precision i.e. the values after the decimal point.
	- `floor()` is used to round the values to their lower bound.
	- `ceil()` is used to round the values to their upper bound.
	- `sqrt()` is used to find the square root of the number provided.
	- `pow()` is used to find the power of first number raised to the second number.
	- `max()` is used to find maximum among the numbers provided.
	- `min()` is used to find minimum among the numbers provided.
	- `pi()` is used to get the value of pi.
	- `rand()` is used to get a random value up to 2 billion. A range can be defined using two arguments giving starting and ending range.

---
# Flow Control
- Syntax for if-else statement is:

```php
if (condition) {
	// code
}
elseif(condition) {
	//code
}
else {
	//code
}
```

## Logical Operators
- These include:
	- `AND` or `&&`: if both operands are *true* then return *true*.
	- `or` or `||`: if either of the operands are *true* return *true*.
	- `xor`: if either operand is *true*, but *not both* then return *true*.
	- `!`: *not operator* turns a *true* value to *false* or vise-versa.

---
# Switch Statements
- The syntax for switch statements is:

```php
switch (expression1){
	case (match_case):
		//code
	case (match_case):
		//code
	...
	default:
		//code
}
```

---
# Loops
- PHP has two types of loops: For loops and while loops.

## For loops
- Syntax for for loops is:

```php
for (variable; condition; increment/decrement){
	//code
}
```

## While loops
- Syntax for while loops is:

```php
While (condition) {
	//code
}
```

- The variable has to be declared before hand
- The increment/decrement of the variable as well as the break point for the loop has to be defined inside the loop.

---
# Array
- An array is a variable that can store multiple values in it.
- Syntax to create an array is:

```php
$arr = array("item1", "item2", "item3");
```

- An array can't be printed in it's entirety at once i.e. something like `echo $arr` won't work.
- A particular element can be accessed using it's index like: `$arr[1]`. Same can also be used to change the value at that index like `$arr[0] = "new";`
- `foreach()` is used to iterate over a list. Syntax:

```php
foreach($arr as ar) {
	echo ar;
}
```

- Some array related functions include:
	- `array_push()`: appends items to the end of the array. Takes the array and the items to be added respectively.
	- `array_pop()`: removes the last item from the array. Takes the array to be used on.
	- `array_shift()`: removes the first item from the array and shift the index accordingly. Takes the array to be used on.
	- `array_reverse()`: returns an array with items in reversed order. Takes the array to be reversed.
	- `count()`: return the number of items in an array. Take the array to count.

## Associative Array
- These are the arrays where each item is a key value pair. The syntax to create an associative arrays is:

```php
$AsArr = array("key1" => "value1",
			  "key2" => "value2",
			  "key3" => "value3");
```

- Each value can be accessed using the respective key like: `$AsArr["key2"]` and can be changed as well.
- It has functions similar to normal array to it like: `array_push()`, `array_pop()`, `array_shift()`, `array_reverse()`, `count()`.
- It has some additional functions related to it like:
	- `array_keys()`: Takes the array and returns an array of it's keys.
	- `array_values()`: Takes the array and return an array of it's values.
	- `array_flip()`: Takes the array and swaps it's keys with respective values and vise-versa.
- `foreach()` is also used to iterate over associative arrays but a little differently like:

```php
foreach($AssArr as $key => $value) {
	echo "The key is {$key} and the value is {$value}.";
}
```

---
# `isset()` and `empty()`
- `isset()`: takes a variable and return TRUE if the variable is declared and has a value set to it and is not null.

```php
isset($var); // FALSE: The variable is not declared

$var = "some string";
isset($var); // TRUE: The variable is declared and is set to a value

$var = "";
isset($var); // FALSE: The variable is declared and is set to a value

$var = true;
isset($var); // TRUE: The variable is declared and is set to a value

$var = false;
isset($var); // TRUE: The variable is declared and is set to a value

$var = null;
isset($var); // FALSE: the variable is declared but is set to null
```

- `empty()`: takes a variable and return TRUE if the variable is declared and has a value set to it and is not null, "" (empty string), or `false`.

```php
empty($var); // FALSE: The variable is not declared

$var = "some string";
empty($var); // TRUE: The variable is declared and is set to a value

$var = "";
empty($var); // FALSE: The variable is declared but is set to an empty string

$var = true;
empty($var); // TRUE: The variable is declared and is set to a value

$var = false;
empty($var); // FALSE: The variable is declared but is set to false

$var = null;
empty($var); // FALSE: the variable is declared but is set to null
```

---
# Functions
- Syntax for making functions is:

```php
function func_name ($args) {
	//code
}
```

## String Functions
- Functions related to strings:
	- `strtolower()`: takes a string and return the same with all letter in lowercase
	- `strtoupper()`: takes a string and return the same with all letter in uppercase
	- `trim()`: takes a string and return the same with leading and trailing spaces removed
	- `str_pad()`: add extra character to make the whole string of defined length. Takes the string, total length to be made of the string and another string to use to fill with to make up the length.
	- `str_replace()`: replaces part of a string with other string. Takes the part to be replace, string to replace with and string to perform it on.
	- `strrev()`: takes a string return the same in reversed order of characters.
	- `str_shuffle`: takes a string and return shuffled string from the same.
	- `str_cmp()`: takes two strings and compares them. Returns 0 if both are same 1 or -1 otherwise.
	- `strlen()`: takes a string and returns it's length
	- `strpos()`: takes two strings and returns the position of the second in the first.
	- `substr()`: return sub string from a string of defined indexes. Takes the string to work on, the starting index and the ending index. In case of all the characters from one index the ending index can be omitted.
	- `explode()`: splits the string into an array. Takes the character(s) to split on and the string to split.
	- `implode()`: opposite of `explode()`, joins items of an array to create a string. Takes character(s) to join with and the array to join.

---
# Sanitize/Validate input
- In PHP an input from HTML can be sanitized i.e. can be turned into data that is not malicious. 
- This is done using `filter_input()` function which takes:
	- Method of the input: `INPUT_POST` or `INPUT_GET`, depending on the type it was submitted by the form.
	- Name of the field of input as a string.
	- Type of filter like: `FILTER_SANITIZE_SPECIAL_CHAR` to sanitize characters, `FILTER_SANITIZE_NUMBER_INT` to sanitize numbers, `FILTER_SANITIZE_EMAIL` to sanitize emails etc.
- The function then return the sanitized string back.
- In PHP an input from HTML can be checked for it's validity.
- This is also done using `filter_input()` function just with different 3rd argument that defines filter like:
	- `FILTER_VALIDATE_INT` which checks for integer validity in the input.
	- `FILTER_VALIDATE_EMAIL` which checks for email validity in the input.
	- etc.
- When checked for validity, if the input is not valid then the function simply returns an empty string otherwise a non-empty string.

---
# `include()`
- `include()` function is used to include other files in the current file, this file can be some other PHP, HTML, txt etc.
- For example:
```php
<?php
	include("header.html");
?>

<html>
	<head></head>
	<body>
		The contents of the webpage.
	</body>
</html>

<?php
	include("footer.html");
?>
```

---
# Cookies
- A cookie can be created using `setcookies()` functions. It creates an associative array of the cookies. 
- It takes:
	- The key of the cookie
	- the value of the cookie
	- the time after which it will expire. Can be set using `time()` that gives current time plus the time in seconds to wait till like `time() + 86400*2` for two days.
	- the path where the cookies will be stored. `"/"` is the root where most are stored.
- Since cookies are stored as associative array they need to be accessed the same way as while. This array is stored in `$_COOKIE` super global variable. Like:
```php
foreach($_COOKIE as $key => $value){
	echo "The key for cookies is {$key} which has the value {$value}.";
}
```

---
# Sessions
- PHP can also create a session. A session starts from the point `session_start()` is executed till `session_destroy()` is executed.
- While the session exists a `$_SESSION` super global variable exists which is an associative array.
- During the session this variable can be used to store values for the sessions existence.

---
# Server
- The web server create a `$_SERVER` super global variable that stores headers, paths and script location.
- It is an associative array.
- It contains information like:
```
MIBDIRS = C:/xampp/php/extras/mibs  
MYSQL_HOME = \xampp\mysql\bin  
OPENSSL_CONF = C:/xampp/apache/bin/openssl.cnf  
PHP_PEAR_SYSCONF_DIR = \xampp\php  
PHPRC = \xampp\php  
TMP = \xampp\tmp  
HTTP_HOST = localhost  
HTTP_USER_AGENT = Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:134.0) Gecko/20100101 Firefox/134.0  
HTTP_ACCEPT = text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8  
HTTP_ACCEPT_LANGUAGE = en-US,en;q=0.5  
HTTP_ACCEPT_ENCODING = gzip, deflate, br, zstd  
HTTP_SEC_GPC = 1  
HTTP_CONNECTION = keep-alive  
HTTP_UPGRADE_INSECURE_REQUESTS = 1  
HTTP_SEC_FETCH_DEST = document  
HTTP_SEC_FETCH_MODE = navigate  
HTTP_SEC_FETCH_SITE = cross-site  
HTTP_PRIORITY = u=0, i  
PATH = C:\Python312\Scripts\;C:\Python312\;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;C:\Program Files\Git\cmd;C:\Program Files\nodejs\;C:\ProgramData\chocolatey\bin;C:\xampp\php;C:\Users\Priyanka\AppData\Local\Programs\Python\Python313\;C:\Users\Priyanka\AppData\Local\Microsoft\WindowsApps;C:\Users\Priyanka\AppData\Local\Programs\Microsoft VS Code\bin;C:\MinGW\bin;C:\sqlite;C:\Users\Priyanka\AppData\Local\Microsoft\WinGet\Packages\Schniz.fnm_Microsoft.Winget.Source_8wekyb3d8bbwe;C:\Users\Priyanka\AppData\Roaming\npm;C:\Users\Priyanka\AppData\Roaming\Python\Python312\Scripts;C:\tools\neovim\nvim-win64\bin;  
SystemRoot = C:\WINDOWS  
COMSPEC = C:\WINDOWS\system32\cmd.exe  
PATHEXT = .COM;.EXE;.BAT;.CMD;.VBS;.VBE;.JS;.JSE;.WSF;.WSH;.MSC;.PY;.PYW  
WINDIR = C:\WINDOWS  
SERVER_SIGNATURE =

Apache/2.4.58 (Win64) OpenSSL/3.1.3 PHP/8.2.12 Server at localhost Port 80

  
SERVER_SOFTWARE = Apache/2.4.58 (Win64) OpenSSL/3.1.3 PHP/8.2.12  
SERVER_NAME = localhost  
SERVER_ADDR = 127.0.0.1  
SERVER_PORT = 80  
REMOTE_ADDR = 127.0.0.1  
DOCUMENT_ROOT = C:/xampp/htdocs  
REQUEST_SCHEME = http  
CONTEXT_PREFIX =  
CONTEXT_DOCUMENT_ROOT = C:/xampp/htdocs  
SERVER_ADMIN = postmaster@localhost  
SCRIPT_FILENAME = C:/xampp/htdocs/website/test.php  
REMOTE_PORT = 62827  
GATEWAY_INTERFACE = CGI/1.1  
SERVER_PROTOCOL = HTTP/1.1  
REQUEST_METHOD = GET  
QUERY_STRING =  
REQUEST_URI = /website/test.php  
SCRIPT_NAME = /website/test.php  
PHP_SELF = /website/test.php  
REQUEST_TIME_FLOAT = 1738448731.3617  
REQUEST_TIME = 1738448731
```

---
# Hashing passwords
- `password_hash()` function can be used to hash a password with a specified hashing algorithm.
- It takes the string to be hashed and the algorithm to use. 
- `PASSWORD_DEFAULT` can be used instead of any algorithm name in which case the function will used the default hashing algorithm which is bcrypt.
- Then, `password_verify()` function can be used to mathematically check if a string is same as the hash. 
- It takes the string and the hash to be checked respectively. If they match the function return `true`, nothing or `false` otherwise.


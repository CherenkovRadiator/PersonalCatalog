# Flask
### From Static to Dynamic Websites

- **In previous weeks, the HTTP server program was used to serve static content like HTML, CSS, and JavaScript.** This is standard for basic websites.
- **This week focuses on building dynamic websites, moving beyond static content.** Dynamic websites involve user interaction and content that changes in real-time.
- **Flask is a microframework that makes it easier to build web applications using Python.** It's popular for its simplicity and flexibility.
- **Django is another popular Python framework, but it is more comprehensive and complex than Flask.** The choice between the two often depends on project requirements and scale.

### Introduction to Flask

- **Flask provides the flask run command to start a web server.*] This replaces the HTTP server command used for static content.
- **Flask is a framework, meaning it dictates conventions for building applications.** These conventions, based on best practices, ensure consistency and maintainability.
- **Key Flask concepts include:requirements.txt:** A file listing third-party libraries used in the project. This simplifies library installation.
- **static folder:** Stores static files like images, CSS, and JavaScript. Isolating these files promotes organization.
- **templates folder:** Holds HTML files that act as templates for dynamic content. These templates use Jinja, a templating language, for dynamic content insertion.

### Building a "Hello, World" Flask Application

- **Instead of hardcoding "Hello, world" in HTML, Flask allows for dynamic generation.** This involves using Jinja templates to insert dynamic content.
- `**render_template` is a Flask function for rendering HTML templates.** It takes the template name as an argument and can also accept variables.
- **Jinja uses double curly braces {{ }} as placeholders for dynamic content.** This is how variables from Python are inserted into the HTML.
- **Flask's request object provides access to HTTP requests, including URL parameters.** The request.args dictionary contains key-value pairs from the URL.
- **To handle missing URL parameters gracefully, use request.args.get("key", "default_value").**  This provides a default value if the key is not found.

### Working with Forms and Routes

- **Flask uses routes to map URLs to specific functions in the application.**  These functions handle different actions based on the requested URL.
- **Forms in HTML use the method attribute to specify how data is sent to the server.**  GET sends data in the URL, while POST sends it in the request body.
- **GET is generally used for simple data retrieval, while POST is preferred for sensitive data like passwords.**  This helps maintain privacy.
- **The `request.form` dictionary in Flask contains data submitted via POST.**  This is how form data is accessed in the Python code.
- **To support multiple HTTP methods for a route, use the methods argument.**  For example, methods=["GET", "POST"] allows both methods.

### Templating with Jinja and Inheritance

- **Jinja's extends keyword allows templates to inherit from a base layout.**  This promotes code reuse and consistency.
- **Jinja's block and `endblock` tags define placeholders for content in child templates.**  This is how specific sections of the layout are customized.
- **Jinja allows for conditional logic using curly braces with percent signs {% %}.**  For example, {% if condition %} ... {% endif %}.

### Data Validation and Security

- **Always validate user input to prevent errors and security vulnerabilities.**  This involves checking for required fields, data types, and valid values.
- **Using checkboxes in HTML forms allows multiple selections.**  To get all selected values, use `request.form.getlist("key")`. 
- **Be wary of user input tampering, as users can modify HTML and bypass client-side validation.** , Server-side validation is crucial for security.
- **Avoid using Python f-strings to directly insert user input into SQL queries.**  Use parameterized queries with placeholders (e.g., ?) to prevent SQL injection attacks.

### Sessions, Cookies, and State Management

- **Sessions allow web applications to maintain state, remembering information about a user across multiple requests.**  This is often used for logins, shopping carts, and personalized experiences.
- **Cookies are small pieces of data stored by the browser and sent back to the server with each request.**  They are used to identify users and maintain sessions.
- **The Set-Cookie HTTP header is used by the server to instruct the browser to store a cookie.**  Cookies can have expiration times and can be restricted to specific domains and paths.
- **Flask provides the session object for managing session data.**  It can be treated like a dictionary to store and retrieve values.
- **`session.clear()` clears all session data, effectively logging out the user.** 

### Working with Databases and SQL

- **The `db.execute()` function from the CS50 library is used to execute SQL queries in Python.**  It returns a list of dictionaries representing the results.
- **Use primary keys to uniquely identify records in a database.**  This is essential for operations like updating and deleting specific records.
- **Foreign keys establish relationships between tables in a database.** 

### Building a Simple E-commerce Store

- **The provided example demonstrates building a basic online store using Flask and SQL.** 
- **Key concepts in the example include:**
	- **Displaying a catalog of products from a database.** 
	- **Adding items to a shopping cart using sessions.** 
	- **Retrieving cart contents and displaying them to the user.** 
	- **Handling form submissions and data validation.** 

### Implementing Search Functionality

- **The example demonstrates building a simple search engine for IMDb data.** 
- **Key concepts in the example include: **
	- **Retrieving data from a database based on user search queries.** 
	- **Implementing wildcard searches using SQL LIKE operator.** 
	- **Displaying search results in a user-friendly format.** 

### Autocomplete and AJAX

- **The example demonstrates implementing autocomplete functionality using AJAX.** 
- **Key concepts in the example include:**
	- **Sending asynchronous requests to the server as the user types.** 
	- **Dynamically updating the web page with search results without reloading.** 
	- **Using JavaScript to handle user input and server responses.** 
	- 
### APIs and JSON

- **APIs (Application Programming Interfaces) provide standardized ways for software systems to communicate and exchange data.** They allow different applications to interact with each other.
- **JSON (JavaScript Object Notation) is a popular data format for APIs.** It's lightweight, human-readable, and easily parsed by machines.
- **The `jsonify()` function in Flask converts Python data structures to JSON format.** This is used to send data back to the browser in a structured format.

### Model-View-Controller (MVC)

- **MVC is a software design pattern that separates an application into three interconnected parts:** 
- **Model:** Handles data and business logic.
- **View:** Presents data to the user.
- **Controller:** Interacts with the model and view, handling user requests and responses.
- **Flask applications often follow the MVC pattern, promoting organization and maintainability.**
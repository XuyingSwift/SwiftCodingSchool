# Application Porgramming Interface API
Application Programming Interfaces (API) are used for communication between various systems. 
Different Architectures: 
- Simple Object Access Protocol (SOAP), 
- Graph Query Language (GraphQL), 
- REpresentational State Transfer (REST). (JavaScript Object Notation (JSON))

## The REST Architectures
REST follows the client-server model. The server provides endpoints to connect to and serves data per the request. 
The client connects to the endpoint and requests data. The request and response always follow the HTTP request-response model.
- **Resource:** Anything that can be accessed using a URI is termed a resouce. 
- **REpresentational:** The formats in which a client can request a resource are known as representations.
- **Method:** The way by which client communicates with the server to perform certain operations is referred to as the method supported by the resource. REST uses HTTP as the protocol for communication.
- **Message:** Each request and response is referred to as message. Messsages should be self contained.
- **State and Session:** The currently sent representation is known as the state of the resource. If the client needs to track waht the state was before the current one,
they will need to implement a session at its end. In REST, the server is only concerned with the state of the resource and not the state of the client.
It's stateless. This means the server does not keep track of the requests it receives. It's the client's responsibility to provide all the required information in the request.
The responses are cacheable. The server must mark each response as either cacheable or non-cacheable.

## requests
The requests library  is an elegant and simple HTTP library for Python. It allows us to send HTTP/1.1 requests quite easily. There is 
no need to manually add query strings to our URLs or to form-encode PUT & POST data. Keep-alive and HTTP connection pooling are 100% automatic.





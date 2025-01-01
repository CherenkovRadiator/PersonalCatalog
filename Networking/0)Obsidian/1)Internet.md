# What is The Internet?
The *Internet* is a global network of interconnected computers that allows users to communicate and share information. It is made up of smaller networks, public, private, academic, business and government. Internet uses a set of protocols to share information across devices and networks which is collectively known as *TCP/IP* suit.

---
# TCP/IP
TCP/IP (Transmission Control Protocol / Internet Protocol) is a suit (or set) of protocols that define how data is transferred across the internet. Each unit of data being transferred is known as a *Packet*. It uses IP addresses to uniquely identify each device on the Internet.
## How does TCP/IP model work?
TCP/IP model has 4 layers which wraps data with it's own layer of metadata, these layers define basic things needed to transmit data such as where the data is coming from where it's going to what type of data it is etc.
The 4 layers are:
1) Networking Access Layer
	This layer deals with MAC addresses (physical address) and how data is transferred across physically connected devices. The data in transit at this level is called a *frame*.
2) Internet or Network layer
	This layer deals with IP addresses and how data is transferred over the internet across devices or within a network using IP addresses. The data in transit at this level is called a *Packet*.
3) Transport layer
	This layer defines how the connection is established between two devices. There are two main ways of doing so:
	UDP: The connection is not established securely and the data transfer is not reliable as data packets won't be sent again if lost during transit but the transfer is faster.
	TCP: The connection is established securely and the transfer is reliable as data packets will be sent again if lost during transit but the transfer is slower.
4) Application Layer
	This layer includes information about how long a connection lasts and how it's managed (*session management*), information about what kind of data is being transmitted and method and encryption via which the data will be transmitted..

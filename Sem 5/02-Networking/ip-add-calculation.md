# Networking Basics

### 1. IP Address Calculation:  
When you calculate the number of available IP addresses in a network, you subtract 2.  
- The `-2` accounts for:  
  - 1 for the **network address** (this identifies the network itself),  
  - 1 for the **broadcast address** (used to send data to all devices on the network).  
For example, in a network with 2^16 addresses, you would subtract 2 to find the usable IP addresses.

### 2. Subnet Masks for Different Classes:

- **Class A and Class B:** You can use the Class C subnet mask.
- **Class C:** You **cannot** use the subnet mask of Class A or B for Class C.  
Try it out using **Cisco Packet Tracer** to experiment with different subnet masks and network classes.

### 3. NAT (Network Address Translation):

**What is NAT?**
- **NAT** is a method used to translate private IP addresses to public IP addresses (and vice versa).
  
**How does NAT work?**
- When a computer with a private IP address (e.g., 10.10.10.1) wants to access the internet, it sends a request to the router.
- The router then replaces the private IP address with its own public IP address. This allows the device to be identified on the internet.
- When the router gets a response back, it knows which device made the request and sends the data back to the correct device by replacing the public IP with the original private IP.

**Why is NAT used?**
- **Private IP addresses** are only used inside a local network and cannot be accessed from the internet.
- **Public IP addresses** are unique worldwide and can be used on the internet.
- **NAT** allows multiple devices inside a private network to share one public IP address while keeping their internal addresses hidden from the outside world.

### 4. IP Address and Subnet Mask:

- **IP Address:** This is like your "identity" in the network. It tells other devices who you are.
- **Subnet Mask:** This helps identify who your neighbors are in the network. It tells you which devices are directly connected to you within the same network.


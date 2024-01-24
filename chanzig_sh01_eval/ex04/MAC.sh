ifconfig | awk '/ether/ && !/autoselect \(1000/' | cut -b 8-24

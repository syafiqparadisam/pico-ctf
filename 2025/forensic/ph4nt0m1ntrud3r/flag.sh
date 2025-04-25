#!/bin/bash

tshark -r myNetworkTraffic.pcap -Y "tcp.len==12 || tcp.len==4" -T fields -e tcp.segment_data | xxd -p -r | base64 -d
tshark -r myNetworkTraffic.pcap -Y "tcp.len==12 || tcp.len==4" -T fields -e tcp.segment_data -e frame.time

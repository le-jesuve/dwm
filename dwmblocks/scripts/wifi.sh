#!/bin/bash
SSID=$(nmcli -t -f active,ssid dev wifi 2>/dev/null | awk -F: '/^yes:/ {print $2}')

if [ -n "$SSID" ]; then
    echo "󰖩  $SSID"
else
    echo "󰖪"
fi

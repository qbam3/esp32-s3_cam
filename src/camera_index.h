#ifndef CAMERA_INDEX_H
#define CAMERA_INDEX_H

#include <Arduino.h>

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>ESP32-S3 OV5640 Camera</title>
    <style>
        body {
            text-align: center;
            font-family: Arial, sans-serif;
            background-color: #111;
            color: #eee;
        }
        img {
            width: 640px;
            max-width: 100%;
            border-radius: 10px;
            margin-top: 20px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            margin: 10px;
            border: none;
            border-radius: 5px;
            cursor: pointer;
        }
        .capture {
            background-color: #28a745;
            color: white;
        }
        .reload {
            background-color: #007bff;
            color: white;
        }
    </style>
</head>
<body>

    <h2>ESP32-S3 OV5640 Live Stream</h2>

    <img src="/stream" id="stream">

    <br>

    <button class="capture" onclick="capture()">Take Snapshot</button>
    <button class="reload" onclick="location.reload()">Reload Stream</button>

    <script>
        function capture() {
            window.open('/capture', '_blank');
        }
    </script>

</body>
</html>
)rawliteral";

#endif
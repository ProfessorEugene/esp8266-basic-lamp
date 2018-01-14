#define CP_HTML "<html>\n"\
"    <head>\n"\
"        <style>\n"\
"        body {\n"\
"            background-color: black;\n"\
"            color: white;\n"\
"            margin-top: 0px;\n"\
"            margin-bottom: 0px;\n"\
"            margin-left: 0px;\n"\
"            margin-right: 0px;\n"\
"            padding: 0;\n"\
"        }\n"\
"        #header {\n"\
"            text-align: center\n"\
"        }\n"\
"        \n"\
"        #slider {\n"\
"            width: 100%;\n"\
"            height: 80px;\n"\
"\n"\
"        }\n"\
"        \n"\
"        #currentStatus{\n"\
"            width: 100%;\n"\
"            font-size: 500%;\n"\
"            font-family: sans-serif;\n"\
"            color: red;\n"\
"            text-align: center;\n"\
"            font-weight: bold;\n"\
"            \n"\
"        }\n"\
"\n"\
"        #bodyContainer{\n"\
"            position: relative;\n"\
"        }\n"\
"\n"\
"        #menu{\n"\
"            padding-top: 10%;\n"\
"            text-align: center;\n"\
"\n"\
"        }\n"\
"        /* stuff for slider */\n"\
"\n"\
"        #sliderContainer {\n"\
"            /* position: absolute; */\n"\
"            width: 100%;\n"\
"            height: 25%;\n"\
"            bottom: 0;\n"\
"        }\n"\
"\n"\
"        input {\n"\
"            background-color: black;\n"\
"        }\n"\
"\n"\
"        input[type=range] {\n"\
"            -webkit-appearance: none;\n"\
"            margin: 50px 0;\n"\
"            width: 100%;\n"\
"        }\n"\
"\n"\
"        input[type=range]:focus {\n"\
"            outline: none;\n"\
"        }\n"\
"\n"\
"        input[type=range]::-webkit-slider-runnable-track {\n"\
"            width: 100%;\n"\
"            height: 8.4px;\n"\
"            cursor: pointer;\n"\
"            animate: 0.2s;\n"\
"            box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;\n"\
"            background: #3071a9;\n"\
"            border-radius: 1.3px;\n"\
"            border: 0.2px solid #010101;\n"\
"        }\n"\
"\n"\
"        input[type=range]::-webkit-slider-thumb {\n"\
"            box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;\n"\
"            border: 1px solid #000000;\n"\
"            height: 100px;\n"\
"            width: 100px;\n"\
"            border-radius: 3px;\n"\
"            background: #ffffff;\n"\
"            cursor: pointer;\n"\
"            -webkit-appearance: none;\n"\
"            margin-top: -46px;\n"\
"        }\n"\
"\n"\
"        input[type=range]:focus::-webkit-slider-runnable-track {\n"\
"            background: #367ebd;\n"\
"        }\n"\
"\n"\
"        input[type=range]::-moz-range-track {\n"\
"            width: 100%;\n"\
"            height: 8.4px;\n"\
"            cursor: pointer;\n"\
"            animate: 0.2s;\n"\
"            box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;\n"\
"            background: #3071a9;\n"\
"            border-radius: 1.3px;\n"\
"            border: 0.2px solid #010101;\n"\
"        }\n"\
"\n"\
"        input[type=range]::-moz-range-thumb {\n"\
"            box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;\n"\
"            border: 1px solid #000000;\n"\
"            height: 36px;\n"\
"            width: 16px;\n"\
"            border-radius: 3px;\n"\
"            background: #ffffff;\n"\
"            cursor: pointer;\n"\
"        }\n"\
"\n"\
"        input[type=range]::-ms-track {\n"\
"            width: 100%;\n"\
"            height: 8.4px;\n"\
"            cursor: pointer;\n"\
"            animate: 0.2s;\n"\
"            background: transparent;\n"\
"            border-color: transparent;\n"\
"            border-width: 16px 0;\n"\
"            color: transparent;\n"\
"        }\n"\
"\n"\
"        input[type=range]::-ms-fill-lower {\n"\
"            background: #2a6495;\n"\
"            border: 0.2px solid #010101;\n"\
"            border-radius: 2.6px;\n"\
"            box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;\n"\
"        }\n"\
"\n"\
"        input[type=range]::-ms-fill-upper {\n"\
"            background: #3071a9;\n"\
"            border: 0.2px solid #010101;\n"\
"            border-radius: 2.6px;\n"\
"            box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;\n"\
"        }\n"\
"\n"\
"        input[type=range]::-ms-thumb {\n"\
"            box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;\n"\
"            border: 1px solid #000000;\n"\
"            height: 36px;\n"\
"            width: 16px;\n"\
"            border-radius: 3px;\n"\
"            background: #ffffff;\n"\
"            cursor: pointer;\n"\
"        }\n"\
"\n"\
"        input[type=range]:focus::-ms-fill-lower {\n"\
"            background: #3071a9;\n"\
"        }\n"\
"\n"\
"        input[type=range]:focus::-ms-fill-upper {\n"\
"            background: #367ebd;\n"\
"        }\n"\
"\n"\
"        </style>  \n"\
"    </head>\n"\
"    <body>\n"\
"        <div id=\"header\">\n"\
"            <h2>Suzie Clever Lamp 0.0.1</h2>\n"\
"        </div>\n"\
"        <div id=\"bodyContainer\">\n"\
"            <div id=\"currentStatus\">\n"\
"                0\n"\
"            </div>\n"\
"            <div id=\"sliderContainer\">\n"\
"                <input id=\"slider\" type=\"range\" min=\"0\" max=\"1023\" value=\"0\" />\n"\
"            </div>\n"\
"            <div id=\"menu\">\n"\
"                <a href=\"/wifi\">Configure WiFi</a>\n"\
"            </div>\n"\
"        </div>\n"\
"        <script>\n"\
"(function(){\n"\
"    var state = 0;\n"\
"    var requesting = false;\n"\
"    // var prefix = 'http://suzielamp.local/'\n"\
"    var prefix = '';\n"\
"    var sliderEl = document.getElementById('slider');\n"\
"    var curStatusEl = document.getElementById('currentStatus')\n"\
"    var doGET = function (url, callback) {\n"\
"        requesting = true;\n"\
"        var xhr = new XMLHttpRequest();\n"\
"        xhr.open('GET', url, true);\n"\
"        xhr.onload = function () {\n"\
"            requesting = false;\n"\
"            callback(JSON.parse(xhr.responseText));\n"\
"        };\n"\
"        xhr.send(null);\n"\
"    }\n"\
"    var getStatus = function (callback) {\n"\
"        doGET(prefix + 'get', callback);\n"\
"    }\n"\
"    var setStatus = function (status, callback) {\n"\
"        if (requesting == true) {\n"\
"            return;\n"\
"        }\n"\
"        doGET(prefix + 'set?s=' + status, callback);\n"\
"    }\n"\
"    var updateUI = function(){\n"\
"        sliderEl.value = state;\n"\
"        curStatusEl.innerHTML = Math.round(state / 10.23) + '%';\n"\
"    }\n"\
"    /* initialize! */\n"\
"    getStatus( function(result) {\n"\
"        /* update current state */\n"\
"        state = result.status;\n"\
"        /* update UI */\n"\
"        updateUI();\n"\
"        /* register slider controls */\n"\
"        sliderEl.addEventListener('change', function () {\n"\
"            state = sliderEl.value;\n"\
"            /* update! */\n"\
"            setStatus(state, function(result) {\n"\
"                state = result.status;\n"\
"                updateUI();\n"\
"            });\n"\
"        });\n"\
"    });\n"\
"})(); \n"\
"        </script>\n"\
"    </body>\n"\
"</html>\n"

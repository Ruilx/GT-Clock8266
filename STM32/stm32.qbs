import qbs

Project {
    minimumQbsVersion: "1.9"

    property string device: "STM32F103C8T6"
    property bool cmsis_dsp: false
    property bool bootloader: false
    property int hwver: 0x0001
    property int swver: 0x0001
    property string hwver_str: ("0000" + hwver.toString(16)).slice(-4)
    property string swver_str: ("0000" + swver.toString(16)).slice(-4)

    references: [
        "CMSIS",
        "core.qbs",
    ]

    CppApplication {
        name: project.name
        type: ["application", "hex", "size", "map"]
        Depends {name: "core"}
        Depends {name: "gcc-none"}

        files: [
            "main.c",
        ]

        Group {
            name: "Linker script"
            files: [
                "ld/0_STM32F103C8T6_FLASH.ld",
                "ld/1_common.ld",
            ]
        }

        Group {     // Properties for the produced executable
            fileTagsFilter: ["application", "hex", "bin", "map"]
            qbs.install: true
        }
    }
}

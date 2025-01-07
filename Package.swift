// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterViskum",
    products: [
        .library(name: "TreeSitterViskum", targets: ["TreeSitterViskum"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterViskum",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterViskumTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterViskum",
            ],
            path: "bindings/swift/TreeSitterViskumTests"
        )
    ],
    cLanguageStandard: .c11
)

ImMesh
==================

[![Latest Version](https://img.shields.io/badge/GitHub-Release-brightgreen?logo=github)](https://github.com/kitodoescode/ImMesh/releases/latest)
[![License](https://img.shields.io/badge/GitHub-License-blue?logo=github)](https://github.com/kitodoescode/ImMesh/blob/main/LICENSE)

## Overview

`ImMesh` (pronounced 'i-am-mesh') is a comprehensive C++ library and tool designed to parse, analyze, and visualize Roblox's FileMesh format. FileMesh is Roblox's proprietary 3D mesh format used extensively within the Roblox platform for storing and rendering 3D models and geometry data.

### Purpose

ImMesh provides developers and researchers with the ability to:

- **Parse FileMesh Data**: Read and interpret the binary structure of Roblox FileMesh files, extracting geometric information including vertices, faces, and mesh properties
- **Visualize Mesh Data**: Display parsed mesh data in an interactive visualization environment, allowing users to inspect 3D geometry in detail
- **Analyze Mesh Structure**: Extract and examine mesh metadata, topology, and other structural properties
- **Understand Roblox Formats**: Serve as a reference implementation for understanding the internal structure and organization of Roblox's mesh format

### Key Features

- Written in C++ for performance and efficiency
- Robust parsing of binary FileMesh data structures
- Interactive visualization capabilities for 3D mesh inspection
- Support for complex mesh geometries and topologies
- Extensible architecture for additional format support

### Technical Background

Roblox FileMesh files contain serialized 3D mesh data that represents geometric shapes used in Roblox games and experiences. This format encodes vertex positions, face connectivity, surface properties, and other attributes necessary for rendering 3D objects. ImMesh reverses engineers and interprets this format to provide accessibility to the underlying mesh data outside of the Roblox platform.

### Credits
_#_ [@MaximumADHD](https://github.com/MaximumADHD/) - Roblox DevForum post explaining FileMesh structure; you can check it out [here](https://devforum.roblox.com/t/roblox-filemesh-format-specification/326114).  
_#_ [@syringeefy](https://github.com/syringeefy) (i.e. @.syringee) - Contributor

#### License

<sup>
Licensed under <a href="LICENSE">Apache License, Version
2.0</a>.
</sup>

<br>

<sub>
Unless you explicitly state otherwise, any contribution intentionally submitted
for inclusion in this project by you, as defined in the Apache-2.0 license, shall
be dual licensed as above, without any additional terms or conditions.
</sub>

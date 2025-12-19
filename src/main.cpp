#include <iostream>
#include "FileMeshParser.h"

int main(int argc, char* argv[]) {
    std::cout << "ImMesh - Roblox FileMesh Parser and Visualizer" << std::endl;
    std::cout << "Version 1.0.0" << std::endl;

    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <mesh_file>" << std::endl;
        return 1;
    }

    ImMesh::FileMeshParser parser;
    ImMesh::MeshData meshData;

    if (parser.parseMeshFile(argv[1], meshData)) {
        std::cout << "Successfully parsed mesh file: " << argv[1] << std::endl;
        std::cout << "Vertices: " << meshData.vertices.size() << std::endl;
        std::cout << "Faces: " << meshData.faces.size() << std::endl;
    } else {
        std::cerr << "Failed to parse mesh file: " << argv[1] << std::endl;
        return 1;
    }

    return 0;
}

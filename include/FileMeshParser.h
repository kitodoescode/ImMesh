#ifndef IMMESH_FILEMESHPARSER_H
#define IMMESH_FILEMESHPARSER_H

#include <string>
#include <vector>
#include <cstdint>

namespace ImMesh {

struct Vertex {
    float x, y, z;
};

struct Face {
    uint32_t v1, v2, v3;
};

struct MeshData {
    std::vector<Vertex> vertices;
    std::vector<Face> faces;
};

class FileMeshParser {
public:
    FileMeshParser();
    ~FileMeshParser();

    bool parseMeshFile(const std::string& filePath, MeshData& outMeshData);
    bool writeMeshFile(const std::string& filePath, const MeshData& meshData);

private:
    bool validateHeader(const std::vector<uint8_t>& data);
};

} // namespace ImMesh

#endif // IMMESH_FILEMESHPARSER_H

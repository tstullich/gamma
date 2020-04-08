#pragma once

#include <string>
#include <vector>

#include "object.h"
#include "vector.h"

namespace gm {
class Mesh : public Object {
  Mesh(std::vector<Vector3f> vertices, std::vector<Vector3f> normals,
       std::vector<Vector3i> faces, std::string name, Vector3f location,
       Vector3f scale);
  std::vector<Vector3f> vertices;
  std::vector<Vector3f> normals;
  std::vector<Vector3i> faces;
};
}  // namespace gm
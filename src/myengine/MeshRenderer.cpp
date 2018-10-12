#include "MeshRenderer.h"
#include "Material.h"
//#include "Mesh.h"

std::shared_ptr<Mesh> MeshRenderer::GetMesh()
{
	return m_mesh;
}

std::shared_ptr<Material> MeshRenderer::GetMaterial()
{
	return m_material;
}

void MeshRenderer::SetMesh(std::weak_ptr<Mesh> _mesh)
{

}

void MeshRenderer::OnInit()
{

}

void MeshRenderer::OnDisplay()
{

}

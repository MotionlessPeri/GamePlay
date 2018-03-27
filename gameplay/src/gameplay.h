#pragma once

// Core
#include "Base.h"
#include "Platform.h"
#include "Logger.h"
#include "Game.h"
#include "MathUtil.h"
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Quaternion.h"
#include "Matrix.h"
#include "Frustum.h"
#include "BoundingSphere.h"
#include "BoundingBox.h"
#include "Plane.h"
#include "Ray.h"
#include "Rectangle.h"
#include "FileSystem.h"
#include "Stream.h"
#include "Serializable.h"
#include "Serializer.h"
#include "SerializerBinary.h"
#include "SerializerJson.h"
#include "Activator.h"
#include "Animation.h"
#include "Input.h"
#include "Script.h"
#include "Scene.h"
#include "SceneObject.h"

// Components
#include "Component.h"
#include "Camera.h"
#include "Light.h"
#include "Material.h"
#include "Renderer.h"
#include "Mesh.h"
#include "Sprite.h"
#include "Text.h"
#include "Tileset.h"
#include "Path.h"
//#include "Emitter.h"
//#include "Terrain.h"
//#include "Water.h"
//#include "Tree.h"
//#include "Decal.h"
//#include "Video.h"

// UI
//#include "UI.h"
//#include "UITheme.h"
//#include "UIThemeSet.h"
//#include "UILayout.h"
//#include "UIControl.h"
//#include "UIButton.h"
//#include "UICheckBox.h"
//#include "UIRadioButon.h"
//#include "UILabel.h"
//#include "UITextBox.h"
//#include "UIProgressBar.h"
//#include "UISlider.h"
//#include "UIComboBox.h"
//#include "UIListBox.h"
//#include "UIImageView.h"
//#include "UIVideoView.h"

// Graphics
#include "Graphics.h"
#include "Format.h"
#include "Buffer.h"
#include "Texture.h"
#include "RenderPass.h"
#include "Sampler.h"
#include "Shader.h"
#include "VertexLayout.h"
#include "DescriptorSet.h"
#include "RenderPipeline.h"
#include "CommandBuffer.h"
#include "Semaphore.h"

// Asset
#include "Asset.h"
#include "AssetManager.h"
#include "AssetLoader.h"
//#include "SceneLoader.h"
#include "TextureLoader.h"
//#include "MeshLoader.h"
//#include "MaterialLoader.h"
//#include "FontLoader.h"
//#include "SpriteLoader.h"

// Audio
#include "Audio.h"
#include "AudioClip.h"
#include "AudioListener.h"
#include "AudioSource.h"

// Physics
#include "Physics.h"
#include "PhysicsMaterial.h"
#include "PhysicsCollider.h"
#include "PhysicsRigidBody.h"
#include "PhysicsJoint.h"
#include "PhysicsJointFixed.h"
#include "PhysicsJointHinge.h"
#include "PhysicsJointSpring.h"
#include "PhysicsJointSocket.h"
#include "PhysicsJointGeneric.h"
#include "PhysicsCharacter.h"
#include "PhysicsVehicle.h"
#include "PhysicsCloth.h"

using namespace gameplay;
